#include<stdio.h>

void bubbleSort(int arr[], int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1]) //for arrangement in ascending order
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:\n");
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
	bubbleSort(arr,n);
	return 0;
}
