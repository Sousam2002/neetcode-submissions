class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;

        while(l<r){
            int ans = numbers[l] + numbers[r];
            if(ans < target) l++;
            else if(ans > target) r--;
            else return {l+1, r+1};
        }

        return {0,0};
    }
};
