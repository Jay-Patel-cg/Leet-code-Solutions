// Last updated: 25/03/2026, 13:45:39
// most number written return
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var majorityElement = function(nums) {
6    
7    let candidate = null;
8    let count = 0;
9
10    for (let num of nums) {
11        if (count === 0) {
12            candidate = num;
13        }
14
15        if (num === candidate) {
16            count++;
17        } else {
18            count--;
19        }
20    }
21
22    return candidate;
23
24};