#include<stdio.h>

int linearSearch(int n,int arr[],int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
			return i;
	}
	return -1;
}
int main()
{
	int arr[5],n,key;
	printf("Enter array size");
	scanf("%d",&n);
	printf("Enter a sorted array of size %d",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key to be searched");
	scanf("%d",&key);
	if(linearSearch(n,arr,key)==-1)
		printf("Element not present in the array");
	else
		printf("Element is present in the location %d",linearSearch(n,arr,key));
		
	return 0;
}
