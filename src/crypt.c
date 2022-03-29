#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/crypt.h"


//
// Created by asbur on 3/23/2022.
//


//code: Bitwise XOR used with BitMask


void returnEncrypt(char ch){
    unsigned int mask = 0xa5;
    const char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
    const char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";
    char ch2,ch3;

    ch2 = toupper(ch);
    ch3=ch2;

    for (int i = 0; i < LEN; i++) {

        if (  ch2 == originalChars[i] ){
            ch3 = subChars[i];
        }
    }
    int ch4 = (int) ch3;
    unsigned int binaryXOR = crypt(ch4,mask);// ch4 ^ mask;
    printf("%d ",binaryXOR);
}//END OF DECRYPT












void returnDecrypt(){
    Page input;
    char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
    char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";

    unsigned int mask = 0xa5;

    printf("So, you want to decrypt the message!\nPlease enter your message:\n");
    scanf(" %[^\n]s", input);

    char * token = strtok(input, " ");
    // loop through the string to extract all other tokens
    while( token != NULL ) {



        int ch = atoi(token);   // convert ascii to int

        //unsigned int decrypt  = ch4  ^ mask;
        unsigned int decrypt= crypt(ch,mask); //using macro
        char backToLetter = (char) decrypt; //casting int ascii back to char  235 --> T
        char almostBack=backToLetter;
        for (int i = 0; i < LEN; i++) {
            if (  backToLetter == subChars[i] )  // comparing the 2 lists
            {
                almostBack = originalChars[i];  //swapping match
            }
        }
        printf("%c",almostBack);   //printing Individual letter,  To get sentence Run in loop

        token = strtok(NULL, " ");
    } // broken up

}//END IF 2





//
//
//
//
//
//
//void Decrypt(char ch){
//
//    unsigned int mask = 0xa5;
//    char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
//    char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";
//    char ch2;
//    char ch3;
//////    if(ch == ' ') {
//////        ch3= ch;
//////    if (ch ==" "){
//////        ch3=ch;
//////    }
//////    else {
////    ch2 = toupper(ch);
////    ch3 = ch2;
////
////    for (int i = 0; i < LEN; i++) {
////
////        if (ch2 == originalChars[i]) {
////            ch3 = subChars[i];
////        }
////
////    }
//////    }//if space
//    int ch4 = (int) ch3;
//    unsigned int binaryXOR = ch4 ^ mask;
//    unsigned int decrypt  = binaryXOR  ^ mask;
//    char backToLetter = (char) decrypt;
//    char almostBack=backToLetter;
//    for (int i = 0; i < LEN; i++) {
//        if (  backToLetter == subChars[i] ){
//            almostBack = originalChars[i];
//        }
//    }
//    printf("%c",almostBack);
//}//END OF DECRYPT
//


