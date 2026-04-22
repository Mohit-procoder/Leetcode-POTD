#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string p, string q) {
        if (p.size() != q.size())
            return false;
        int i = 0, a = 0;
        while (i < p.size()) {
            if (p[i] != q[i])
                a++;
            if (a > 2)
                return false;
            i++;
        }
        return true;
    }
    vector<string> twoEditWords(vector<string>& queries,
                                vector<string>& dictionary) {
        vector<string> ans;
        for (int i = 0; i < queries.size(); i++)
            for (int j = 0; j < dictionary.size(); j++)
                if (check(queries[i], dictionary[j])) {
                    ans.push_back(queries[i]);
                    break;
                }
        return ans;
    }
};