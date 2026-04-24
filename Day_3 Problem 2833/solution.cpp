#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        string s = moves;
        replace(s.begin(), s.end(), '_', 'L');
        int ans = 0, ans2 = 0;
        for (auto i : s)
            if (i == 'L')
                ans++;
            else
                ans--;
        s = moves;
        replace(s.begin(), s.end(), '_', 'R');
        for (auto i : s)
            if (i == 'L')
                ans2++;
            else
                ans2--;
        return max(abs(ans), abs(ans2));
    }
};