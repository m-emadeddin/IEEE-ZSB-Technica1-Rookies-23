#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Write a program that calculates the area and the perimeter of a rectangle. 
 *  The program asks the user for two numbers, each number on a separate line. 
 *  One of the numbers represents the length and the other represents the width. 
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll height,width;
    cin >> height >> width;
    ll area = height * width;
    ll perimeter = 2 * ( height + width );
    cout << area << endl << perimeter << endl;

}







