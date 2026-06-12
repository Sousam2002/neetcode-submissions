class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int l = 0, r = 0, ans = 0;

        while (r < s.size()) {
            if (mp.find(s[r]) != mp.end() && mp[s[r]] >= l) {
                l = mp[s[r]] + 1;
            }
            mp[s[r]] = r;
            ans = max(r - l + 1, ans);
            r++;
        }

        return ans;
    }
};
