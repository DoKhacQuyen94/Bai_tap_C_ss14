#include <stdio.h>
#include <string.h>
int main(){
    char c[1000];
    printf("Nhap chuoi bat ki: ");
    fgets(c,1000,stdin);
    printf("chuoi vua nhap la: %s",c);
    printf("do dai chuoi la: %d",strlen(c));
    return 0;
}