#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int start=0;
    int end=size-1;

    int mid= start+(end-start/2);

    while(start<=end){
    
    if(arr[mid]==key){
        return mid;
    }
    
    //go to right wala part
    if(key>arr[mid]){
        start=mid+1;
    }
    else{//key is less than arr[i ]
        end =mid-1;
    }
    mid= start+(end-start/2);
    
}
return -1;
}



int main(){
    //element should be in monotonic function
    //finnd middle element
    //xompare mid/key
    //if equal return
    //if not select the part
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index=binarySearch(even,6,4);

    cout<<"Index of 4 "<< index<<endl;


    return 0;

}