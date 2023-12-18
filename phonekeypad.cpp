class Solution {
    private:
void solve(string digits,vector<string> &ans,string output, string mapping[],int index){
    if(index>=digits.length())
    {
        ans.push_back(output);
        return ;
    }
    int val=digits[index]-'0';
    string ele=mapping[val];
    for(int i=0;i<ele.length();i++)
    {
        output.push_back(ele[i]);
        solve(digits,ans,output,mapping,index+1);
        output.pop_back();
    }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.length()==0)
        {
            return ans;
        }
        solve(digits,ans,output,mapping,0);
        return ans;
    }
};
