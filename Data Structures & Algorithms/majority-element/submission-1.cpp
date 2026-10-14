class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        int maxi = INT_MIN;
        int element;
        for(auto ele: m) {
            if(ele.second > maxi) {
                maxi = ele.second;
                element = ele.first;
            }
        }

        return element;
    }
};