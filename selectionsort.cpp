#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void selection_sort(int size, int arr[])
{
	int min;
	for(int i=0;i<size-1;i++)
	{
		min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
				swap(arr[i],arr[min]);
			}
		}
	}
}

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	selection_sort(size,arr);
	for(int i=0;i<size;i++)
		cout<<"\n"<<arr[i];
}
