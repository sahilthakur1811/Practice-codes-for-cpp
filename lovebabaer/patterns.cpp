#include<iostream>
using namespace std;
int main(){

    //prime number
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"not prime for"<< i<<endl;
//     }
//     else{
//         cout<<"prime for"<<i<<endl;
//     }
//     i=i+1;
    

// }

//pattern1
//  ****
//  ****
//  ****
//  ****
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1; //coulmns (j)
//     while(j<=n){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }

//pattern2
// 111
// 222
// 333
// int n ;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

//patterns3 1234 1234 1234 1234
//n-j+1 to reverse 4321
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

//pattern 4
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

//pattern4 123 456 789

// int n;
// cin>>n;
// int count=1;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<count<<" ";
//         count=count+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

//patterns * ** *** **** *****
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

//pattern 1 22 333 4444
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

//pattern6 1 23 456
// int n;
// cin>>n;
// int i=1;
// int count=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<count;
//         count=count+1;
//         j=j+1;

//     }
//     cout<<endl;
//     i=i+1;
// }

//patterns 1 23 345 4567
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     int value=i;
//     while(j<=i){
//         cout<<value;
//         value=value+1;
//         j=j+1;

//     }
//     cout<<endl;
//     i=i+1;
// }

//pattern 1 21 321 4321 i-j+1
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i-j+1;
        j=j+1;

    }
    cout<<endl;
    i=i+1;
}


}