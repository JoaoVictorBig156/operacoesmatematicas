#include <assert.h>
#include "multiplicar.c"
#include "dividir.c"

int main(){
int produto = multiplicar(5,4);
int divisao = dividir(10,30);
assert(produto==20);
assert(divisao==3);
produto = multiplicar(5,6);
divisao = dividir(9,81);
assert(produto==30);
assert(divisao==9);

}
