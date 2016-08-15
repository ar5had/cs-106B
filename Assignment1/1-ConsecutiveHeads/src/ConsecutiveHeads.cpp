/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the coin-flipping problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include <string>
#include "console.h"
#include "random.h"
using namespace std;

string flipCoin();

int main() {
   int flips = 0, consecHeads = 0;

   while(consecHeads < 3) {
       string result = flipCoin();
       cout << result << endl;

       if(result == "Heads")
           consecHeads++;
       else
           consecHeads = 0;

       flips++;
   }

   cout << "It tooks " << flips << " flips to get 3 consecutive heads." << endl;
   return 0;
}

string flipCoin(){
    if(randomBool())
        return "Heads";
    else
        return "Tails";
}
