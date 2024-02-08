#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace::std;

const int MAX_ARRAY_SIZE = 150;

class Array {

private:
	int arraySize = 0;
	int array[MAX_ARRAY_SIZE];

public:
	//Default constructor
	Array() {};

	//Sets the array from the provided .txt file
	void setArray();

	//Returns index of provided int, unless the int isn't present
	int findInt(int num);

	//Changes the array at the provided index to the provided int, then prints the old int and the new int to console
	void setIndex(int index, int num);

	//Adds the provided int to the end of the array
	void push_back(int num);

	//Changes the int at the given index to 0
	void removeIndex(int index);

	//Displays the array
	void display();
};