class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=nums.size();
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        for(auto ele : f){
            if(ele.second>n/2)
            return ele.first;
        }
        return -1;
    }
};