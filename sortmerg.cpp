#include<iostream>
using namespace std;
void mergesort(int [],int,int,int);
void merge1(int [],int,int,int);

main()
{
	int arr[20],i,s,j;
	cout<<"Enter size of array";
	cin>>s;
	for(i=0;i<s;i++)
	{
		cout<<"Enter value";
		cin>>arr[i];
	}
	mergesort(arr,0,s-1,s);
	cout<<"\nvalues are\n";
	for(i=0;i<s;i++)
		cout<<arr[i]<<"\t";
	cout<<"\n";
}

void mergesort(int arr[],int start,int last,int s)
{
	int mid;
	if(start<last)
	{
		mid=(start+last)/2;
		mergesort(arr,start,mid,s);
		mergesort(arr,mid+1,last,s);
		merge1(arr,start,mid,last);
	}
}

void merge1(int arr[],int start,int mid,int last)
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
