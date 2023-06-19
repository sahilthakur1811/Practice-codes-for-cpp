#include<iostream>
using namespace std;
int main(){
    //And & 
    //or |
    //0 0-->0  0 1---->1 11--1  10---1
    //Not~ 0--1  1--0  a=2(0000.......010)--->(111.....101)
    // int a=2;
    // cout<<~a; //output -3

    //xor^  00-0 11-0 10--1  01--1
    // int a=4;
    // int b=6;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<~a<<endl;

    //left shift
    //5<<1 5 ko ek baar left shift krdo
    int a=3;
    cout<<(3<<2)<<endl;
    cout<<(17>>2)<<endl;

}