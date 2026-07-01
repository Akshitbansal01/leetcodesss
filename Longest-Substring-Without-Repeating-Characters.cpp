1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_map<char, int> lastIndex;
5        int left = 0;
6        int maxLen = 0;
7
8        for (int right = 0; right < s.size(); right++) {
9            if (lastIndex.count(s[right]) && lastIndex[s[right]] >= left) {
10                left = lastIndex[s[right]] + 1;
11            }
12
13            lastIndex[s[right]] = right;
14            maxLen = max(maxLen, right - left + 1);
15        }
16
17        return maxLen;
18    }
19};