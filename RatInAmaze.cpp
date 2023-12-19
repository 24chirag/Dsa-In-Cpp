class Solution{
    private:
    bool safe(vector<vector<int>> &m, int n,int x,int y,string output,vector<vector<int>> mapping)
    {
        if((x>=0 && x<n) && (y>=0 && y<n) && (m[x][y]==1) && (mapping[x][y]==0) )
        {
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m, int n,int x,int y, vector<string> &ans,string output,vector<vector<int>> mapping)
    {
        //base case 
        if(x==n-1 && y==n-1)
        {
            ans.push_back(output);
            return;
        }
        mapping[x][y]=1;
        //down
        int newx=x+1;
        int newy=y;
        if(safe(m,n,newx,newy,output,mapping))
        {
            output.push_back('D');
            solve(m,n,newx,newy,ans,output,mapping);
            output.pop_back();
        }
        //up
        newx=x-1;
        newy=y;
        if(safe(m,n,newx,newy,output,mapping))
        {
            output.push_back('U');
            solve(m,n,newx,newy,ans,output,mapping);
            output.pop_back();
        }
        //left
         newx=x;
        newy=y-1;
        if(safe(m,n,newx,newy,output,mapping))
        {
            output.push_back('L');
            solve(m,n,newx,newy,ans,output,mapping);
            output.pop_back();
        }
        //right
        newx=x;
        newy=y+1;
        if(safe(m,n,newx,newy,output,mapping))
        {
            output.push_back('R');
            solve(m,n,newx,newy,ans,output,mapping);
            output.pop_back();
        }
        
         mapping[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0)
        {
            return ans;
            
        }
        string output="";
        vector<vector<int>>mapping = m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mapping[i][j]=0;
            }
        }
        int x=0;
        int y=0;
        solve(m,n,x,y,ans,output,mapping);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

