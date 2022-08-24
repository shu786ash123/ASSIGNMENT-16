#include<stdio.h>
int main()
{
       int a[3][3],i,j,max=0,sum=0,index=0;
       printf("enter 10 numbers of a matrix   \n");
       for(i=0;i<3;i++)
       {
              for(j=0;j<3;j++)
              {
                     scanf("%d",&a[i][j]);
              }
       }
       for(i=0;i<3;i++)
       {
              for(j=0;j<3;j++)
              {
                     if(a[i][j] == 1)
                     {
                            sum = sum + a[i][j];
                     }
              }
                     if(sum>max)
                     {
                            max=sum;
                            index = i;
                     }
              }
              printf("  ROW NO.  %d  has maximum no. of 1s ",index);
       }

