/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: Arshad Khan
 *
 * This file is the starter project for the coin-flipping problem.
 *
 * This program simulates flipping a coin repeatedly and continues until three
 * consecutive heads are tossed. At that point, it displays the total
 * number of coin flips that were made.
 */

#include <iostream>
#include <string>
#include "console.h"
#include "random.h"
#include "simpio.h"
using namespace std;

int flipCoin();
//int flipCoinRecursively(int cheads = 0,  int flips = 0);
string getFlipResult();

int flipCoinRecursively(int cheads = 0, int flips = 0) {
    if(cheads != 3) {
        // flipping of coin, therefore 'flips' variable must be incremented
        string result = getFlipResult();
        flips++;
        cout << result << endl;
        if(result == "Heads"){
            // since result is heads so cheads must be incremented
            cheads++;
            return flipCoinRecursively(cheads, flips);
        }
        else
            return flipCoinRecursively(0, flips);
    }
    else
        return flips;
}

int main() {
   int flips = flipCoin();
   cout << "It tooks " << flips << " flips to get 3 consecutive heads." << endl;
   return 0;
}

int flipCoin() {
    int flips = 0, consecHeads = 0;

    while(consecHeads < 3) {
        string result = getFlipResult();
        cout << result << endl;

        if(result == "Heads")
            consecHeads++;
        else
            consecHeads = 0;

        flips++;
    }
    return flips;
}



string getFlipResult(){
    if(randomBool())
        return "Heads";
    else
        return "Tails";
}
