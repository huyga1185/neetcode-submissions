class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = (char)((int)s[i] + ('a' - 'A'));
            if (s[j] >= 'A' && s[j] <= 'Z')
                s[j] = (char)((int)s[j] + ('a' - 'A'));
            
            if ((s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')) {
                i++;
                continue;
            } else if ((s[j] < 'a' || s[j] > 'z') && (s[j] < '0' || s[j] > '9')) {
                j--;
                continue;
            }
            if (s[i] != s[j]) return 0;
            i++;
            j--;
        }
        return 1;
    }
};
