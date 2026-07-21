// Last updated: 21/07/2026, 13:35:58
// Maximum Number of Vowels in a Substring of Given Length - 1456
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int left = 0;
5        int right = k-1;
6        int count = 0;
7
8        for(int i=0; i < k ; i++){
9            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
10                count++;
11            }
12        }
13        int ans = count;
14
15        while(right < s.size() - 1){
16            if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u'){
17                count--;
18            }
19            left++;
20            right++;
21
22            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
23                count++;
24            }
25            ans = max(ans,count);
26        }
27        return ans;
28    }
29};