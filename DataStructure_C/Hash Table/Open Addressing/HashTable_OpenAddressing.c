//
//  HashTable_OpenAddressing.c
//  DataStructure_C
//
//  Created by Seonghun Kim on 20/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#include "HashTable_OpenAddressing.h"
//#pragma warning(disable:4996)
//
//HashTable* OAHT_createHashTable(int tableSize)
//{
//    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
//    ht-> table = (ElementType*)malloc(sizeof(ElementType)* tableSize);
//
//    memset(ht->table, 0, sizeof(ElementType) * tableSize);
//
//    ht->tableSize = tableSize;
//    ht->occupiedCount = 0;
//
//    return ht;
//}
//void OAHT_destroyHashTable(HashTable* ht)
//{
//    // 1. 각 링크드 리스트를 자유 저장소에서 제거
//    int i = 0;
//    for( i = 0 ; i < ht->tableSize ; i++ )
//    {
//        OAHT_clearElement(&(ht->table[i]));
//    }
//
//    // 2, 해시 테이블 제거
//    free(ht->table);
//    free(ht);
//}
//void OAHT_clearElement(ElementType* element)
//{
//    if( element->status == EMPTY )
//        return;
//
//    free(element->key);
//    free(element->value);
//}
//
//void OAHT_set(HashTable** ht, keyType key, valueType value)
//{
//    int keyLength, addr, stepSize;
//    double usage;
//
//    usage = (double)(*ht)->occupiedCount / (*ht)->tableSize;
//
//    // 점유율 50% 넘으면 재해싱
//    if( usage > 0.5 )
//    {
//        OAHT_reHash(ht);
//    }
//
//    keyLength = strlen(key);
//    addr = OAHT_hash(key, keyLength, (*ht)->tableSize);
//    stepSize = OAHT_hash2(key, keyLength, (*ht)->tableSize);
//
//    while( (*ht)->table[addr].status != EMPTY &&
//          strcmp((*ht)->table[addr].key, key) != 0 )
//    {
//        printf("collision occured! : key(%s), addr(%d), stepSize(%d)\n", key, addr, stepSize);
//
//        addr = (addr + stepSize) % (*ht)->tableSize;
//    }
//
//    (*ht)->table[addr].key = (keyType)malloc(sizeof(char)* (keyLength+1));
//    strcpy((*ht)->table[addr].key, key);
//
//    (*ht)->table[addr].value = (valueType)malloc(sizeof(char) * strlen(value)+1);
//
//    strcpy((*ht)->table[addr].value, value);
//
//    (*ht)->table[addr].status = OCCUPIED;
//
//    (*ht)->occupiedCount++;
//
//    printf("key(%s) entered address(%d)\n", key, addr);
//}
//valueType OAHT_get(HashTable* ht, keyType key)
//{
//    int keyLength = strlen(key);
//
//    int addr = OAHT_hash(key, keyLength, ht->tableSize);
//    int stepSize = OAHT_hash2(key, keyLength, ht->tableSize);
//
//    while( ht->table[addr].status != EMPTY &&
//          strcmp(ht->table[addr].key, key) != 0 )
//    {
//        addr = (addr+stepSize) % ht->tableSize;
//    }
//
//    return ht->table[addr].value;
//}
//int OAHT_hash(keyType key, int keyLength, int tableSize)
//{
//    int i = 0;
//    int hashValue = 0;
//
//    for( i = 0 ; i < keyLength ; i++ )
//    {
//        hashValue = (hashValue << 3) + key[i];
//    }
//
//    hashValue = hashValue % tableSize;
//
//    return hashValue;
//}
//int OAHT_hash2(keyType key, int keyLength, int tableSize)
//{
//    int i = 0;
//    int hashValue = 0;
//
//    for( i = 0 ; i < keyLength ; i++ )
//    {
//        hashValue = (hashValue << 2) + key[i];
//    }
//
//    // 나머지 연산으로 인해 같은 값을 갖지 않도록 테이블 크기에서 3을 뺀수로 나눔
//    hashValue = hashValue % (tableSize-3);
//    return hashValue + 1;
//}
//
//void OAHT_reHash(HashTable** ht)
//{
//    int i = 0;
//    ElementType* oldTable = (*ht)->table;
//
//    // 새 해시 테이블 만들기
//    HashTable* newHT = OAHT_createHashTable((*ht)->tableSize *2);
//
//    printf("\nrehashed. new Table size is : %d\n\n", newHT->tableSize);
//
//    // 이전 해시 테이블에 있던 데이털르 새 해시 테이블로 옮김
//    for( i = 0 ; i < (*ht)->tableSize ; i++ )
//    {
//        if( oldTable[i].status == OCCUPIED )
//        {
//            OAHT_set(&newHT, oldTable[i].key, oldTable[i].value);
//        }
//    }
//
//    // 이전 해시 테이블 해제
//    OAHT_destroyHashTable( (*ht) );
//
//    // ht포인터에 새로운 해시 테이블 주소 대입
//    (*ht) = newHT;
//}
