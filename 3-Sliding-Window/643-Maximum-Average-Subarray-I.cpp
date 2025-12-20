class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0.0;
        double sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        avg=sum/k;
        double navg=0.0;
        for(int i=0; i<nums.size()-k; i++){
            sum-=nums[i];
            sum+=nums[k+i];
            navg=sum/k;
            avg=max(avg, navg);
        }
        return avg;
    }
    
};
