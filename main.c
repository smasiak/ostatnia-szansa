#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "funkcje_szyfrujące.c"

int main(){
    int c;
    int d;
    int a;
    int b;
    int e;
    int f;
    char *string;
    char text[1000];
    printf("Witam w programie do kodowania. Wybierz jedną w powniższych opcji.");
    printf("\n1. szyfrowanie \n2. odszyfrowanie");
    scanf("%d", &c);
    system("clear");
    
    if(c=1){
        printf("Wybierz kod/szyfr");
        printf("\n1.alfabet morse's \n2.szyfr cezara \n3.szyfr anachroniczny");
        scanf("%d", &d);
        printf("\nPodaj słowo do kodowania: ");
        getchar();
        fgets(text, sizeof(text), stdin); 
        system("clear");
        if(d==1){
            MorseCode(text);
        }
        else if(d=2){
            CaesarCipher(text);
        }   
        else if(d=3){
            printf("[*] Wprowadź A : ");
            scanf("%d",&e);
            printf("[*] Wprowadź B : ");
            scanf("%d",&f);
            AffineCipher(string , a, b);
        }
    }
    else if(c=2){
        printf("Wybierz kod/szyfr");
        printf("\n1.alfabet morse's \n2.szyfr cezara \n3.szyfr anachroniczny");
        scanf("%d", &d);
        printf("\nPodaj słowo do kodowania: ");
        getchar();
        fgets(text, sizeof(text), stdin); 
        system("clear");
       if(d=1){
            MorseDeCode(text);
        }
        if(d=2){
            CaesarDeCipher(text);
        }   
        else if(d=3){
            printf("Wpisz A : ");
            scanf("%d",&e);
            printf("Wpisz B : ");
            scanf("%d",&f);
            AffineDeCipher(text , e, f);
        }
    }
    return 0;
}