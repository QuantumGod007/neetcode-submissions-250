class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mini = INT_MAX;
        string s;
        
        for(int i=0;i<n;i++) {
            mini = min(mini,(int)strs[i].length());
        }
        for(int i=0;i<mini;i++) {
            for(int j=0;j<n-1;j++) {
                if(strs[j][i] != strs[j+1][i]) 
                    return s;          
            }
            s.push_back(strs[0][i]);
        }
        return s;
        
    }
};