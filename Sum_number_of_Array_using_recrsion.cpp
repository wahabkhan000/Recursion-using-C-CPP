#include <iostream>

// input_function
void input(int *arr,int index) {

    //base_condition
     if (index == 0) {
         std::cout<<"Enter value: ";
         std::cin>>arr[index];
         return;
     }

    // again_calling_function
    input(arr,index-1);

    // after_callback_function_return_input,_output
    std::cout<<"Enter value: ";
    std::cin>>arr[index];
}

// sum_function
int numberSum(int *arr,int index) {

    // base_condition
    if (index == -1) {
        return 0;
    }

    // function_calling_itself
    return arr[index] + numberSum(arr,index-1);


}
int main() {
    int size = 5;
    int arr[size];

    input(arr,size-1);

    std::cout<<numberSum(arr,size-1);
}

