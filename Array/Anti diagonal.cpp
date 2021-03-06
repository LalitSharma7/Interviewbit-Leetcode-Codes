vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    int n = A.size();
    
    int N = 2*n-1;
    
    vector<vector<int>>result(N);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i+j].push_back(A[i][j]);
        }
    }
    
    return result;
}
