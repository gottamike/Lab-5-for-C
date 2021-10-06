#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
// function for taking single digits
string singles(vector<int> myVector, int size){

        string singles;
        int vectorPlaceHolder;
	// this switch determines what position of the vector I need to be looking at 
        switch (size){
                case 4:
                vectorPlaceHolder = myVector[3];
                break;
                case 3:
                vectorPlaceHolder = myVector[2];
                break;
                case 2:
                vectorPlaceHolder = myVector[1];
                break;
                case 1:
                vectorPlaceHolder = myVector[0];
                break;
        }

	// these are all the cases for what the digit can be
        switch (vectorPlaceHolder) {
                case 1:
                singles = "one";
                break;
                case 2:
                singles = "two";
                break;
                case 3:
                singles = "three";
                break;
                case 4:
                singles = "four";
                break;
                case 5:
                singles = "five";
                break;
                case 6:
                singles = "six";
                break;
                case 7:
                singles = "seven";
                break;
                case 8:
                singles = "eight";
                break;
                case 9:
                singles = "nine";
		break;

        }
	// return the digit when finished
        return singles;


}
