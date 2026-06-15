class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) return false;
        vector<int> v1(26, 0), v2(26, 0);

        for (auto it : s1) v1[it - 'a']++;

        int l = 0, r = 0;

        while (r < s2.size()) {
            v2[s2[r] - 'a']++;
            if (v1[s2[r] - 'a']) {
                while (l < r  && v1[s2[r] - 'a'] < v2[s2[r] - 'a']) {
                    v2[s2[l++] - 'a']--;
                }
            } else if (!v1[s2[r] - 'a']) {
                while (l <= r) {
                    v2[s2[l++] - 'a']--;
                }
            }
            if (v2 == v1) return true;
            r++;
        }
        return false;
    }
};
