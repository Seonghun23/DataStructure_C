//
//  HashTable_Chaining.c
//  DataStructure_C
//
//  Created by Seonghun Kim on 20/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#include "HashTable_Chaining.h"
//#pragma warning(disable:4996)
//
//HashTable* CHT_createHashTable(int tableSize)
//{
//    HashTable* HT = (HashTable*)malloc(sizeof(HashTable));
//    HT->table = (list*)malloc(sizeof(NODE) * tableSize);
//
//    memset(HT->table, 0, sizeof(list) * tableSize);
//
//    HT->tableSize = tableSize;
//
//    return HT;
//}
//void CHT_destroyHashTable(HashTable* HT)
//{
//    // 각 링크드 리스트를 자유 저장소에서 제거하기
//    int i = 0;
//    for( i = 0 ; i < HT->tableSize ; i++ )
//    {
//        list l = HT->table[i];
//        CHT_destroyList(l);
//    }
//
//    // 해시 테이블을 자유 저장소에서 제거하기
//    free(HT->table);
//    free(HT);
//}
//
//NODE* CHT_createNode(keyType key, valueType value)
//{
//    NODE* node = (NODE*)malloc(sizeof(NODE));
//
//    node->key = (char*)malloc(sizeof(char*) * strlen(key) + 1);
//    strcpy(node->key, key);
//
//    node->value = (char*)malloc(sizeof(char*) * strlen(value) + 1);
//    strcpy(node->value, value);
//    node->next = NULL;
//
//    return node;
//}
//void CHT_destroyNode(NODE* node)
//{
//    free(node->key);
//    free(node->value);
//    free(node);
//}
//
//void CHT_set(HashTable* HT, keyType key, valueType value)
//{
//    int addr = CHT_hash(key, strlen(key), HT->tableSize);
//    NODE* node = CHT_createNode(key, value);
//
//    // 해당 주소가 비어 있으면
//    if( HT->table[addr] == NULL )
//    {
//        HT->table[addr] = node;
//    }
//    // 해당 주소가 비어있지 않으면
//    else
//    {
//        list l = HT->table[addr];
//        node->next = l;
//        HT->table[addr] = node;
//
//        printf("Collision occured : key(%s), addr(%d)\n", key, addr);
//    }
//}
//valueType CHT_get(HashTable* HT, keyType key)
//{
//    // 주소를 해싱
//    int addr = CHT_hash(key, strlen(key), HT->tableSize);
//
//    // 해당 주소에 있는 링크드 리스트를 가져옴
//    list l = HT->table[addr];
//
//    list target = NULL;
//
//    while(1)
//    {
//        if( strcmp(l->key, key) == 0 )
//        {
//            target = l;
//            break;
//        }
//
//        if( l->next == NULL )
//            break;
//        else
//            l = l->next;
//    }
//
//    return target->value;
//}
//int CHT_hash(keyType key, int keyLength, int tableSize)
//{
//    int i = 0;
//    int hashValue = 0;
//
//    for( i = 0 ; i < keyLength ; i++ )
//    {
//        hashValue = (hashValue << 3 ) + key[i] ;
//    }
//
//    hashValue = hashValue % tableSize;
//
//    return hashValue;
//}
//
//void CHT_destroyList(list l)
//{
//    if( l == NULL )
//        return ;
//
//    if( l->next != NULL )
//        CHT_destroyList(l->next);
//
//    CHT_destroyNode(l);
//}
