#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int i=1; //i=row

     while(i<=n){
        int j=1;  //j = coloumn
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl; // for enter
        i=i+1;
     }
}