/*
 * File: Combinations.cpp
 * ----------------------
 * Name: Arshad Khan
 *
 * Recursive implementation of C(n,k)
 */

#include <iostream>
#include "console.h"
#include "simpio.h"
using namespace std;

int combination(int n, int k);
void printPascalTriangle(int rows);

int main() {
    while(true){
        int n = getInteger("Enter 'n': ");
        int k = getInteger("Enter 'k': ");
        if (n < k) {
            cout << "Enter 'k' value less than n ..." << endl;
            continue;
        }
        cout << "C(n, k) => " << combination(n, k) << endl;
        if( !getYesOrNo("Do you want to continue - 'yes' or 'no' ?") )
            break;
    }
    printPascalTriangle(getInteger("How many rows of pascal triangle do you want to get printed ?"));
    return 0;
}

int combination(int n, int k) {
    cout << n << " " << k << endl;
    if(n == k || k == 0)
        return 1;
    else
        return combination(n - 1, k - 1) + combination(n - 1, k);
}

void printPascalTriangle(int rows) {
    cout << "Here " << (rows == 1 ? "is the " : "are the ") << rows << " of Pascal triangle." << endl;

}
