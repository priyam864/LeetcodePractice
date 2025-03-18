class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {

        int n = nums.size();
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            int bitMask = 0;
            for (int j = i; j < n; j++) {
                if ((bitMask & nums[j]) == 0) {
                    bitMask |= nums[j];
                    maxLen = max(maxLen, j - i + 1);
                } else {
                    break;
                }
            }
        }
        return maxLen;
    }
};
