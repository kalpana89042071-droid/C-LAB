#include<stdio.h>
int main(void)
{
    int a[100],n,i,smallet,larget;
    long sum=0;
    float average;
    printf("enter number of element(1-100):"); 
    scanf("%d",&n);
    if(n<1 || n>100)
    {
        printf("invalid array size.\n");
        return 0;
    }
    printf("enter %d elements:",n);
    for(i=0;1<n;i++)
    {
    scanf("%d",&a[i]);
    }
       smallet = larget = a[0];
    for(i=0;i<n;i++)
    {
    sum+=a[i];
    if(a[i]<smallet)
        smallet=a[i];
    if(a[i]>larget)
        larget=a[i];
    }
    
     average=(float)sum/n;
     printf("sum=%ld\n", sum);
     printf("average=%.2f\n', average");
     printf("smallet= %d\n", smallet);
     printf("larget= %d\n", larget);
    return 0;
}

    

