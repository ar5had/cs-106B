/*
 * File: Obenglobish.java
 * ----------------------
 * Name: Arshad Khan
 *
 * This program that takes an English word and returns its Obenglobish equivalent,
 * using the translation rule given below.
 * Rule - add 'ob' before every vowel in word given by user.
 */

#include <iostream>
#include <string>
#include "console.h"
#include "simpio.h"
#include "strlib.h"

using namespace std;
/* Main program */

string obenglobish(string word);

int main(){

    while(true) {
        string word = getLine("Enter the word...");
        if(word == "")
            break;
        else
            cout << word << "=>" << obenglobish(word) << endl;
    }

    return 0;
}

string obenglobish(string word) {

    return word;
}
