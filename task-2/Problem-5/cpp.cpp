#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Implement insertion sort, take it a step further and explain briefly...
 *  the sorting mechanism, mention time and space complexity, and whether it's a stable sorting algorithm or not. 
 *  (surely you must define what a stable sorting algorithm is first :p )
 */
void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int rand(int a, int b){
    return a + rand() % (b - a + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    srand(time(NULL));
    
    int n = 20;
    int arr[n]{};
    for(int i=0; i<n; i++){
        arr[i] = rand(1,1000);
    }

    cout << "Array Before Sorting:\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " \n"[i == n-1];
    }

    insertionSort(arr, n);

    cout << "Array After Sotring:\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " \n"[i == n-1];
    }

}