class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (const auto& pair : mp) {
            if (pair.second != 0)
                return 0;
        }
        return 1;
    }
};
