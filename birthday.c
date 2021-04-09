#include<stdio.h>
int main()
{
    int t;
    printf("Enter number of test cases\n");
    scanf("%d",&t);
    printf("Enter the number of friends and number of chocolates\n");
    int *n = (int*)malloc(t*sizeof(int));
    int *m = (int*)malloc(t*sizeof(int));
    for (int i=0;i<t;i++)
        scanf("%d %d",&n[i],&m[i]);
    for (int i=0; i<t;i++){
        if (m[i]%n[i]==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

}


























