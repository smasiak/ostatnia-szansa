#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "opisy.h"

void uppercase(char *string){
  while ( *string != '\0' ){
    *string = toupper ( ( unsigned char ) *string );
    ++string;
  }
}
int AffinePattern(int i, int a, int b){
    int x,y;
    x = i;
    y = (a*x+b)%26;
    return y;
}
int AffineDePattern(int i, int a, int b) {
    int x = i;
    int inv = InverseElement(a,26);
    int y = inv*(x-b);
    int result = PositiveModulo(y,26);
    return result;
}
int PositiveModulo( int a, int m){
    int mod = a % m;
    if (a < 0){
        mod += m;
    }
    return mod;
}
int InverseElement(int a, int m){
    a = a % m;
    for(int i=1; i<m; i++){
        if((i*a)%m == 1){
            return i;
            break;
        }
    }
    return 0; 
}