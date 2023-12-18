#include <bits/stdc++.h> 
void solve(string str,vector<string> &ans, string output , int index)
{
	if(index>=str.length())
	{
		if(output.length()>0)
		{
			ans.push_back(output);

		}
		
		return;
	}

	solve(str,ans,output,index+1);
	output.push_back(str[index]);
	solve(str,ans,output,index+1);

}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output ="";
	int index=0;
	solve(str,ans,output,index);
	return ans;
	
}

