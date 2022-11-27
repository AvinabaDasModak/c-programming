#include<stdio.h>
int main()
{
    int n=0,i,t1=0,t2=1,t3=0;

    printf("enter the no. of terms you want to check-\n");
    scanf("%d",&n);

     if (n==1)
     {
        printf("ans is - 0");
     }
     else if (n==2)
     {
        printf("ans is - 0, 1 ");
     }
     else 
   {printf("ans is - 0, 1,"); 
    for ( i = 3; i <=n; i++)
    {
         
        t3=t1+t2;
        printf(" %d ,",t3);
        t1=t2;
        t2=t3;
    }}
    
    return 0;
}