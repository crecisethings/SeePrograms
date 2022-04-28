#include<stdio.h>
#include<stdlib.h>
int arr[30];

void merge(int arr[],int lb,int mid,int ub)
{
    int b[30];
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;k++;
        }
        else 
        {
            b[k]=arr[j];
            j++;k++;
        }
        
    }
    while(i<=mid)
    {
        b[k]=arr[i];
            i++;k++;
    }
    while(j<=mid)
    {
        b[k]=arr[j];
            j++;k++;
    }
    for(int i=0;i<k;i++)
    {
        arr[i]=b[i];
    }

}
void mergeSort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main()
{
    int N;
    printf("Enter size of the array:");
    scanf("%d",&N);
    printf("Enter array elements:");
    for(int i=0;i<N;i++)
        scanf("%d",&arr[i]);
    
    mergeSort(arr,0,N-1);
    printf("Sorted array:");
    for(int i=0;i<N;i++)
       printf("%d ",arr[i]);
    

    


}