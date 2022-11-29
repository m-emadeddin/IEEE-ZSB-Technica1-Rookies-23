#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Write a program that takes a sorted list as an input and removes the duplicates.
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    
    string str;
    getline(cin,str);
    cout << str[0] << " ";
    for(int i=2; i<str.size(); i+=2){
        if(str[i] != str[i-2]) cout << str[i] << " \n"[i == str.size()];
    }

}
