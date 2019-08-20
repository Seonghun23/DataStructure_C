//
//  HashTable_Basic.c
//  DataStructure_C
//
//  Created by Seonghun Kim on 20/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#include "HashTable_Basic.h"
//
//HashTable* SHT_createHashTable(int tableSize) {
//    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
//    
//    ht->table = (NODE*)malloc(sizeof(NODE) * tableSize);
//    ht->tableSize = tableSize;
//    
//    return ht;
//}
//
//void SHT_destroyHashTable(HashTable* ht) {
//    free(ht->table);
//    free(ht);
//}
//
//void SHT_set(HashTable* ht, keyType key, valueType value) {
//    int addr = SHT_hash(key, ht->tableSize);
//    
//    ht->table[addr].key = key;
//    ht->table[addr].value = value;
//}
//
//valueType SHT_get(HashTable* ht, keyType key) {
//    int addr = SHT_hash(key, ht->tableSize);
//    
//    return ht->table[addr].value;
//}
//
//int SHT_hash(keyType key, int tableSize) {
//    return key % tableSize;
//}
