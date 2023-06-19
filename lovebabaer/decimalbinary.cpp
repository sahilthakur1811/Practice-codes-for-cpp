#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //decimal to bimary
    // n divide by 2
    // store remander
    // repeat above two steps until n==0 (n means qutionent)
    //reverse the number
    //digit*10+ans;
    //digit*10^1+prev ans (reverse)
    //1,2,3-->123
    //ans=(ans*10)+digit
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans=(bit * pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans<<endl;
    // int n;
    // cin>>n;
    // int i=0;
    // int binary[100];
    // while(n!=0){
    //     binary[i]=n%2;
    //     n=n/2;
    //     i++;
    // }
    // for(int j=i-1;j>=0;j--){
    //     cout<<binary[j];
    // }

    //bianrytodecimal
    // int n;
    // cin>>n;
    // int i=0, ans=0;
    // while(n!=0){
    //     int digit=n%10;
    //     if(digit==1){
    //         ans=ans+pow(2,i);
    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans;

    int n;
    cin>>n;
    int binary[100];
    int i=0;
    while(n!=0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }




}