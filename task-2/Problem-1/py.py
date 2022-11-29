"""
 *  Write a ???? program that randomly generates a 3-digit number. 
 *  Ask the user to guess a 3-digit number. For every digit that the user guessed correctly in the correct place,
 *  they have a "hit". For every digit the user guessed correctly in the wrong place is a "miss".
 *  Every time the user makes a guess, tell them how many hits and misses they have. 
 *  Once the user guesses the correct number, the game is over. print the number of attempts they needed to guess the number.
"""
import random

rnd = random.randint(100,999)
print(rnd)
print("Enter a 3-digit number: ", end="")
cnt = 0
while True:
    cnt += 1
    vis = [False]*3
    userGuess = int(input())
    while(userGuess>999 or userGuess<100): 
        print("Re-enter your input in the required format -a7snlk bs bl python-, please: ", end="")
        userGuess = int(input())
    hits = 0; misses = 0
    for i in range(3):
        if(str(userGuess)[i] == str(rnd)[i]):
            hits +=1
            vis[i] = True
    
    for i in range(3):
        for j in range(3):
            if(str(userGuess)[i] == str(rnd)[j] and not vis[j]):
                misses += 1
                vis[j] =  True
    
    if hits == 3 : break
    strhit = " hit " if hits==1 else " hits "
    strmiss = " miss " if hits==1 else " misses "
    print(f"Your Guess Has: {hits} {strhit} and {misses} {strmiss}.")
    print("Try again. Please Enter a 3-digit number: ")

print(f"Good Job! You guessed it correctly for only {cnt} Guesses.")