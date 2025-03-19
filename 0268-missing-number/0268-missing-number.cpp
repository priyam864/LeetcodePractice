class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum,s2;
        sum=n*(n+1)/2;
        s2=0;
        for( int i=0;i<n;i++){
            s2+=nums[i];
        }
        return (sum-s2);
        
    }
};