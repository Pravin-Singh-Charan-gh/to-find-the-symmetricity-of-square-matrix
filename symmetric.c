#include <stdio.h>
void main(){
    int a,b;
    printf("Enter the dimension of square matrix:");
    scanf("%d",&a);
    b=a;
    int sq[a][b],i,j;
    printf("Enter the elements of matrix row wise:");
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    scanf("%d",&sq[i][j]);
    for(i=0;i<a;i++)
    for(j=0;j<b;j++){
        if(sq[i][j]!=sq[j][i]){
        printf("Matrix is not symmetric");
        goto nosym;}
        else if(i==a-1 && j==b-1)
        printf("Symmetric is matrix");
    }
    nosym:
}
