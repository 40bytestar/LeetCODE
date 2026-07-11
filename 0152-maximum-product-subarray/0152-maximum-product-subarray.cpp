class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxending=nums[0];
        int minending=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=maxending*nums[i];
            int v3=minending*nums[i];
            int maxNew=max(v1,max(v2,v3));
            int minNew=min(v1,min(v2,v3));
            maxending=maxNew;
            minending=minNew;
            ans=max(ans,maxending);
        }
        return ans;
    }
};