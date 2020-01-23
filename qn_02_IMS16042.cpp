// include the header files

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;


int main(){

// declaration of variables    

    double y1;
    double x2;
    double y2;
    double x1;
    double result;

    cout<<"=======================================================================\n";
    cout<<"a program for calculating the distance between two points in a 2D plane\n";
    cout<<"=======================================================================\n";

// collecting user input

    cout<< "enter the coordinates of the two points:\n";
    cout<< "For point 1 : \n";
    cout<<"Input x1:";
    cin >> x1;
    cout<<"Input y1:";
    cin >> y1;
    cout<<"Input x2:";
    cin >> x2;
    cout<<"Input y2:";
    cin >> y2;

// calculating distance between two points

    result = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

// displaying the result

    cout<<"Distance between the said points:"<<result<<endl;

}