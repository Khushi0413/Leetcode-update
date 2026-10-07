class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2) return false;   // odd length can never be balanced

        unordered_map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> st;

        for (char ch : s) {
            if (pairs.count(ch)) {                       // closing bracket
                if (st.empty() || st.top() != pairs[ch]) return false;
                st.pop();
            } else {                                     // opening bracket
                st.push(ch);
            }
        }

        return st.empty();
    }
};