#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Nhập chuỗi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    printf("Số ký tự là chữ cái trong chuỗi: %d\n", count);

    return 0;
}
