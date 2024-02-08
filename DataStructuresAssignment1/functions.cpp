#include "functions.h"

void Array::push_back(int num) {

    try {

        if (arraySize == MAX_ARRAY_SIZE) {
            throw ("Array is to full to contuine.");
        }

        array[arraySize] = num;
        arraySize++;

        cout << endl << num << " was add at index " << arraySize - 1 << endl << endl;
    }

    catch (string str) {
        cout << str << endl;
    }
}


void Array::setArray() {

    ifstream inFile;
    inFile.open("A1input.txt");
    if (inFile.is_open()) {
        cout << "inFile is open" << endl;
    }

    string str;
    string tempStr;

    while (getline(inFile, str)) {

        stringstream inSS(str);

        while (getline(inSS, tempStr, ' ')) {

            push_back(stoi(tempStr));
        }
    }
}


int Array::findInt(int num) {

    for (int i = 0; i < arraySize; i++) {
        if (array[i] == num) {
            return i;
        }
    }

    return -1;
}


void Array::setIndex(int index, int num) {

    try {
        if (index < 0 || index > arraySize - 1) {
            throw ("Index out of bounds");
        }

        int oldData = array[index];
        array[index] = num;

        cout << endl << "The value at " << index << " is " << oldData << endl;
        cout << endl << "The new value at " << index << " is " << num << endl << endl;
    }

    catch (string str) {
        cout << str << endl;
    }


}


void Array::removeIndex(int index) {

    try {

        if (index < 0 || index > arraySize - 1) {
            throw ("Index out of bounds");
        }

        int oldData = array[index];
        array[index] = 0;

        cout << endl << oldData << " at index " << index << " was removed" << endl << endl;
    }

    catch (string str) {
        cout << str << endl;
    }
}


void Array::display() {

    cout << endl;

    for (int i = 0; i < arraySize; i++) {
    
        cout << array[i] << ", ";
    }

    cout << endl << endl;
}

