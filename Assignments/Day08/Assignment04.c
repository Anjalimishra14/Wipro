/*Assignment04:- C Program to Remove all Characters in Second String which are present in First String
i/p
Bhima shankar is a C programmeC
o/p
Bhima snkr is a C programme*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isexist(char word[],char s){
    for(int i= 0; i<strlen(word); i++){
        if(word[i]==s){
            //printf("removed character is %c\n",s);
            return 1;
        }
    }
    return 0;
}

void removeChar(char *str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {

    char firstStr[] = "Bhima";
    char secondStr[] = "shankar";
    char thirdStr [] = "is a C programmer";
    int i = 0,j;

    printf("%s %s %s\n",firstStr,secondStr,thirdStr);
    while (i < strlen(secondStr)){
        if(isexist(firstStr,secondStr[i]) == 1){
           removeChar(secondStr,secondStr[i]);
           
        }
        i++;
    }
    printf("%s %s %s\n",firstStr,secondStr,thirdStr);
    return 0;
}