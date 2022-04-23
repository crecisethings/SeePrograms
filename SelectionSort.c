#include<stdio.h>

void selectionSort(int arr[], int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i)
		{
			temp=arr[min]; //swapping arr[min] and arr[i]
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	printf("The sorted array is:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
}
int main()
{
	int arr[30],n;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array of size %d:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionSort(arr,n);
	return 0;
	
}
