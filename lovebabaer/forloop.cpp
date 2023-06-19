#include<iostream>
using namespace std;
int main(){
    //printing value from 1 to n
    // int n;
    // cout<<"enter a value"<<endl;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }

    //SUM of Numbers
    // int n;
    // cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     //sum=sum+i;
    //     sum+=i;
    // }
    // cout<<sum<<endl;

    //fibonacci
    // int n=10;

    // int a=0;
    // int b=1;

    // for(int i=1;i<=10;i++){
    //     int nextnum=a+b;
    //     cout<<nextnum<<endl;
    //     a=b;
    //     b=nextnum;
    // }

    //prime number
    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            
            isprime=0;
            break;
        }
    }

        if(isprime==0){
            cout<<"not a prime"<<endl;
        }
        else{
            cout<<"is a prime"<<endl;
        }

        }
    

