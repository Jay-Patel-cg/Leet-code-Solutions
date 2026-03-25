// Last updated: 25/03/2026, 13:39:13
// Single Number problem solve
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var singleNumber = function(nums) {
6    
7    let result = 0;
8
9    for(let num of nums){
10        result ^= num;
11    }
12
13    return result;
14
15};