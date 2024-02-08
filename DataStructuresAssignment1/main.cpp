#include "functions.h"


int main() {
    
    Array a;
    char charInput;
    int intInput;
    int functionReturn;
    bool done = false;

    a.setArray();

    cout << "Welcome to the array test" << endl;

    while(!done){

        cout << "F - Find an integer in the array" << endl
            << "C - Change the value of an integer in the array at a certain index" << endl
            << "A - Add an integer to the end of the array" << endl
            << "R - Remove an integer in the array" << endl
            << "D - Display the current array" << endl
            << "Q - Quit the program" << endl;
        cin >> charInput;
        cin.clear();
        cin.ignore(100, '\n');

        charInput = toupper(charInput);

        if (charInput == 'F') {

            cout << endl << "What integer would you like to check for:" << endl;
            cin >> intInput;
            cin.clear();
            cin.ignore(100, '\n');

            functionReturn = a.findInt(intInput);

            if (functionReturn == -1) {
                cout << endl << "Number does not exist in the array" << endl << endl;
            }

            else {
                cout << endl << intInput << " exists at the index " << functionReturn << endl << endl;
            }
        }

        else if (charInput == 'C') {

            int index = 0;

            cout << endl << "What is the index of the item you would like to change:" << endl;
            cin >> index;
            cin.clear();
            cin.ignore(100, '\n');

            cout << endl << "What number you would like to add:" << endl;
            cin >> intInput;
            cin.clear();
            cin.ignore(100, '\n');

            a.setIndex(index, intInput);
        }

        else if (charInput == 'A') {
            cout << endl << "What integer would you like to add to the array:" << endl;
            cin >> intInput;
            cin.clear();
            cin.ignore(100, '\n');

            a.push_back(intInput);
        }

        else if (charInput == 'R') {

            cout << endl << "What is the index of the integer you would like to remove:" << endl;
            cin >> intInput;
            cin.clear();
            cin.ignore(100, '\n');

            a.removeIndex(intInput);
        }

        else if (charInput == 'D') {
            
            a.display();
        }

        else if (charInput == 'Q') {

            done = true;
            cout << "Good bye!" << endl;
        }

    }
    
    return 0;
}
