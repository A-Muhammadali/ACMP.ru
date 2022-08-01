#include<iostream>
using namespace std;
int main()
{
	/*
	int arr[105],n,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	k=arr[1];
	for(int i=1;i<=n;i++)
	{
		if(k<arr[i])
		{
			k=arr[i];
		}
	}
	
	cout<<k;
	*/
	int arr[10005],n,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n;i>=1;i--)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
