#include<iostream>
using namespace std;


int main()
{
    int number[15];
    cout<<"value at 15 index"<<number[14]<<endl;
    
    
    int third[15]={2,7};

    int n=15;
    cout << "printing the array" << endl;
    //print an array
    for(int i=0; i<n; i++){
        cout << third[i] <<" ";

    }

    //for making all zero

    int fourth[10]={0};
    n=10;
    cout << "printing the array" << endl;
    //print an array
    for(int i=0; i<n; i++){
        cout << fourth[i] <<" ";

    }

    return 0;
}
