#include <stdio.h>

int main(){

   float ft = 1.234567890123456789;
   double db = 1.234567890123456789;

    printf("hello world!\n");
    // printf("sum = %d + %d = %d\n", a, b, c);
    printf("float형 변수의 값 : %.20f\n", ft);
    printf("double형 변수의 값 : %.20lf\n", db);

    return 0;
}