stack<int>st;
int mn;
 
MinStack::MinStack() {
   mn=0;
   while(st.size()>0)
   st.pop();
}
 
void MinStack::push(int x) {
    if(st.size()==0)
   {
     mn=x;
     st.push(x);
     return;
   }
 
   if(x<mn)
   {
    st.push(2*x-mn);
    mn=x;
   }
   else
   {
    st.push(x);
   }
}
 
void MinStack::pop() {
    if(st.empty())
        return;
   if(st.top()<mn)
   {
     mn=2*mn-st.top();
      st.pop();
    }
   else st.pop();
 
}
 
int MinStack::top() {
    if(st.empty())
       return -1;
   if(st.top()<mn)
   {
     return mn;
    }
   return st.top();
   }
 
int MinStack::getMin() {
    if(st.empty())
        return -1;
 
    return mn;  
}
