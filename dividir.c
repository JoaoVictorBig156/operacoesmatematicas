#include <stdio.h>

int dividir(int divisor,int dividendo){
 if (divisor==0){
  printf("Impossivel dividir");
    return -1;
    }
return dividendo/divisor;
}