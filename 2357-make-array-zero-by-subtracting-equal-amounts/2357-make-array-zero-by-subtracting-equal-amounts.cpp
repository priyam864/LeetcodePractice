class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        // as one unique number means one operation and we have to count the
        // number of operatins..so we will directly count the number of distinct
        // numbers present using unordered set

        unordered_set<int> uniqueNumber;
        for (int num : nums) {
            if (num > 0) {
                uniqueNumber.insert(num);
            }
        }
        return uniqueNumber.size();
    }
};