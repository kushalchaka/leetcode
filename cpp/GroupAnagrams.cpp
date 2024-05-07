class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    vector <vector<string>> result;
    unordered_map<string, vector<string>> map;

    for (string str : strs) {
        string temp = str;
        sort(temp.begin(), temp.end());
        map[temp].push_back(str);
    }
    for (auto a : map) {
        result.push_back(a.second);
    }
    return result;
    }
};