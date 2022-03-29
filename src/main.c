#include <stdio.h>
#include "../inc/crypt.h"


int main() {
    setbuf(stdout,0);
    int exitcode=0;

    Page input;     //char input[256];
    int sel = 0;
    printf("What operation would you like to perform(1 -Encrypt, 2 - Decrypt)?");
    scanf("%d", &sel);



    if (sel < 1) {
        printf("So, you do not know what you want!");
        exitcode=1;
    }//END bad
    else if (sel > 2) {
        printf("So, you do not know what you want!");
        exitcode=1;
    }//END bad
    else if (sel == 1) {
        printf("So, you want to encrypt the message!\nPlease enter your message:\n");
        scanf(" %[^\n]s", input);
        int j =0;
        while(input[j]!='\0') {     //STOP after end of sentence!
            returnEncrypt(input[j]);    //function is in crypt.c
        j++;
        }
    }//END IF 1

    else if (sel == 2) {
        returnDecrypt();    //function in crypt.c
}//END IF 2

return exitcode;// 1,0
}//END OF PROGRAM





//        char originalChars[LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&():;?.,/";
//        char subChars[LEN] = ":;?.,/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&()";
//
//        unsigned int mask = 0xa5;
//
//        printf("So, you want to decrypt the message!\nPlease enter your message:\n");
//        scanf(" %[^\n]s", input);
//
//        char * token = strtok(input, " ");
//        // loop through the string to extract all other tokens
//        while( token != NULL ) {
//
//
//
//       int ch4 = atoi(token);   // convert ascii to int
//
//       //unsigned int decrypt  = ch4  ^ mask;
//       unsigned int decrypt= crypt(ch4,mask); //using macro
//        char backToLetter = (char) decrypt; //casting int ascii back to char  235 --> T
//        char almostBack=backToLetter;
//        for (int i = 0; i < LEN; i++) {
//            if (  backToLetter == subChars[i] )  // comparing the 2 lists
//            {
//                almostBack = originalChars[i];  //swapping match
//            }
//        }
//        printf("%c",almostBack);   //printing Individual letter,  To get sentence Run in loop
//
//            token = strtok(NULL, " ");
//            } // broken up







