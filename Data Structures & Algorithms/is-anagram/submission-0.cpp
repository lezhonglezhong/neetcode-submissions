class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> temp1, temp2;
        for(char x : s)
        temp1[x]++;
        for(char x : t)
        temp2[x]++;
        return temp1 == temp2;
    }
};
