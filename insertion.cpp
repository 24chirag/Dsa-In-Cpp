#include<iostream>
using namespace std;
int main()
{
	int n;

	int arr[100];
	cout<<"enter the elements in array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	// int pos;
	// cout<<"enter the position "<<endl;
	// cin>>pos;
	// int key;
	
	// for(int i=n-1;i>=pos;i--)
	// { 
	// 	arr[i+1]=arr[i];
		
	// }
	// arr[pos]=key;
	// for(int i=pos;i<n;i++)
	// {
	// 	arr[i]=arr[i+1];
	// }
	// int i=0;
	// int j=n-1;
	// while(i<=j)
	// {
	// 	swap(arr[i],arr[j]);
	// 	i++;
	// 	j--;
	// }
	int i=0;
	int j=n-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			if(arr[j]!=0)
			{
				swap(arr[i],arr[j]);
			j--;

			}
			

		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}