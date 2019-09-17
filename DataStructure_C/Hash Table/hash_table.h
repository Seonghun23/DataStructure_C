//
//  hash_table.h
//  DataStructure_C
//
//  Created by Seonghun Kim on 17/09/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#ifndef hash_table_h
#define hash_table_h

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100000

typedef struct entry_t {
    char *key;
    char *value;
    struct entry_t * next; 
} entry_t;

typedef struct {
    entry_t **entries;
} ht_t;

entry_t *ht_pair(const char *key, const char *value);
void ht_set(ht_t *hashtable, const char *key, const char *value);
char *ht_get(ht_t *hashtable, const char *key);
ht_t *ht_create(void);
unsigned long int hash(const char *key);

#endif /* hash_table_h */
