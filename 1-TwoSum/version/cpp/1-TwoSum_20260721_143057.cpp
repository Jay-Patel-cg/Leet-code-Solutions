// Last updated: 21/07/2026, 14:30:57
// Find All Anagrams in a String - 438
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        vector<int> ans;
6
7        int n = s.size();
8        int m = p.size();
9
10        if(m > n){
11            return ans;
12        }
13
14        vector<int> freqp(26,0);
15        vector<int> windowfreq(26,0);
16
17        for(char ch : p){
18            freqp[ch - 'a']++;
19        }
20
21        for(int i = 0; i < m ; i++){
22            windowfreq[s[i] - 'a']++;
23        }
24
25        if(windowfreq == freqp){
26            ans.push_back(0);
27        }
28
29        int left = 0;
30
31        for(int right = m ; right < n; right++){
32            windowfreq[s[left] - 'a']--;
33            left++;
34
35            windowfreq[s[right] - 'a']++;
36
37            if(windowfreq == freqp){
38                ans.push_back(left);
39            }
40        }
41        return ans;
42    }
43};