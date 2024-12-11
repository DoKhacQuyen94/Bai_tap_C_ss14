#include<stdio.h>
#include<string.h>
int main(){
    char c[1000];
    char kiTu;
    int count=0;
    printf("Nhạp chuoi bat ki: ");
    fgets(c,1000,stdin);
    printf("Nhap ki tu bat ki: ");
    scanf("%c",&kiTu);
    for (int i = 0; i < strlen(c); i++){
        if(kiTu==c[i]){
            count++;
        }
    }
    printf("ki tu '%c' xuat hien %d lan trong chuoi",kiTu,count);
    return 0;
}