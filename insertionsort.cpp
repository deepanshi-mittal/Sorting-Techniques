#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int size, int arr[])
{
	int number;
	for(int i=1;i<size;i++)
	{
		number=arr[i];
		int j=i;
		while(arr[j-1]>number && j>=1)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=number;
	}
}

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	insertion_sort(size,arr);
	for(int i=0;i<size;i++)
		cout<<"\n"<<arr[i];
}
