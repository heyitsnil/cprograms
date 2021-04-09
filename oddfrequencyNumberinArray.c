#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    int *f=(int*)malloc(n*sizeof(int));
    printf("Enter the values\n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        f[i]=0;
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i]==a[j])
                f[i]++;
            else
                continue;
        }
    }
    for (int i=0;i<n;i++){
        if (f[i]%2==1){
            printf("%d",a[i]);
            break;
        }
        else
            continue;
    }

}
