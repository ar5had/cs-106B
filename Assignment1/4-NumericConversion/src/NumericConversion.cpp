/*
 * File: NumericConversion.cpp
 * ---------------------------
 * Name: Arshad Khan
 *
 * Implement intToString and stringToInt recursively.
 */

#include <iostream>
#include <string>
#include "console.h"
using namespace std;

/* Function prototypes */

string intToString(int n);
int stringToInt(string str);

/* Main program */

int main() {
    string numStr = getLine("String: Enter no...");
    int numInt = getInteger("Integer: Enter no...")
    string numIntStr = intToString(numInt);
    int numStrInt = stringToInt(numStr);
    return 0;
}

string intToString(int n) {
//    var digit = n % 10;
//    n = n / 10;
//    return string(digit)
}

int stringToInt(string str) {

}
