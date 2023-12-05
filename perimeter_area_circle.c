#include<stdio.h>
int main(){
    float pi=3.141;
    float r,a,p;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    p= 2*pi*r;
    printf("Perimeter of circle is %f",p);
    a=pi*r*r;
    printf("Area of circle is %f",a);
    return 0;
}