//include header files

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

//main function
int main(){

//define variables and arrays
    int c[100],d[100];
    int x1;
    int counter;
    

    cout<<"==============================================================================\n";
    cout<<"a program to store n elements in an array and print the elements using pointer\n";
    cout<<"==============================================================================\n";

//user input
    cout<<"Input the number of elements to store in the array : ";
    cin>>x1;

   
    cout<<"Input "<<x1<<" number of elements in the array : \n";

//storing the elements using pointers
    for(int i=0;i<x1;i++){

        cout<<"element - "<<i<<" :";
        int *c1=c+i;
        cin >> *(c1);
    }
//printing elements using pointers

    for(int j=0;j<x1;j++){
  
        cout<<"element - "<<j<<" : "<< *(c+j)<<"\n";
    }
    

// sorting algorithm using pointers
        
    for(int i=0;i<x1;i++){
            counter=0;
            for(int j=0;j<x1;j++){
                if(*(c+i)>*(c+j)){
                    counter=counter+1;
                }
            }
            *(d+counter)=*(c+i);
    }

//displaying sorted array using pointers

    cout <<"Elements of array in sorted ascending order: \n";
    for(int i=0;i<x1;i++){
    cout<<" "<<*(d+i)<<" ";
    }
    cout<<"\n";

}