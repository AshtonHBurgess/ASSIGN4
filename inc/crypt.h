//
// Created by asbur on 3/23/2022.
//


//code: enumeration defined in crypt.h
//code: pre-processor macros defined in crypt.h
//

#ifndef ASSIGN4_CRYPT_H
#define ASSIGN4_CRYPT_H
#define crypt( num1, num2 ) ( num1 ^ num2 )
//#define IS_LEAP_YEAR(y)  (((y) % 4 == 0 && (y) % 100 != 0) || (y) % 400 == 0)
#define ENCRYPTION(e)   ((e)

typedef char Page[256];
enum direction{
    LEN = 51
};
void returnDecrypt();
void returnEncrypt(char ch);

#endif //ASSIGN4_CRYPT_H
