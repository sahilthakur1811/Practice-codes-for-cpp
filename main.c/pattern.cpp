#include<iostream>
using namespace std;
//print
//123    n-j+1 when 321
//123               321
//123
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;
    }

}