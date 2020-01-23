//include header files

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

//main function
int main(){

//define variables
    int *a;
    int *c;
    int x;
    int counter;

    cout<<"=======================================================\n";
    cout<<"a program to sort elements of array in ascending order.\n";
    cout<<"=======================================================\n";

    cout<<"Input the size of array : " ;
    cin>>x;
    
    a= new int[x];
    c= new int[x];
    cout<<"Input "<<x<<" elements in the array : \n";


    for(int i=0; i<x;i++){
        cout<<"element - "<<i<<" :";
        cin>>a[i];
    }

// sorting algorithm
        
    for(int i=0;i<x;i++){
            counter=0;
            for(int j=0;j<x;j++){
                if(a[i]>a[j]){
                    counter=counter+1;
                }
            }
            c[counter]=a[i];
    }

//displaying sorted array

    cout <<"Elements of array in sorted ascending order: \n";
    for(int i=0;i<x;i++){
    cout<<" "<<c[i]<<" ";
    }
    cout<<"\n";

}