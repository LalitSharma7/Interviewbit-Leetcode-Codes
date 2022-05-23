class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_overall = nums[0];
        int max_ending_here = nums[0], min_ending_here = nums[0];
        
        for(int i = 1; i < nums.size(); ++i){
            int tmp = max_ending_here;
            max_ending_here = max({nums[i], nums[i]*max_ending_here, nums[i]*min_ending_here});
            min_ending_here = min({nums[i], nums[i]*tmp, nums[i]*min_ending_here});
            max_overall = max(max_overall, max_ending_here);
        }
        return max_overall;
        
        //just check knowledge centre
        //temp maxeh k lie islie liya taaki old value mil sake meh mai to min wale k mil jayegi old wali kyuki pehla ata hai lekin min k lie temp mai store kar di hai
    }
};
