class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxEnding=0;
        int minEnding=0;
        int maxSum=INT_MIN;
        int minSum=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxEnding=max(maxEnding+nums[i],nums[i]);
            maxSum=max(maxSum,maxEnding);
            minEnding=min(minEnding+nums[i],nums[i]);
            minSum=min(minSum,minEnding);
        }
        if(maxSum<0)
        return maxSum;
        return max(maxSum,sum-minSum);
        
    }
};