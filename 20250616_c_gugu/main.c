#include <stdio.h>

int main(){
    int a;
    int count = 9;

    printf("구구단 단수를 입력하세요 : ");
    scanf("%d", &a);

    for (int i = 0; i < count; i++)
    {
        printf("%d * %d = %d\n", a, i + 1 , a * (i + 1));
    }

}