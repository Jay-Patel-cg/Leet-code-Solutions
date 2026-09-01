// Last updated: 01/09/2026, 09:13:07
// Minimum Moves to Clean the Classroom - 3568
1class Solution {
2public:
3    int minMoves(vector<string>& classroom, int maxEnergy) {
4        int m = classroom.size();
5        int n = classroom[0].size();
6        
7        int startX = -1, startY = -1;
8        vector<pair<int, int>> litters;
9        
10        for (int i = 0; i < m; ++i) {
11            for (int j = 0; j < n; ++j) {
12                if (classroom[i][j] == 'S') {
13                    startX = i;
14                    startY = j;
15                } else if (classroom[i][j] == 'L') {
16                    litters.push_back({i, j});
17                }
18            }
19        }
20        
21        int L = litters.size();
22        int targetMask = (1 << L) - 1;
23        
24        int maxE[20][20][1 << 10];
25        memset(maxE, -1, sizeof(maxE));
26        
27        queue<tuple<int, int, int, int>> q;
28        
29        int initialMask = 0;
30        for (int i = 0; i < L; ++i) {
31            if (litters[i].first == startX && litters[i].second == startY) {
32                initialMask |= (1 << i);
33            }
34        }
35        
36        q.push({startX, startY, initialMask, maxEnergy});
37        maxE[startX][startY][initialMask] = maxEnergy;
38        
39        int moves = 0;
40        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
41        
42        while (!q.empty()) {
43            int sz = q.size();
44            while (sz--) {
45                auto [r, c, mask, e] = q.front();
46                q.pop();
47                
48                if (mask == targetMask) return moves;
49                if (e == 0) continue;
50                
51                for (auto& d : dirs) {
52                    int nr = r + d[0];
53                    int nc = c + d[1];
54                    
55                    if (nr >= 0 && nr < m && nc >= 0 && nc < n && classroom[nr][nc] != 'X') {
56                        int nextE = e - 1;
57                        int nextMask = mask;
58                        
59                        if (classroom[nr][nc] == 'R') {
60                            nextE = maxEnergy;
61                        }
62                        
63                        if (classroom[nr][nc] == 'L') {
64                            for (int i = 0; i < L; ++i) {
65                                if (litters[i].first == nr && litters[i].second == nc) {
66                                    nextMask |= (1 << i);
67                                    break;
68                                }
69                            }
70                        }
71                        
72                        if (nextE > maxE[nr][nc][nextMask]) {
73                            maxE[nr][nc][nextMask] = nextE;
74                            q.push({nr, nc, nextMask, nextE});
75                        }
76                    }
77                }
78            }
79            moves++;
80        }
81        
82        return -1;
83    }
84};