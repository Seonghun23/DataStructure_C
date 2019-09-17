//
//  HashTable_OpenAddressing.h
//  DataStructure_C
//
//  Created by Seonghun Kim on 20/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#ifndef HashTable_OpenAddressing_h
//#define HashTable_OpenAddressing_h
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef char* keyType;
//typedef char* valueType;
//
//enum ElementStatus
//{
//    EMPTY = 0,
//    OCCUPIED = 1
//};
//
//typedef struct tagElementType
//{
//    keyType key;
//    valueType value;
//
//    enum ElementStatus status;
//}ElementType;
//
//typedef struct tagHashTable
//{
//    int occupiedCount;
//    int tableSize;
//
//    ElementType* table;
//}HashTable;
//
//HashTable* OAHT_createHashTable(int tableSize);
//void OAHT_destroyHashTable(HashTable* ht);
//void OAHT_clearElement(ElementType* element);
//
//void OAHT_set(HashTable** ht, keyType key, valueType value);
//valueType OAHT_get(HashTable* ht, keyType key);
//int OAHT_hash(keyType key, int keyLength, int tableSize);
//int OAHT_hash2(keyType key, int keyLength, int tableSize);
//
//void OAHT_reHash(HashTable** ht);
//#endif

