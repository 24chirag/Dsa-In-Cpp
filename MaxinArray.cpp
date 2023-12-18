#include<iostream>
#include<vector>
using namespace std;
int maximum1(vector<int> arr,int n)
{
	int max=INT_MIN;
	for(int i =0;i<n;i++)
	{
	if(arr[i]>max)
	{
	max=arr[i];
	}
	}
	return max;
}
int main()
{
	vector<int> arr(199);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	cout<<maximum1(arr,n)<<endl;
}