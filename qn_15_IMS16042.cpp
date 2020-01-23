//include header files

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

//main function
int main(){

//define variables
    int *b;
    int x1;
    int counter;

    cout<<"=============================================================\n";
    cout<<"a program to count the frequency of each element of an array.\n";
    cout<<"=============================================================\n";

    cout<<"Input the number of elements to be stored in the array : ";
    cin>>x1;

    
  
    b= new int[x1];

//enter the element values

    cout<<"Input "<<x1<<" elements in the array : \n";


    for(int i=0; i<x1;i++){
        cout<<"element - "<<i<<" :";
        cin>>b[i];
    }

    cout<<"The frequency of all elements of an array : \n";

//frequency determining algorithm

    for(int i=0;i<x1;i++){
        if(b[i]!=0){
        counter=1;
        for(int j=0;j<x1;j++){
            if((b[i]==b[j])&&(i!=j)){
                counter =counter+1;
                b[j]=0;
            }
            

            }
        cout<<" "<<b[i]<<" occurs "<<counter<<" times.\n";
        }
    }
    

}