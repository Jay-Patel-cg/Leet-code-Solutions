// Last updated: 16/07/2026, 14:19:09
// Container With Most Water - 11
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4     int left = 0;
5     int right = height.size()-1;
6     int max_area = 0;
7
8     while(left < right){
9        int current_height = (height[left] < height[right]) ? height[left] : height[right];
10
11        int current_area = (right - left) * current_height;
12
13        max_area = (current_area > max_area) ? current_area : max_area ;
14
15        if(height[left] < height[right]){
16            left++;
17        }else{
18            right--;
19        }
20     }
21     return max_area;   
22    }
23};