#include<stdio.h>
struct comp{
    int real;
    int ima;
};
int main(){
    struct comp r1;
    printf("Enter the real part of first number:-");
    scanf("%d",&r1.real);
    printf("Enter the imaginary part of the first nummber:-");
    scanf("%d",&r1.ima);
    struct comp r2;
    printf("Enter the real part of the second number:-");
    scanf("%d",&r2.real);
    printf("Enter the imaginary part of the second nummber:-");
    scanf("%d",&r2.ima);
    struct comp r3;
    r3.real=(r1.real*r2.real)-(r1.ima*r2.ima);
    r3.ima=(r1.real*r2.ima)+(r2.real*r1.ima);
    printf("%d +i(%d)",r3.real,r3.ima);
    return 0;
}