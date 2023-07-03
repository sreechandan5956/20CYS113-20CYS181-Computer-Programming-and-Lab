#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j,k;
    for(i=0;i<3;i++){
    scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);}
    for(i=0;i<3;i++){
    scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for (k = 0; k <3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            
        }
    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}