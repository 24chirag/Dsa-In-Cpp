#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr(200);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int flag=0;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i+1]>=arr[i])
		{

		}
		else{
			return 0;
		}
		
	}
	return 1;
	
}