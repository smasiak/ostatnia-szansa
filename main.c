#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib.c"
#include "lib.h"

int main(){
    int c;
    int d;
    int a;
    int b;
    char *string;
    printf("1. szyfrowanie 2. odszyfrowanie");
    scanf("%d", &c);
    
    if(c=1){
        printf("1.mors 2.cezar 3. anachroniczny");
        scanf("%d", &d);
        if(d==1){
            char text[1000];
            fgets(text, sizeof(text), stdin);
            MorseCode(string);
        }
        else if(d=2){
            char text[1000];
            fgets(text, sizeof(text), stdin);
            CaesarCipher(string);
        }   
        else if(d=3){
            char text[1000];
            fgets(text, sizeof(text), stdin);
            AffineCipher(string , a, b);
        }
    }
    else if(c=2){
        printf("1.mors 2.cezar 3. anachroniczny");
        scanf("%d", &d);
       if(d=1){
           char text[1000];
            fgets(text, sizeof(text), stdin);
            MorseDeCode(string);
        }
        if(d=2){
            char text[1000];
            fgets(text, sizeof(text), stdin);
            CaesarDeCipher(string);
        }   
        else if(d=3){
            char text[1000];
            fgets(text, sizeof(text), stdin);
            AffineDeCipher(string , a, b);
        }
    }
    return 0;
}