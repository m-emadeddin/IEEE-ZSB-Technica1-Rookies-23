#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
/**
 *   Problem-6, Hackerrank Submission: 
 *      https://www.hackerrank.com/challenges/kaprekar-numbers/submissions/code/305432708
 */

bool isKap(long long n){
    int d = to_string(n).size();
    long long a = n*n;
    string s = to_string(a);
    if(s.size() > 1){
        string l,r;
        l = s.substr(0, s.size()/2);
        r = s.substr(s.size()/2);
        return  n == stoll(l)+stoll(r); 
    }
    else{
        return n == n*n;
    }
}

void kaprekarNumbers(int p, int q) {
    vector<long long> ans;
    for(long long i = p; i<=q; i++){
        if(isKap(i)){
            ans.push_back(i);
        }
    }
    if(ans.size() == 0){
        cout << "INVALID RANGE" << endl;
    }
    else{
        for(auto i : ans){
            cout << i << " ";
        }
    }
}