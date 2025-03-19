class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count = 0;
        int count1 = 0;
        int count2 = 0;
        for (int num : nums) {
            if (num == 0)
                count++;
            else if (num == 1)
                count1++;
            else
                count2++;
        }
        int i = 0;
        while (count--) nums[i++] = 0;
        while (count1--)nums[i++] = 1;
        while (count2--)nums[i++] = 2;
    }
};