#include<iostream>
#include<vector>
using namespace std;
void swapAlt(int* arr,int n)
{
	for(int i=1;i<n;i=i+2)
	{
		swap(arr[i],arr[i-1]);
	}
}
//brute force approach
int uniqueNUMBER(int* arr,int n)
{
	int num=0;
	for(int i=0;i<n;i++)
	{
		num=num^arr[i];

	}
	return num;

}
void uniqueOccurrences(int* arr,int n) {
        
         int ans[100];
        for(int i=0;i<n;i++)
        {
            int count=1;
            for(int j =i+1;j<n;i++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            ans.push_back(count);

        }
        for(int i=0;i<;i++)
        {
        	cout<<ans[i]<<" ";
        }
        
    }
int main()
{
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	// swapAlt(arr,n);
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<uniqueNUMBER(arr,n)<<endl;
	uniqueOccurrences(arr);
}