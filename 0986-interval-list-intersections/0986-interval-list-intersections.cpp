class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& n, vector<vector<int>>& m) {
        int i=0;
        int j=0;
        vector<vector<int>>res;
        while(i<n.size() && j<m.size()){
            int start1=n[i][0];
            int end1=n[i][1];
            int start2=m[j][0];
            int end2=m[j][1];
            if(max(start1,start2)<=min(end1,end2)){
                    int s=max(start1,start2);
                    int e=min(end1,end2);
                    res.push_back({s,e});
                }
            if(end1<=end2)
            i++;
            else
            j++;

        }
        return res;
    }
};