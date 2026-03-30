// Last updated: 30/03/2026, 13:28:23
// Roman To Int
1/**
2 * @param {string} s
3 * @return {number}
4 */
5var romanToInt = function(s) {
6    const map = {
7        'I': 1,
8        'V': 5,
9        'X': 10,
10        'L': 50,
11        'C': 100,
12        'D': 500,
13        'M': 1000
14    };
15
16    let result = 0;
17
18    for (let i = 0; i < s.length; i++) {
19        let current = map[s[i]];
20        let next = map[s[i + 1]];
21
22        if (next > current) {
23            result -= current;
24        } else {
25            result += current;
26        }
27    }
28
29    return result;
30};