class Solution {
public:
    bool isPalindrome(int x) {
        // Negatives aren't palindromes; numbers ending in 0 can't be (except 0)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // Even digits: x == rev. Odd digits: drop the middle digit from rev.
        return x == rev || x == rev / 10;
    }
};