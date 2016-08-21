/*
 * File: extras.cpp
 * --------------------------
 * Name: Arshad Khan
 *
 * printBinary - prints all binary nos of digits given by user
 * printBinary - prints all decimal nos of digits given by user
 */

#include <iostream>
#include <string>
#include "console.h"
#include "strlib.h"
#include "simpio.h"

using namespace std;

void printBinary(int digits, string prefix = "");
void printDecimal(int digits, string prefix = "");

int main() {
    printBinary(getInteger("Enter the no of digits upto which you want a list of binary nos: "));
    cout<< endl;
    cout<< endl;
    printDecimal(getInteger("Enter the no of digits upto which you want a list of decimal nos: "));
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

