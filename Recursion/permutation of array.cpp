
class Solution {
public:
    
      void solve(vector<int>nums, vector<vector<int>>& ans, int index){
        //base case
        if(index >=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j= index; j<nums.size(); j++){
            swap(nums[index], nums[j]);
            solve(nums, ans, index+1);
            //baktracking
            //techdose
            swap(nums[index], nums[j]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        //ek ko fix karke baaki 2 ko change karke permuations banana hai
        
        //gfg se dekhna hai
        
        vector<vector<int>> ans;
        int index  = 0;
        solve(nums,ans,index);
        return ans;
        
    }
};
