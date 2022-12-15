#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Problem-3, Leetcode Submission: 
 *      https://leetcode.com/problems/k-closest-points-to-origin/submissions/860035866/
 */


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>>v;
        for(auto point : points){
            int d = point[0] * point[0] + point[1] * point[1];
            v.push_back({d, point});
        }
        sort(v.begin(), v.end());
        vector<vector<int>>ans;
        for(int i=0; i<k; i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};

int main(){
    
}







