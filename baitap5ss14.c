#include<stdio.h>
#include<string.h>
int main(){
    char c[1000];
    int count=0;
    printf("Nhap chuoi bat ki: ");
    fgets(c,1000,stdin);
    for (int i = 0; i < strlen(c); i++){
        if(c[i]==' '){
            count++;
        }
    }
    printf("chuoi co %d tu",count+1);
    return 0;
}