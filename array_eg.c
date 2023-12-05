#include<stdio.h>
int main(){
    int a[6] = {3,2,5,7,9,18};
    int *p;
    p=&a;
    printf("\n%d",p);
    printf("\n%d",*p);
    printf("\n%d",a);   
    printf("\n%d",&p);
    printf("\n%d",a[0]);
    printf("\n%d",++*p);
    printf("\n%d",*++p);
    printf("\n%d",*p++);//post operators consider nhi krta so pichla lega value
    printf("\n%d",*(p++));

    return 0;
}