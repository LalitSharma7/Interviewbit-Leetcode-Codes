string Solution::simplifyPath(string A) {
    stack<string> res;
    vector<string> s;
    string final = "";
    int N = A.size();
    
    for(int i = 1; i<N; i++){
        string temp = "";
        while(A[i] != '/' && i<N){
            temp.push_back(A[i]);
            i++;
        }
        if(temp != ".." && temp != "." && temp.length() > 0) res.push(temp);
        else if(temp == ".") continue;
        else if(temp == ".."){
            if(!res.empty()) res.pop();
        }
    }
    while(!res.empty()){
        s.push_back(res.top());
        s.push_back("/");
        res.pop();
    }
    if(s.size() == 0) s.push_back("/");
    reverse(s.begin(), s.end());
    for(auto t: s) final+=t;
    
    return final;

}
