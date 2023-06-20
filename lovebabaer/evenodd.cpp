#include<iostream>
using namespace std;
bool isEven(int a){
    if(a%2==0){
        return 1;

    }
    return 0;
}
int main(){
   int num ;
   cin>>num;

  if(isEven(num)){
    cout<<"is even"<<endl;
  }
  else{
    cout<<"is odd"<<endl;
  }
}