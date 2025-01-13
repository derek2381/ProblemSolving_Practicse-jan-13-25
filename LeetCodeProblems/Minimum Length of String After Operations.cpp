// Problem Link
// https://leetcode.com/problems/minimum-length-of-string-after-operations/description/?envType=daily-question&envId=2025-01-13


// Source Code


class Solution {
public:
    int minimumLength(string s) {
        int res = 0;
        map<char, int> mp;

        for(char c : s){
            mp[c]++;
        }

        for(auto i : mp){
            if(i.second % 2 == 0){
                res += 2;
            }else{
                res += 1;
            }
        }

        return res;
    }
};