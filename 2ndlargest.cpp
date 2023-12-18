#include<iostream>
#include<vector>
using namespace std;
int bruteforce(vector<int>&v)
{
	sort(v.begin(),v.end());     //O(nlogn)
	int n=v.size();
	int largest=v[n-1];
	int slargest=-1;
	for(int i= n-2 ;i>=0;i++)    //O(n)
	{
		if(v[i]!=largest)
		{
			slargest=v[i];        //O(nlogn + n)
			break;
		}
	}
	return slargest;


}
int better(vector<int>arr)
{
	int largest=arr[0];
	for(int i=1;i<arr.size();i++)   //O(n)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	int slargest = arr[0];
	for(int i=0;i<arr.size();i++)//1 2 3 4 5      //O(n)
	{
		if(arr[i]!=largest && arr[i]>slargest)
		{
			slargest=arr[i];
		}
	}
	return slargest;              //O(2n)
}
int optimal(vector<int> arr)
{
	int largest=arr[0];
	int slargest=-1;
	for(int i=1;i<arr.size();i++)
	{
		if(arr[i]>largest )
		{
			slargest=largest;
			largest=arr[i];
		}
		if(arr[i]<largest && arr[i]>slargest)
		{
			slargest=arr[i];
		}
	}
	return slargest;
}

int main()
{
	vector<int>arr(200);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	// cout<<"2nd largest of array using bruteforce is "<< bruteforce(arr)<<endl;
	cout<<" 2nd largest better approch is"<<better(arr)<<endl;
	cout<<" 2nd largest using optimal is "<<optimal(arr)<<endl;
}