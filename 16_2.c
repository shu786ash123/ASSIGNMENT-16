
#include<stdio.h>
int main()
{
       int a[3][3],b[3][3],c[3][3],i,k,sum,j;
       printf("enter all elements of first matrix:  \n");
       for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                     scanf("%d",&a[i][j]);

              }
                     printf("\n");
       }
       printf("enter all elements of second matrix:  \n");
                      for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                     scanf("%d",&b[i][j]);
              }
              printf("\n");
       }
       printf("product of matrices are:    \n");
  for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                     for(k=0;k<=2;k++){
                                   sum = sum + (a[i][k]*b[k][j]);

              }   c[i][j] = sum;
              sum = 0;


              }
       }
       for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                            printf("%d  ",c[i][j]);
              }
              printf("\n");
       }
return 0;
}
