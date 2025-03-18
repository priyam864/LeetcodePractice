class Solution {
public:
    bool isPalindrome(int x) {

        if (x<0) return false;

        long revnum = 0;
        int original = x;
        while (x != 0) {
            int lastdigit;
            lastdigit = x % 10;
            revnum = (revnum * 10) + lastdigit;
            x = x / 10;
        }

        return revnum==original;
        
    }
};