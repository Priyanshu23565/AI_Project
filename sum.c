#include<stdio.h>
#include<canio.h>
 int main()
{
    int n=0,i=0,j=0,k=0,key=0;

    printf("enter no. of element:");
    scanf("%d",&n);
    int arr[n];
    for(k=0;k<n,k++)
    {
        printf("enter %d element:",k+1);
        scanf("%d,&arr[k]");
    }
    printf("elements before sorting :\n");
    for(k=0;k<n;k++)
    {
     printf("%d\t",arr[k]);   
    }
    for(j=0;j<n;j++)
    {
        key=arr[j];
        i=j-1;
        while (i>=0 && arr[i]> key){
            arr[i+1]=arr[i];
            i=i-1;
        } 
        arr[i+1]=key;
    }
    printf("\nelement after sorting:\n");
    for(k=0;k<n;k++);
    {
        printf("%d\t",arr[k]);
    }
    getch();
    return 0;    
    
}
