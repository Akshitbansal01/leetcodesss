1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        if (s.size() < p.size())
6            return {};
7
8        map<char,int> referenceMap;
9
10        for (auto c : p)
11            referenceMap[c]++;
12
13        map<char,int> tempMap;
14
15        int j;
16        for (j = 0; j < p.size(); j++) {
17            tempMap[s[j]]++;
18        }
19
20        vector<int> ans;
21
22        while (j < s.size()) {
23
24            if (referenceMap == tempMap)
25                ans.push_back(j - p.size());
26
27            tempMap[s[j]]++;
28            tempMap[s[j - p.size()]]--;
29
30            if (tempMap[s[j - p.size()]] == 0)
31                tempMap.erase(s[j - p.size()]);
32
33            j++;
34        }
35
36        if (referenceMap == tempMap)
37            ans.push_back(j - p.size());
38
39        return ans;
40    }
41};