#include <stdio.h>
#include<string.h>
int main(){
    char c[1000]="Do Khac Quyen";
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c",c[i]);
        printf(" ");
    }
    

    return 0;
}