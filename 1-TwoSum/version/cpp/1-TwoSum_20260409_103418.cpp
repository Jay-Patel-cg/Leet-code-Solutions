// Last updated: 09/04/2026, 10:34:18
// Problem Number -> 345 with Good Approach [Reverse Vowels of a String]
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int l = 0;
5        int r = s.size() - 1;
6
7        while(l<r){
8            if(!(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' || s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U')) {
9               l++;
10            }
11           else if((!(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u' || s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U'))){
12            r--;
13        }
14        else{
15            swap(s[l],s[r]);
16            l++;
17            r--;
18        }    
19    }
20    return s;  
21    }
22};