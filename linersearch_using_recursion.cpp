#include <iostream>
int find(const int* src,int len,int target){
    if(!src || len == -1) return -1;
    if(src[len] == target) return len;

    return find(src,len-1,target);
}
int main(){
    const int size = 10;
    int arr[size]{8,2,3,4,5,6,7,4,9};
    std::cout<<find(arr,size-1,8);
}
