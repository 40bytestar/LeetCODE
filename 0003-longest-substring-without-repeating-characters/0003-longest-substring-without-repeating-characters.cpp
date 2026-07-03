class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>f;
        int low=0;
        int high=0;
        int res=0;
        int n=s.size();
        for(int high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;
            while(f.size()<len){
                f[s[low]]--;
                if(f[s[low]]==0)
                f.erase(s[low]);
                low++;
                len=high-low+1;
            }
        
        len=high-low+1;
        res=max(res,len);
    }
    
    return res;
    
    }
};