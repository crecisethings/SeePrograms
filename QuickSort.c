#include<stdio.h>
int arr[30];

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[], int lb,int ub)
{
	int start=lb,end=ub,pivot=arr[lb],temp;
	while(start<end)
	{
		while(arr[start]<= pivot)
			start++;
		while(arr[end] >= pivot)
			end--;
		if(start<end)
		{
			swap(&arr[start],&arr[end]);
		}
	}
	swap(&arr[end],&arr[lb]);
	
	return end;
}

void quickSort(int arr[], int lb,int ub)
{
	
	if(lb<ub)
	{
		int q = partition(arr,lb,ub);
		quickSort(arr,lb,q-1);
		quickSort(arr,q+1,ub);
	}
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
	quickSort(arr,0,n-1);
	printf("The sorted array:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
}
	
