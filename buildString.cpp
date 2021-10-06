#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
// function that takes in my int converted strings
void buildString(string thousands, string hundreds, string tens, string single){

        vector<string> myString;
	// adds them to myString vector
        myString.push_back(thousands + " ");
        myString.push_back(hundreds + " ");
        myString.push_back(tens + " ");
        myString.push_back(single + " ");

	// prints them out using a for loop
        for (int i = 0; i < 4; i++){
                cout << myString[i];
        }
	cout << endl;

}
