#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


// Function to remove all spaces from a given string
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int main() {

    string initialInput;
    string validString;

    //Gather user input
    getline(std::cin, initialInput);

    //First Remove spaces from string
    initialInput = removeSpaces(initialInput);

    //Strip tags
    initialInput.erase(remove_if(initialInput.begin(), initialInput.end(), [](char c) { return ispunct(c); } ), initialInput.end());

    //Transform string to uppercase
    transform(initialInput.begin(), initialInput.end(), initialInput.begin(), ::toupper);

    //Check if palindrome


    cout << initialInput << endl;
    return 0;
}
