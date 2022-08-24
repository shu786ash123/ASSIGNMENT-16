#include<stdio.h>
int main()
{
       int a[3][3],b[3][3],c[3][3],i,j,sum=0;
       printf("enter 3*3 elements of matrix:  \n");
       for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                     scanf("%d",&a[i][j]);
              }
       }

       printf("right diagonal of matrix is:    \n");
  for(i=0;i<=2;i++)
       {
              for(j=0;j<=2;j++){
                    if(i==j)
                    {
                           sum = sum + a[i][j];
                    }

              }

       }
       printf("%d ",sum);
return 0;
}

