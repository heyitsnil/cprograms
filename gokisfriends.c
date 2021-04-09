#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter number of people\n");
    scanf("%d",&n);
    printf("Enter minimum skill required to be Goki's friend\n");
    scanf("%d",&x);
    int y[n];
    printf("Enter skills of each person starting from first person\n");
    for (int i=0;i<n;i++){
     scanf("%d",&y[i]);

    }
    for (int j=0;j<n;j++){
        if (y[j]>=x)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
