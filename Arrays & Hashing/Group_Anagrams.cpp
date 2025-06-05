class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        for(const auto& s:strs){
            string ans=s;
            sort(ans.begin(),ans.end());
            mp[ans].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& str : mp){
            result.push_back(str.second);
        }
        return result;
    }
};

