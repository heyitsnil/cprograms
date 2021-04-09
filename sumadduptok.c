#include<stdio.h>
int main()
{
    int k,n,l=0;
    printf("Enter number of inputs\n");
    scanf("%d",&n);
    printf("Enter value of k\n");
    scanf("%d",&k);
    int *a = (int*) malloc(n*sizeof(int));
    printf("Enter the numbers\n");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i]+a[j]==k)
                l++;
            else
                continue;
        }
    }
    if (l>0)
        printf("True");
    else
        printf("False");
}
