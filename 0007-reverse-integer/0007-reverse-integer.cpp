class Solution {
public:
    int reverse(int x) {
        long revnum = 0;
        while (x != 0) {
            long lastdigit = x % 10; 
            revnum = (revnum * 10) + lastdigit;

            if (revnum > numeric_limits<int>::max() ||
                revnum < numeric_limits<int>::min()) {
                return 0;
            }
            x = x / 10;
        }
        return revnum;
    }
};