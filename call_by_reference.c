#include<stdio.h>
funt(int*a,int*b){
    *a=10;
    *b=20;
}
int main(){
    int a=5,b=15;
    funt(&a,&b);
    printf("\n%d\n%d",a,b);
    return 0;
}