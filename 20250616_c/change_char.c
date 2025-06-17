#include <stdio.h>
#include <string.h>

int main(void){
    char i_str[30];
    int count;

    printf("문장입력 : ");
    scanf("%[^\n]", i_str);

    int len = strlen(i_str);

    printf("바뀐문장 : ");
    for (int i = 0; i < len; i++)
    {
        if (i_str[i] >= 'A' && i_str[i] <= 'Z')
        {
            printf("%c", i_str[i] + 32);
            count++;
        } else
        {
            printf("%c", i_str[i]);
        }
        
    }
    printf("\n바뀐 문자 수 : %d", count);
    return 0;
}

