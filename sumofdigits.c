#include<stdio.h>
int main()
{
    int n,dig,sum=0;
    printf("Enter an integer\n");
    scanf("%d",&n);
    while(n!=0)
    {
       dig=n%10;
       sum=sum+dig;
       n=n/10;
    }
    printf("The sum of digits is %d",sum);

}
