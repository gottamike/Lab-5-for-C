#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function that determines what my thousands digit can be
string thousands(vector<int> myVector, int size){

        string thousand;
        int vectorPlaceHolder;
	
	// this switch determines what position of the array I need to be looking at
        switch (size){
                case 4:
                vectorPlaceHolder = myVector[0];
                break;
        }
	// all the situations my thousands digit can be
        switch (vectorPlaceHolder) {
                case 1:
                thousand = "one thousand";
                break;
                case 2:
                thousand = "two thousand";
                break;
                case 3:
                thousand = "three thousand";
                break;
                case 4:
                thousand = "four thousand";
                break;
                case 5:
                thousand = "five thousand";
                break;
                case 6:
                thousand = "six thousand";
                break;
                case 7:
                thousand = "seven thousand";
                break;
                case 8:
                thousand = "eight thousand";
                break;
                case 9:
                thousand = "nine thousand";
                break;

        }
	// return the string
        return thousand;


}

