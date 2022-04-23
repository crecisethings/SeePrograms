#include<stdio.h>

int binsearch(int n, int arr[], int key)
{
	int left,right,mid;
	left= 0;
	right= n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==key)
			return mid;
		else
		{
			if(mid<key)
				left=mid+1;
			else
				right=mid-1;
		}
		
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
	if(	binsearch(n,arr,key)==-1)
		printf("Element not present");
	else
		printf("Element is present in the position %d",	binsearch(n,arr,key));
	
	return 0;

	
}

