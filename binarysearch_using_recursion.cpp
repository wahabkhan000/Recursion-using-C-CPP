#include <iostream>
bool search(const int* arr,int start,int end,int target){
    if(start>end) return false;

    int mid = (start + end)/2;

    if(arr[mid] == target) return true;
    else if(arr[mid] < target) return search(arr,mid+1,end,target);
    else return search(arr,start,mid-1,target);
}
int main(){
    const int size = 10;
    int arr[size]{1,2,3,4,5,6,7,8,9,10};
    std::cout<<search(arr,0,size-1,11);
}
