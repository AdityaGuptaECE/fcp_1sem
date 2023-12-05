#include<stdio.h>
#include<string.h>
void main(){
    char a[] ="aditya";
    char b[] ="gupta";
    printf("%d\n",strlen(a));
    printf("%s\n",strcpy(b,a));
    printf("%s\n",strcoll(a,b));
    
}