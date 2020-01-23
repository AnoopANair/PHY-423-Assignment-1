// include header files
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// main function

int main(){

// define variables

	double x;
	double result = 0.0;

	cout<<"============================================================================================\n";
	cout<<"program to display the n terms of harmonic series 1 + 1/2 + 1/3 + . . . + 1/n and their sum.\n";
	cout<<"============================================================================================\n";

//collecting user input

	cout<<"Input the number of terms : ";
	cin >> x;

// display the result

	for(int i=1; i<=x ;i++){
		if(i<x){
			cout<<"1/"<<i<<"+";
		       }
		else{
			cout<<"1/"<<i<<" .\n";
                    }

		result = result + 1.0/i;
		}
		cout<<"Sum of Series upto "<<x <<" terms : "<<result<<"\n";
	}
