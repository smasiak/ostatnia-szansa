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
    char text[1000];
    printf("Witam w programie do kodowania. Wybierz jedną w powniższych opcji.");
    printf("\n1. szyfrowanie \n2. odszyfrowanie");
    scanf("%d", &c);
    system("clear");
    
    if(c==1){
        printf("Wybierz kod/szyfr");
        printf("\n1.alfabet morse's \n2.szyfr cezara \n3.szyfr anachroniczny");
        scanf("%d", &d);
        printf("\nPodaj słowo do kodowania: ");
        getchar();
        fgets(text, sizeof(text), stdin); 
        if(d==1){
            MorseCode(text);
        }
        else if(d==2){
            CaesarCipher(text);
        }   
        else if(d==3){
            printf("Wprowadź A : ");
            scanf("%d",&a);
            printf("Wprowadź B : ");
            scanf("%d",&b);
            AffineCipher(text , a, b);
        }
    }
    else if(c==2){
        printf("Wybierz kod/szyfr");
        printf("\n1.alfabet morse's \n2.szyfr cezara \n3.szyfr anachroniczny");
        scanf("%d", &d);
        printf("\nPodaj słowo do kodowania: ");
        getchar();
        fgets(text, sizeof(text), stdin); 
       if(d==1){
            MorseDeCode(text);
        }
        if(d==2){
            CaesarDeCipher(text);
        }   
        else if(d==3){
            printf("Wpisz A : ");
            scanf("%d",&a);
            printf("Wpisz B : ");
            scanf("%d",&b);
            AffineDeCipher(text , a, b);
        }
    }
    return 0;
}