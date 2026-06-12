class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for (int i = 0; i < strs.size(); i++) {
            vector<int>v(26,0);

            for(int j=0; j<strs[i].size(); j++){
                v[strs[i][j]-'a']++;
            }

            string s = "";

            for(int j=0; j< 26; j++){
                s = s + ',' + to_string(v[j]);
            }

            cout << s << '\n';
            mp[s].push_back(strs[i]);
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
