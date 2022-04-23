#include<stdio.h>

void insertionSort(int arr[], int n)
{
	int temp,j;
	for(int i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("The sorted array:");
		for(int i=0;i<n;i++)
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
	insertionSort(arr,n);
	return 0;
	
}
