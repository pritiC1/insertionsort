#include<stdio.h>
void main()
    {
        int i,size;
        int a[10],j,sorted;
        printf("enter the size of array:");
        scanf("%d",&size);
        printf("enter the elements:");
        for(i=0;i<size;i++)
        scanf("%d",&a[i]);
        printf("elements of array before sorting:");
        for(i=0;i<size;i++)
        printf(" %d ",a[i]);
        for(i=0;i<size;i++)
        {
            for(i=0;i<size;i++)
            {
                sorted=a[i];
                for(j=i-1;j>=0&& a[j]>sorted;j--)
                {
                    a[j+1]=a[j];
                }
                a[j+1]=sorted;
            }
        }
        printf("elements of array after sorting:");
        for(i=0;i<size;i++)
        printf(" %d ",a[i]);
    }
