// Last updated: 30/03/2026, 13:29:17
// Done
1/**
2 * @param {string} haystack
3 * @param {string} needle
4 * @return {number}
5 */
6var strStr = function(haystack, needle) {
7    let n = haystack.length;
8    let m = needle.length;
9
10    for (let i = 0; i <= n - m; i++) {
11        if (haystack.substring(i, i + m) === needle) {
12            return i;
13        }
14    }
15
16    return -1;
17};