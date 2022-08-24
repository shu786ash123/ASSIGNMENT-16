#include<stdio.h>
int main()
{
       int a[3][3],b[3][3],c[3][3],i,j;
       printf("enter 3*3 elements of matrix:  \n");
       for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                     scanf("%d",&a[i][j]);
              }
       }

       printf("transpose of matrices are:    \n");
  for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                     c[i][j] = a[j][i];
                     printf("%d\t",c[i][j]);
              }
              printf("\n");
       }
return 0;
}

