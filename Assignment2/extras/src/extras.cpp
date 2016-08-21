/*
 * File: extras.cpp
 * --------------------------
 * Name: Arshad Khan
 *
 * Recursive Backtracking problems:
 *
 * printBinary - prints all binary nos of x digits. No of digits is given by user
 * printBinary - prints all decimal nos of x digits. No of digits is given by user
 * diceRoll - prints all the possible outcomes when n no of dices are rolled.
 * diceSumRoll - prints all the possible outcomes whose sum is equal to desired sum when
 *               n no of dices are rolled.
 *
 */

#include <iostream>
#include <string>
#include "console.h"
#include "strlib.h"
#include "simpio.h"
#include "vector.h"

using namespace std;

void printBinary(int digits, string prefix = "");
void printDecimal(int digits, string prefix = "");
void diceRoll(int dices);
void diceRollHelper(int dices, Vector<int>& chosen);
void diceSumRoll(int dices, int sum);
void diceSumRollBadHelper(int dices, int sum, Vector<int>& chosen);
int sumOfElems(Vector<int>& vect);

int main() {
    printBinary(getInteger("Enter the no of digits upto which you want a list of binary nos: "));
    cout << endl;
    cout << endl;
    printDecimal(getInteger("Enter the no of digits upto which you want a list of decimal nos: "));
    cout << endl;
    cout << endl;
    diceRoll(getInteger("Enter the no of dices: "));
    cout << endl;
    cout << endl;
    diceSumRoll(getInteger("Enter the no of dices: "), getInteger("Enter the sum: "));
    return 0;
}

void printBinary(int digits, string prefix) {
    if (digits == 0) {
        cout << prefix << endl;
    } else {
        printBinary(digits - 1, prefix + "0");
        printBinary(digits - 1, prefix + "1");
    }
}

void printDecimal(int digits, string prefix) {
    if (digits == 0) {
        cout << prefix << endl;
    } else {
        for (int i = 0; i < 10; i++) {
            printDecimal(digits - 1, prefix  + integerToString(i));
        }
    }
}

void diceRoll(int dices) {
    // using helper when we dont want to change signature of
    // original function.
    Vector<int> chosen;
    diceRollHelper(dices, chosen);
}

void diceRollHelper(int dices, Vector<int>& chosen) {
    if (dices == 0)
        cout << chosen << endl;
    else {
        for (int i = 1; i < 7; i++) {
            chosen.add(i);
            diceRollHelper(dices - 1, chosen);
            chosen.remove(chosen.size() - 1);
        }
    }
}

void diceSumRoll(int dices, int sum) {
    // using helper when we dont want to change signature of
    // original function.
    Vector<int> chosen;
    diceSumRollBadHelper(dices, sum, chosen);
}


// 'bad' because method to get result is very inefficient.
void diceSumRollBadHelper(int dices, int sum, Vector<int>& chosen) {
    if (dices == 0) {
        if (sumOfElems(chosen) == sum)
            cout << chosen << endl;
    } else {
        for (int i = 1; i < 7; i++) {
            chosen.add(i);
            diceSumRollBadHelper(dices - 1, sum, chosen);
            chosen.remove(chosen.size() - 1);
        }
    }
}

int sumOfElems(Vector<int>& vect) {
    int total = 0;
    for(int elem: vect)
        total += elem;
    return total;
}
