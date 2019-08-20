//
//  HashTable_Chaining.h
//  DataStructure_C
//
//  Created by Seonghun Kim on 20/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#ifndef HashTable_Chaining_h
//#define HashTable_Chaining_h
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef char* keyType;
//typedef char* valueType;
//
//typedef struct tagNode
//{
//    keyType key;
//    valueType value;
//
//    tagNode* next;
//}NODE;
//
//typedef NODE* list;
//
//typedef struct tagHashTable
//{
//    int tableSize;
//    list* table;
//}HashTable;
//
//HashTable* CHT_createHashTable(int tableSize);
//void CHT_destroyHashTable(HashTable* HT);
//
//NODE* CHT_createNode(keyType key, valueType value);
//void CHT_destroyNode(NODE* node);
//
//void CHT_set(HashTable* HT, keyType key, valueType value);
//valueType CHT_get(HashTable* HT, keyType key);
//int CHT_hash(keyType key, int keyLength, int tableSize);
//
//void CHT_destroyList(list l);
//
//#endif

