#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main() {

    string initialInput;
    string validString;

    //Gather user input
    cin >> initialInput;

    //Strip tags


    //Transform string to uppercase
    transform(initialInput.begin(), initialInput.end(), initialInput.begin(), ::toupper);



    cout << initialInput << endl;
    return 0;
}
