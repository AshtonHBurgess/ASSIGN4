#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../inc/crypt.h"




enum direction{
    LEN = 81

};
void returnEncrypt(char ch){
    unsigned int mask = 0xa5;
    char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
    char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";
    char ch2,ch3;

    ch2 = toupper(ch);
    ch3=ch2;

    for (int i = 0; i < LEN; i++) {

        if (  ch2 == originalChars[i] ){
            ch3 = subChars[i];
        }
    }
    int ch4 = (int) ch3;
    unsigned int binaryXOR = ch4 ^ mask;
    unsigned int decrypt  = binaryXOR  ^ mask;
    char backToLetter = (char) decrypt;
    char almostBack=backToLetter;
    for (int i = 0; i < LEN; i++) {
        if (  backToLetter == subChars[i] ){
            almostBack = originalChars[i];
        }
    }
    printf("%d ",binaryXOR);
}//END OF DECRYPT



void returnDencrypt(char ch){
    unsigned int mask = 0xa5;
    char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
    char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";
    char ch2,ch3;

    ch2 = toupper(ch);
    ch3=ch2;

    for (int i = 0; i < LEN; i++) {

        if (  ch2 == originalChars[i] ){
            ch3 = subChars[i];
        }
    }
    int ch4 = (int) ch3;
    unsigned int binaryXOR = ch4 ^ mask;
    unsigned int decrypt  = binaryXOR  ^ mask;
    char backToLetter = (char) decrypt;
    char almostBack=backToLetter;
    for (int i = 0; i < LEN; i++) {
        if (  backToLetter == subChars[i] ){
            almostBack = originalChars[i];
        }
    }
    printf("%c",almostBack);
}//END OF DECRYPT

int main()
{
//          this is a top secret message

//    printf("hey dum dumb enter some shitz");
    char input[LEN] ="hey dum dumb enter some shitz";
//
//    scanf("%s",input);
//    for(int i =0; input[i]!='\0';i++ ){
//    returnEncrypt(input[i]);
////        returnDencrypt(input[i]);
//
//    }

//    scanf("%s",input);
for(int j=0; j<LEN;j++) {
   returnEncrypt(input[j]);
      // returnDencrypt(input[j]);
}

    return 0;
}






//    unsigned int mask = 0xa5;
//    unsigned int toEncrypt;
//    char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
// char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";
//    char ch,ch2,ch3;
//    ch = 't';
//    printf("%c in uppercase is represented as %c",
//           ch, toupper(ch));
//    ch2 = toupper(ch);
//
//    printf("ToUpper%c\n", ch2);
//
//
//     for (int i = 0; i < LEN; i++) {
//
//                     if (  ch2 == originalChars[i] ){
//                         ch3 = subChars[i];
//                         printf("fount t");
//                     }
//                     else {printf("");}
// }
//
//    printf("\n\n%c",ch3);
//
//    int ch4 = (int) ch3;
//    printf("\n\n%d",ch4);
//
//
//
//    ///////////////////////////////////////////
//
//    int numBits = sizeof(int) * 8;
//    char binaryString[numBits + 1];
//
//    toEncrypt = ch4;
//
//
//    getBinary(ch4, numBits, binaryString);
//    printf("Binary XOR:\t\t\t%s - %i\n",binaryString, ch4);
//
//
//    unsigned int binaryXOR = ch4 ^ mask;
//    getBinary(binaryXOR, numBits, binaryString);
//    printf("Binary XOR:\t\t\t%s - %i\n",binaryString, binaryXOR);
//
//
//    unsigned int ch5 = binaryXOR^ mask;
//    getBinary(ch5, numBits, binaryString);
//    printf("Binary XOR:\t\t\t%s - %i\n",binaryString, ch5);



