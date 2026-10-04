#include <iostream>

// input_function
void input(int *arr,int size) {

    //base_condition
     if (size == 0) {
         std::cout<<"Enter value: ";
         std::cin>>arr[size];
         return;
     }

    // again_calling_function
    input(arr,size-1);

    // after_callback_function_return_input,_output
    std::cout<<"Enter value: ";
    std::cin>>arr[size];
}

// output_function
void output(int *arr,int size) {

    // base_condition
    if (size == 0) {
        std::cout<<arr[size]<<" ";
        return;
    }
    // function_calling_itself
    output(arr,size-1);

    // after_callback_output_the_value
    std::cout<<arr[size]<<" ";
}
int main() {
    int size = 5;
    int arr[size];

    input(arr,size);

    output(arr,size);
}

