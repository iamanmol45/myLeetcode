class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            // We need an earlier prefix sum:
            // prefixSum - previousSum = k
            int required = prefixSum - k;

            if (mp.find(required) != mp.end()) {
                count += mp[required];
            }

            mp[prefixSum]++;
        }

        return count;
    }
};