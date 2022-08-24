#include<stdio.h>
int main()
{
       int a[3][3],i,j,sum=0,sumco=0;
       printf("enter 10 numbers of a matrix:   \n");
       for(i=0;i<3;i++)
       {
              for(j=0;j<3;j++)
              {
                     scanf("%d",&a[i][j]);
              }
       }
       printf("SUM OF EACH ROW OF THIS MATRIX: \n ");
       for(i=0;i<3;i++)
       {
              sum=0;
              for(j=0;j<3;j++)
              {
                     sum = sum+a[i][j];


              }
              printf("%d   \n",sum);
}
 printf("SUM OF EACH COLUMN OF THIS MATRIX: \n ");
       for(i=0;i<3;i++)
       {
              sum=0;
              for(j=0;j<3;j++)
              {
                     sum = sum+a[j][i];


              }
              printf("%d   \n",sum);



       }








}
