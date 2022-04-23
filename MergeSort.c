#include<stdio.h>
int arr[30];

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int merge(int arr[], int lb,int mid,int ub)
{
	int i=lb;
    int j=mid;
    int k=lb;
    int b[30];

    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            i++;
        }
    }
    while(i<=mid)
    {
        b[k]=arr[i];
            i++;
            k++;
    }
    while(j<=ub)
    {
 
         b[k]=arr[j];
            j++;
            i++;
    }
    for(i=0;i<k;i++)
    {
            arr[i]=b[i];
    }
}

void mergeSort(int arr[], int lb,int ub)
{
	
	int mid=(lb+ub)/2;
    mergesort(arr,lb,mid);
    mergesort(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
    
}	
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}



void main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array of size %d:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergeSort(arr,0,n-1);
	printf("The sorted array:");
	printArray(arr,n);
}
	
