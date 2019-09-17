//
//  hash_table.c
//  DataStructure_C
//
//  Created by Seonghun Kim on 17/09/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "hash_table.h"

entry_t *ht_pair(const char *key, const char *value) {
    // allocate the entry
    entry_t *entry = malloc(sizeof(entry_t) * 1);
    entry->key = malloc(strlen(key) + 1);
    entry->value = malloc(strlen(value) + 1);
    
    // copy the key and value in place
    strcpy(entry->key, key);
    strcpy(entry->value, value);
    
    // next starts out null but may be set later on
    entry->next = NULL;
    
    return entry;
}

void ht_set(ht_t *hashtable, const char *key, const char *value) {
    unsigned long int slot = hash(key);
    
    // try to look up an entry set
    entry_t *entry = hashtable->entries[slot];
    
    // no entry means slot empty, insert immediately
    if (entry == NULL) {
        hashtable->entries[slot] = ht_pair(key, value);
        return;
    }
    
    entry_t *prev;
    
    // walk through each entry until either the end is
    // reached or a matching key is found
    while (entry != NULL) {
        // check key
        if (strcmp(entry->key, key) == 0) {
            // match found, replace value
            free(entry->value);
            entry->value = malloc(strlen(value) + 1);
            strcpy(entry->value, value);
            return;
        }
        
        // walk to next
        prev = entry;
        entry = prev->next;
    }
    
    prev->next = ht_pair(key, value);
}

char *ht_get(ht_t *hashtable, const char *key) {
    unsigned long int slot = hash(key);
    
    // try to find a valid slot
    entry_t *entry = hashtable->entries[slot];
    
    // no slot means no entry
    if (entry == NULL) {
        return NULL;
    }
    
    // walk through each entry in the slot, which could just be a single thing
    while (entry != NULL) {
        // return value if found
        if (strcmp(entry->key, key) == 0) {
            return entry->value;
        }
        
        // process to next key if available
        entry = entry->next;
    }
    
    // reaching here means there were >= 1 entries but no key match
    return NULL;
}

ht_t *ht_create(void) {
    // allocate table
    ht_t *hashtable = malloc(sizeof(ht_t) * 1);
    
    // allocate table entries
    hashtable->entries = malloc(sizeof(entry_t*) * TABLE_SIZE);
    
    // set each to null (needed for proper operation)
    int i = 0;
    for (; i < TABLE_SIZE; ++i) {
        hashtable->entries[i] = NULL;
    }
    
    return hashtable;
}

unsigned long int hash(const char *key) {
    unsigned long int value = 0;
    unsigned int i = 0;
    unsigned long int key_len = strlen(key);
    
    // do several rounds of multiplication
    for (; i < key_len; ++i) {
        value = value * 37 + key[i];
    }
    
    // make sure value is 0 <= value < TABLE_SIZE
    value = value % TABLE_SIZE;
    
    return value;
}
