// include header files
#include <iostream>
#include <string>
using namespace std;

//main function
int main(){

//define and initialize variables
      
        int x;
        int **a;
        int **b;
        int **c;

        cout<<"===================================================\n";
        cout<<"a program for multiplication of two square Matrices\n";
        cout<<"===================================================\n";

//user input for matrix dimension

        cout<<"enter the dimension of the square matrix : ";
        cin>>x;

//defining and creating 2D matrices

//matrix A
        a = new int*[x];
        for(int i=0;i<x;i++){
            a[i]=new int[x];
        }
//matrix B
        b = new int*[x];
        for(int i=0;i<x;i++){
            b[i]=new int[x];
        }
//matrix C
        c = new int*[x];
        for(int i=0;i<x;i++){
            c[i]=new int[x];
        }

//user input for matrix element values
//matrix A

        cout<<"Matrix 1 : \n";

        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
            cout<<"A("<<i+1<<","<<j+1<<") = ";
            cin>>a[i][j];
            
            }
        }
//matrix B  
        cout<<"Matrix 2 : \n";

        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
            cout<<"B("<<i+1<<","<<j+1<<") = ";
            cin>>b[i][j];
            
            }
        }
//result matrix C = A*B

//initialize elements of C to be zero
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
            
            c[i][j]=0;
            
            }
        }
// matrix multiplication
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                for(int k=0;k<x;k++){
                     c[i][j]=c[i][j]+a[i][k]*b[k][j];
            
                }
            }
        }
//displaying result

        cout<<"The resulting matrix C is :\n";
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
            cout<<c[i][j]<<" ";
            
            
            }
            cout<<"\n";
        }
}