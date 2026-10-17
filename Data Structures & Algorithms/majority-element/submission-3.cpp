class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        for(auto ele: m) {
            if(ele.second > n/2) {
                return ele.first;
            }
        }

        
    }
};