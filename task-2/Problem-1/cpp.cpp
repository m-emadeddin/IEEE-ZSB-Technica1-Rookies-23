#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Write a ???? program that randomly generates a 3-digit number. 
 *  Ask the user to guess a 3-digit number. For every digit that the user guessed correctly in the correct place,
 *  they have a "hit". For every digit the user guessed correctly in the wrong place is a "miss".
 *  Every time the user makes a guess, tell them how many hits and misses they have. 
 *  Once the user guesses the correct number, the game is over. print the number of attempts they needed to guess the number.
 */

int rand(int a, int b){
    return a + rand() % (b - a + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    srand((time(NULL)));
    
    int random = rand(100,999);
    
    char const* randomArray = to_string(random).c_str();

    int cnt = 0;
    int userGuess = 0;
    cout << randomArray << endl;
    cout << "Enter a 3-digit number: ";
    cout.flush();
    while(true){
        cnt++;
        bool vis[3]{};
        cin >> userGuess;
        while(userGuess>999 || userGuess<100){
            cout << "Re-enter your input in the required format -a7snlk-, please: ";
            cout.flush();
            cin >> userGuess;
        }
        char const* userArray = to_string(userGuess).c_str();
        int hits = 0, misses = 0;
        for(int i=0; i<3; i++){
            if(userArray[i] == randomArray[i]){
                hits++; vis[i]=true;
            }
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(userArray[i] == randomArray[j] && !vis[j]){
                    misses++;
                    vis[j]=true;
                }
            }
        }
        if(hits==3) break;
        cout << "Your Guess Has: " << hits << (hits == 1 ? " hit ":" hits ") << "and " << misses << (misses == 1 ? " miss.":" misses.") << endl;
        cout << "Try again. Please Enter a 3-digit number: ";
        cout.flush();
    }
    cout << "Good Job! You guessed it correctly for only " << cnt << " Guesses." << endl;

}







