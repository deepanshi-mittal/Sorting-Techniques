#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;  //n is size of array provided by user
	int a[n];	//array a
	for(int i=0;i<n;i++)	//to take input in array
		cin>>a[i];
	//bubble sort 
	int swapped=1;	//flag variable
	//bubble sort using flag variable
	for(int i=0;i<n&&swapped;i++)
	{
		swapped=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				std::swap(a[j],a[j+1]);
				swapped=1;
			}
		}
	}//bubble sort ends
	for(int i=0;i<n;i++)
		cout<<"\n"<<a[i];	//printing sorted array
}
