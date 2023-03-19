#include <stdio.h>
void main(){
    int a;
    printf("Enter the dimension of square matrix:");
    scanf("%d",&a);
    int sq[a][a],i,j;
    printf("Enter the elements of matrix (row wise):");
    for(i=0;i<a;i++)
    for(j=0;j<a;j++)
    scanf("%d",&sq[i][j]);
    for(i=0;i<a;i++)
    for(j=0;j<a;j++){
        if(sq[i][j]!=sq[j][i]){
        printf("Matrix is not symmetric");
        goto nosym;}
        else if(i==a-1 && j==a-1)
        printf("Matrix is symmetric");
    }
    nosym:
}
