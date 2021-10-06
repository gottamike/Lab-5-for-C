#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function that determines what my hundreds digit is
string hundreds(vector<int> myVector, int size){

        string hundreds;
        int vectorPlaceHolder;

	// this switch determines what position of the vector I need to be looking at
        switch (size){
                case 4:
                vectorPlaceHolder = myVector[1];
                break;
                case 3:
                vectorPlaceHolder = myVector[0];
                break;
        }
	// all the different situations I can have with the hundredth digit
        switch (vectorPlaceHolder) {
                case 1:
                hundreds = "one hundred";
                break;
                case 2:
                hundreds = "two hundred";
                break;
                case 3:
                hundreds = "three hundred";
                break;
                case 4:
                hundreds = "four hundred";
                break;
                case 5:
                hundreds = "five hundred";
                break;
                case 6:
                hundreds = "six hundred";
                break;
                case 7:
                hundreds = "seven hundred";
                break;
                case 8:
                hundreds = "eight hundred";
                break;
                case 9:
                hundreds = "nine hundred";
                break;

        }
	// return the string
        return hundreds;


}
