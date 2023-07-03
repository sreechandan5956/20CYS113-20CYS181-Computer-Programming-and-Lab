#include<stdio.h>
typedef struct ima{
    int a;
    int b;
}real ;
int main(){
    real r1,r2,r3,r4;
    scanf("%d %d",&r1.a,&r1.b);
    scanf("%d %d",&r2.a,&r2.b);
    r3.a=r1.a+r2.a;
    r3.b=r1.b+r2.b;
    r4.a=r1.a-r2.a;
    r4.b=r1.b-r2.b;
    printf("%d+%di\n",r3.a,r3.b);
    printf("%d+%di",r4.a,r4.b);
    return 0;
}