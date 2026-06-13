// Last updated: 13/06/2026, 12:01:51
// Find Most Frequent Vowel and Consonant - 3541
1class Solution {
2public:
3    int maxFreqSum(string s) {
4        vector<int> freq(26,0);
5
6        for(char ch: s){
7            freq[ch - 'a']++;
8        }
9
10        int maxVowel = 0;
11        int maxConsonant = 0;
12
13            for(int i=0; i< 26; i++){
14                char ch = 'a' + i;
15                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
16                    maxVowel = max(maxVowel , freq[i]);
17                } else {
18                    maxConsonant = max(maxConsonant , freq [i]);
19                }
20            }
21        return maxVowel + maxConsonant;
22    }
23};