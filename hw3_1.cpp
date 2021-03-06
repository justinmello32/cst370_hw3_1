  
/*
 * Title: hw3_1.cpp
 * Abstract: This program reads user inputs and verify if it is a palidrome
             using a recursive function.
 * Author: Justin Mello
 * ID: 2002
 * Date: 03/21/2021
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


// Function to remove all spaces from a given string
string removeSpaces(string str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

bool isPalindrome(string str, int start, int end) {

    if(end > start) {
        if (str[start] != str[end]) {
            return false;
        } else
        return isPalindrome(str, start + 1, end - 1);
    }
    return true;
}

int main() {

    string initialInput;
    string validString;

    //Gather user input
    getline(cin, initialInput);

    //First Remove spaces from string
    initialInput = removeSpaces(initialInput);

    //Strip tags
    initialInput.erase(remove_if(initialInput.begin(), initialInput.end(), (int(*)(int))isalnum), initialInput.end());
    //Transform string to uppercase
    transform(initialInput.begin(), initialInput.end(), initialInput.begin(), ::toupper);

    //Check if palindrome
    if(isPalindrome(initialInput,0,initialInput.size() - 1))
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}
