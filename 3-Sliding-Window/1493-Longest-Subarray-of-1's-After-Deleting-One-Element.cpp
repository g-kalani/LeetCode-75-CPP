class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0, r=0, zeros=0, ans=0;
        while(r<nums.size()){
           if(nums[r]==0) zeros++; 
            if(zeros>1) 
            {
                if(nums[l]==0) zeros--; 
                l++; 
            }
            if(zeros<=1) 
            {
                ans=max(ans,r-l+1); 
            }
            r++; 
        }
        return ans-1; 
    }
};