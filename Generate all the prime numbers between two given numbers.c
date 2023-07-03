#include <stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    printf("Prime numbers between %d and %d are: ",a,b);
    for (i=a;i<=b;i++){
        prime(i);
    };
    return 0;
}
void prime(int i){
    int n=0;
    int x;
    for(x=i-1;x>=2;x--){
        if(i%x==0){
         n++;
        }
    }
        if(n==0){
            printf("%d ",i);
        
    }
}