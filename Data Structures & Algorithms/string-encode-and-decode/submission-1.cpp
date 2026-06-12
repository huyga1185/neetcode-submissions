class Solution {
public:

    string encode(vector<string>& strs) {
        string e = "";
        for (string s: strs) {
            e+=to_string(s.size()) + '-' + s;
        }
        return e;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int size = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-') {
                int j;
                string temp = "";
                for (j = i + 1; j <= i + size; j++) {
                    temp += s[j];
                }
                strs.push_back(temp);
                size = 0; //reset size
                i = j - 1;
                continue;
            }
            size = size * 10 + (s[i] - 48);
        }
        return strs;
    }
};
