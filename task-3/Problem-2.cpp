#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Given the names and grades for each student in a class of N students,
 *   store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
 *   Note: If there are multiple students with the second lowest grade,
 *   order their names alphabetically and print each name on a new line.
 */

bool cmp(const pair<string,double> &a,
            const pair<string,double> &b){
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    vector<pair<string,double>>v(n);
    double mx = 0, mx2 = 0;
    for(int i=0; i<n; i++){
        string name; double score;
        cin >> name >> score;
        v[i] = {name,score};
        if(score > mx){
            mx2 = mx;
            mx = score;
        }
        else if(mx2 > score && score < mx){
            mx2 = score;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<n; i++){
        if(v[i].second == mx2) cout << v[i].first << endl;
    }

}


