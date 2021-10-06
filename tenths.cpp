#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// my first error function is stored here because this is where that error can only occur
namespace firstError {
        void error(){
                throw runtime_error("ERROR: Second digit cannot be 1");
        }
}

// function for the tenths digit place
string tenths(vector<int> myVector, int size){

	string tenths;
        int vectorPlaceHolder;
	// this switch determines what position of the vector I need to be looking at
        switch (size){
                case 4:
                vectorPlaceHolder = myVector[2];
                break;
                case 3:
                vectorPlaceHolder = myVector[1];
                break;
                case 2:
                vectorPlaceHolder = myVector[0];
                break;
        }
	// all the situations I can have with tenth digit places
        switch (vectorPlaceHolder) {
                case 1:
		// throws an error because second digit cannot be 1
                firstError::error();
                break;
                case 2:
                tenths = "twenty";
                break;
                case 3:
                tenths = "thirty";
                break;
                case 4:
                tenths = "fourty";
                break;
                case 5:
                tenths = "fifty";
                break;
                case 6:
                tenths = "sixty";
                break;
                case 7:
                tenths = "seventy";
                break;
                case 8:
                tenths = "eighty";
                break;
                case 9:
                tenths = "ninety";
                break;

        }
	// return my string
        return tenths;


}
