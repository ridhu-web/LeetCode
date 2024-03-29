// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        int a[26]={0};
        for(int i=s.size()-1;i>=0;i--)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};