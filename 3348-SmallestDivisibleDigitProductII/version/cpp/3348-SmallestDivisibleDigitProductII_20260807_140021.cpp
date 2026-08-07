// Last updated: 07/08/2026, 14:00:21
// Smallest Divisible Digit Product II - 3348
1#include <string>
2#include <vector>
3#include <algorithm>
4
5using namespace std;
6
7class Solution {
8   
9    int getCount(long long& val, int prime) {
10        int count = 0;
11        while (val > 0 && val % prime == 0) {
12            count++;
13            val /= prime;
14        }
15        return count;
16    }
17
18   
19    int minDigitsNeeded(int c2, int c3, int c5, int c7) {
20        c2 = max(0, c2);
21        c3 = max(0, c3);
22        c5 = max(0, c5);
23        c7 = max(0, c7);
24
25        int count8 = c2 / 3;
26        c2 %= 3;
27        int count9 = c3 / 2;
28        c3 %= 2;
29
30        int count6 = 0;
31        if (c2 == 1 && c3 == 1) {
32            count6 = 1;
33            c2 = 0;
34            c3 = 0;
35        } else if (c2 == 2 && c3 == 1) {
36           
37            count6 = 1;
38            c3 = 0;
39            c2 = 1;
40        }
41
42        int count4 = c2 / 2;
43        c2 %= 2;
44
45        int count2 = c2;
46        int count3 = c3;
47
48        return count8 + count9 + count6 + count4 + count2 + count3 + c5 + c7;
49    }
50
51    
52    string getMinSuffix(int c2, int c3, int c5, int c7, int targetLen) {
53        c2 = max(0, c2);
54        c3 = max(0, c3);
55        c5 = max(0, c5);
56        c7 = max(0, c7);
57
58        int count8 = c2 / 3;
59        c2 %= 3;
60        int count9 = c3 / 2;
61        c3 %= 2;
62
63        int count6 = 0;
64        if (c2 == 1 && c3 == 1) {
65            count6 = 1;
66            c2 = 0;
67            c3 = 0;
68        } else if (c2 == 2 && c3 == 1) {
69            count6 = 1;
70            c3 = 0;
71            c2 = 1;
72        }
73
74        int count4 = c2 / 2;
75        c2 %= 2;
76
77        int count2 = c2;
78        int count3 = c3;
79
80        string res = "";
81        res.append(count2, '2');
82        res.append(count3, '3');
83        res.append(count4, '4');
84        res.append(c5, '5');
85        res.append(count6, '6');
86        res.append(c7, '7');
87        res.append(count8, '8');
88        res.append(count9, '9');
89
90        int onesNeeded = targetLen - (int)res.length();
91        if (onesNeeded < 0) return "";
92        
93        return string(onesNeeded, '1') + res;
94    }
95
96    void removeDigitFactors(char d, int& c2, int& c3, int& c5, int& c7) {
97        int val = d - '0';
98        while (val > 0 && val % 2 == 0) { c2--; val /= 2; }
99        while (val > 0 && val % 3 == 0) { c3--; val /= 3; }
100        while (val > 0 && val % 5 == 0) { c5--; val /= 5; }
101        while (val > 0 && val % 7 == 0) { c7--; val /= 7; }
102    }
103
104    void addDigitFactors(char d, int& c2, int& c3, int& c5, int& c7) {
105        int val = d - '0';
106        while (val > 0 && val % 2 == 0) { c2++; val /= 2; }
107        while (val > 0 && val % 3 == 0) { c3++; val /= 3; }
108        while (val > 0 && val % 5 == 0) { c5++; c5 /= 5; } 
109    }
110
111public:
112    string smallestNumber(string num, long long t) {
113        int c2 = getCount(t, 2);
114        int c3 = getCount(t, 3);
115        int c5 = getCount(t, 5);
116        int c7 = getCount(t, 7);
117
118       
119        if (t > 1) return "-1";
120
121        int n = num.length();
122
123       
124        int firstZero = -1;
125        for (int i = 0; i < n; ++i) {
126            if (num[i] == '0') {
127                firstZero = i;
128                break;
129            }
130        }
131
132       
133        vector<int> req2(n + 1), req3(n + 1), req5(n + 1), req7(n + 1);
134        req2[0] = c2; req3[0] = c3; req5[0] = c5; req7[0] = c7;
135
136        int limit = (firstZero == -1) ? n : firstZero;
137
138        for (int i = 0; i < limit; ++i) {
139            req2[i + 1] = req2[i];
140            req3[i + 1] = req3[i];
141            req5[i + 1] = req5[i];
142            req7[i + 1] = req7[i];
143
144            removeDigitFactors(num[i], req2[i + 1], req3[i + 1], req5[i + 1], req7[i + 1]);
145        }
146
147       
148        if (firstZero == -1 && req2[n] <= 0 && req3[n] <= 0 && req5[n] <= 0 && req7[n] <= 0) {
149            return num;
150        }
151
152        
153        int startPos = (firstZero == -1) ? n - 1 : firstZero;
154
155        for (int i = startPos; i >= 0; --i) {
156            int cur2 = req2[i];
157            int cur3 = req3[i];
158            int cur5 = req5[i];
159            int cur7 = req7[i];
160
161            int remLen = n - 1 - i;
162
163           
164            char startDigit = num[i] + 1;
165            if (i == firstZero) startDigit = '1';
166
167            for (char d = startDigit; d <= '9'; ++d) {
168                int next2 = cur2, next3 = cur3, next5 = cur5, next7 = cur7;
169                removeDigitFactors(d, next2, next3, next5, next7);
170
171                if (minDigitsNeeded(next2, next3, next5, next7) <= remLen) {
172                    string prefix = num.substr(0, i);
173                    prefix += d;
174                    string suffix = getMinSuffix(next2, next3, next5, next7, remLen);
175                    return prefix + suffix;
176                }
177            }
178        }
179
180        
181        int totalLen = max(n + 1, minDigitsNeeded(c2, c3, c5, c7));
182        return getMinSuffix(c2, c3, c5, c7, totalLen);
183    }
184};