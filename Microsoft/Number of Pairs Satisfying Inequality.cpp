class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        
        pbds s;
        int n = nums1.size();
        long long ans = 0;
        for(int i=n-1;i>=0; i--){
            int val = nums1[i] - nums2[i];
            auto it = s.order_of_key(val);
            ans += (s.size() - it);
            s.insert(val + diff);
        }
        return ans;
    }
};
