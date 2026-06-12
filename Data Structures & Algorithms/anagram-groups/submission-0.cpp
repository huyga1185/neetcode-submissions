class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> v;
        for (const auto& str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(str);
        }
        for (const auto& pair : mp) {
            v.push_back(pair.second);
        }
        return v;
    }
};
