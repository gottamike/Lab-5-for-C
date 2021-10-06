#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// this is my second error handling function
namespace secondError {
	void error(){
		throw runtime_error("Missing command line argument!");
	}
}

// calling my functions
string thousands(vector<int> myVector, int size);
string hundreds(vector<int> myVector, int size);
string tenths(vector<int> myVector, int size);
string singles(vector<int> myVector, int size);
void buildString(string thousands, string hundreds, string tens, string single);


int main(int argc, char *argv[]){
	// exception handling
	if (argc != 2){
		secondError::error();
	}
	

	//converting my character string command line argument to an int
	int myNumber = atoi(argv[1]);
	
	//creating a vector of integers
	vector<int> myVector;

	// making some strings for future use
	string thousandPlace;
	string hundredPlace;
	string tensPlace;
	string singlePlace;

	// breaking my command line into digits and pushing those digits to the vector
	while (myNumber > 0){
		int digit = myNumber%10;
		myNumber /= 10;
		myVector.push_back(digit);
	}

	// I need to use this because it is being pushed backwards in the while loop
	reverse(myVector.begin(), myVector.end());

	
	cout << "Number "; 
	// for some reason the requirements said to print out the numbers in main, so I am doing just that
	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i];
		
	}

	cout << " is written as ";

	// depending on how big of a number I input I want my function calls to act a little differently
	if (myVector.size() == 4){
		thousandPlace = thousands(myVector, 4);
	        hundredPlace = hundreds(myVector, 4);
	        tensPlace = tenths(myVector, 4);
		singlePlace = singles(myVector, 4);
	}

	if (myVector.size() == 3){
		hundredPlace = hundreds(myVector, 3);
                tensPlace = tenths(myVector, 3);
                singlePlace = singles(myVector, 3);
	}

	if (myVector.size() == 2){
                tensPlace = tenths(myVector, 2);
                singlePlace = singles(myVector, 2);
	}

	if (myVector.size() == 1){
                singlePlace = singles(myVector, 1);
	}

	// this function builds my string and prints it out
	buildString(thousandPlace, hundredPlace, tensPlace, singlePlace);

	return 0;

}

