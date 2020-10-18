#include<stdio.h>
#include<stdlib.h>
void mergesort(int [],int,int,int);
void merge(int [],int,int,int);

main()
{
	int arr[20],i,size,j;
	printf("Enter size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter value");
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,size-1,size);
	printf("\nvalues are\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void mergesort(int arr[],int start,int last,int size)
{
	int mid;
	if(start<last)
	{
		mid=(start+last)/2;
		mergesort(arr,start,mid,size);
		mergesort(arr,mid+1,last,size);
		merge(arr,start,mid,last);
		for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	}
}

void merge(int arr[],int start,int mid,int last)
{
	int i=start;
	int j=mid+1;
	int temp[30],k=start;
	while(i<=mid && j<=last)
	{
		if(arr[i] <= arr[j])
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
			temp[k]=arr[i];
			i++;
			k++;
	}
	while(j<=last)
	{
			temp[k]=arr[j];
			j++;
			k++;
	}
	for(i=start;i<=last;i++)
	{
		arr[i]=temp[i];
	}
}
