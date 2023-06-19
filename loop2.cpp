#include<iostream>
using namespace std;
// prime or not
int main(){

int n;
cin>>n;
int i=2;
// i<n is used as if n=i then it will be completely divide and get 0
while (i<n){
    if(n%i==0){
        cout<<"N is not prime "<< i <<endl;
    }
    else{
    cout<<"N is prime "<< i <<endl;
   }
    i=i+1;
    
}
   

}