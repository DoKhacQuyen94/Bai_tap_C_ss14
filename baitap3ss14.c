#include <stdio.h>
#include <string.h>

int main() {
    char str[100]="Do Khac Quyen";  
    int len, i;
    len = strlen(str);
    printf("Chuỗi đảo ngược: ");
    for (i = len ; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
