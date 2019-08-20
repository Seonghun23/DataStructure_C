//
//  main.c
//  DataStructure_C
//
//  Created by Seonghun Kim on 20/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#include "HashTable_Basic.h"
//#include "HashTable_Chaining.h"
#include "HashTable_OpenAddressing.h"

int main(int argc, const char * argv[]) {
    // HashTable_Basic
//    HashTable* ht = SHT_createHashTable(193);
//
//    SHT_set(ht, 418, 32114);
//    SHT_set(ht, 9, 514);
//    SHT_set(ht, 27, 8917);
//    SHT_set(ht, 1031, 286);
//
//    printf("key:%d, value:%d\n", 418, SHT_get(ht, 418));
//    printf("key:%d, value:%d\n", 9, SHT_get(ht, 9));
//    printf("key:%d, value:%d\n", 27, SHT_get(ht, 27));
//    printf("key:%d, value:%d\n", 1031, SHT_get(ht, 1031));
//
//    SHT_destroyHashTable(ht);
    
    // HashTable_Chaining
    //    HashTable *ht = CHT_createHashTable(12289);
    //
    //    CHT_set(ht, "MSFT", "Microsoft");
    //    CHT_set(ht, "JAVA", "Sun");   q2w13`Ω¸
    //    CHT_set(ht, "REDH", "RedHat");
    //    CHT_set(ht, "APAC", "Apache");
    //    CHT_set(ht, "ZYMZZ", "Unisys"); // APAC와 충돌
    //    CHT_set(ht, "IBM", "IBM");
    //    CHT_set(ht, "ORCL", "Oracle");
    //    CHT_set(ht, "CSCO", "Cisco");
    //    CHT_set(ht, "GOOG", "google");
    //    CHT_set(ht, "YHOO", "Yahoo");
    //    CHT_set(ht, "NOVL", "Novel");
    //
    //    printf("\n");
    //    printf("key:%s, value:%s\n", "MSFT", CHT_get(ht, "MSFT"));
    //    printf("key:%s, value:%s\n", "REDH", CHT_get(ht, "REDH"));
    //    printf("key:%s, value:%s\n", "APAC", CHT_get(ht, "APAC"));
    //    printf("key:%s, value:%s\n", "ZYMZZ", CHT_get(ht, "ZYMZZ"));
    //    printf("key:%s, value:%s\n", "JAVA", CHT_get(ht, "JAVA"));
    //    printf("key:%s, value:%s\n", "IBM", CHT_get(ht, "IBM"));
    //    printf("key:%s, value:%s\n", "ORCL", CHT_get(ht, "ORCL"));
    //    printf("key:%s, value:%s\n", "CSCO", CHT_get(ht, "CSCO"));
    //    printf("key:%s, value:%s\n", "GOOG", CHT_get(ht, "GOOG"));
    //    printf("key:%s, value:%s\n", "YHOO", CHT_get(ht, "YHOO"));
    //    printf("key:%s, value:%s\n", "NOVL", CHT_get(ht, "NOVL"));
    //
    //    CHT_destroyHashTable(ht);
    
    // HashTable_OpenAddressing
        HashTable *ht = OAHT_createHashTable(11);
    
        OAHT_set(&ht, "MSFT", "Microsoft");
        OAHT_set(&ht, "JAVA", "Sun");
        OAHT_set(&ht, "REDH", "RedHat");
        OAHT_set(&ht, "APAC", "Apache");
        OAHT_set(&ht, "ZYMZZ", "Unisys"); // APAC와 충돌
        OAHT_set(&ht, "IBM", "IBM");
        OAHT_set(&ht, "ORCL", "Oracle");
        OAHT_set(&ht, "CSCO", "Cisco");
        OAHT_set(&ht, "GOOG", "google");
        OAHT_set(&ht, "YHOO", "Yahoo");
        OAHT_set(&ht, "NOVL", "Novel");
    
        printf("\n");
        printf("key:%s, value:%s\n", "MSFT", OAHT_get(ht, "MSFT"));
        printf("key:%s, value:%s\n", "REDH", OAHT_get(ht, "REDH"));
        printf("key:%s, value:%s\n", "APAC", OAHT_get(ht, "APAC"));
        printf("key:%s, value:%s\n", "ZYMZZ", OAHT_get(ht, "ZYMZZ"));
        printf("key:%s, value:%s\n", "JAVA", OAHT_get(ht, "JAVA"));
        printf("key:%s, value:%s\n", "IBM", OAHT_get(ht, "IBM"));
        printf("key:%s, value:%s\n", "ORCL", OAHT_get(ht, "ORCL"));
        printf("key:%s, value:%s\n", "CSCO", OAHT_get(ht, "CSCO"));
        printf("key:%s, value:%s\n", "GOOG", OAHT_get(ht, "GOOG"));
        printf("key:%s, value:%s\n", "YHOO", OAHT_get(ht, "YHOO"));
        printf("key:%s, value:%s\n", "NOVL", OAHT_get(ht, "NOVL"));
    
        OAHT_destroyHashTable(ht);
    
    return 0;
}
