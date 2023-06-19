// loops 
#include<iostream>
using namespace std;

int main(){

    //int a;
    //cin >> a;
    //cout << "value of n is: "<< n << endl;
    /*if (a>0){
        cout<< "A is positive"<< endl;
    }
    else{
        cout << "A is negative"<< endl;
    }*/

    //A is a greater
    
   /* int a,b;
   

    cout<<"Enter the value of a "<<endl;
    cin>>a;

    cout<<"Enter the value of b "<<endl;
    cin>>b;

    if (a>b){
        cout << "A is greater" << endl;
    }

    else{
        cout << "B is greater"<< endl;
    }
      */

    /*int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;*/

// if else
    /*if (a>0){
        cout<<"A is +ve"<< endl;
    }
    else {
        if (a<0){
            cout<<"A is -ve"<< endl;
        }
        else{
            cout<<"A is zero"<< endl;
        }
    }*/

 // if else-if

   /*  if(a>0){
        cout<<"A is +ve"<< endl;
     }
     else if(a<0){
        cout<<"A is -ve"<< endl;
     }

     else{
        cout<<"A is zero"<< endl;
     }
     */

    int n;
    cin>>n;

    int i=1;
    int sum=0;
    while (i<=n){
        sum = sum + i;
        i=i+1;
    }

    cout<<"value of sum :  "<< sum <<endl;

}
