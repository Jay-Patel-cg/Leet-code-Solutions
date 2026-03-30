// Last updated: 30/03/2026, 13:31:50
// Valid palindrome
1/**
2 * @param {string} s
3 * @return {boolean}
4 */
5var isPalindrome = function(s) {
6    let left = 0;
7    let right = s.length - 1;
8
9    while (left < right) {
10
11        // Skip non-alphanumeric (ASCII check)
12        while (left < right && !isAlphaNumeric(s[left])) left++;
13        while (left < right && !isAlphaNumeric(s[right])) right--;
14
15        // Compare lowercase characters
16        if (toLower(s[left]) !== toLower(s[right])) {
17            return false;
18        }
19
20        left++;
21        right--;
22    }
23
24    return true;
25};
26
27// Check if character is alphanumeric (faster than regex)
28function isAlphaNumeric(char) {
29    let code = char.charCodeAt(0);
30
31    return (
32        (code >= 48 && code <= 57) ||   // 0-9
33        (code >= 65 && code <= 90) ||   // A-Z
34        (code >= 97 && code <= 122)     // a-z
35    );
36}
37
38// Convert uppercase to lowercase manually (faster)
39function toLower(char) {
40    let code = char.charCodeAt(0);
41
42    if (code >= 65 && code <= 90) {
43        return String.fromCharCode(code + 32);
44    }
45    return char;
46}