#include<stdio.h>
int display(int arr[],int n){
	int i,min,max;
	min=max=0;
	for (i=1; i<n; i++)
	{
		if (min > arr[i])
		min=arr[i];
		if (max < arr[i])
		max=arr[i];	
	}
	printf("minimum number is:%d",min);
	printf("maximum number is:%d",max);
}
int main()
{
	int arr[5],i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter number:");
	for (i=0; i<n; i++)
	{
		scanf("%d",arr[i]);
	}
	
	display(arr ,n);
}