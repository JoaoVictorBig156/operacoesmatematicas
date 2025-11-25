#include <stdio.h>

int dividir(int num2,int num1)
{

   int quociente;
    if (num2==0){
        printf("Impossivel dividir");
        return;
    }
    quociente = 0;
    while(num1>=num2){
        num1-=num2;
        quociente++;
    }
   return quociente;
}

