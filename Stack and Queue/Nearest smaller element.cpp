vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>s;
    vector<int>v;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        
        else if(s.size()>0 && s.top()<A[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=A[i])
        {
            while(s.size()>0 && s.top()>=A[i])
            {
                s.pop();
            }
            
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(A[i]);
    }
    return v;
}
