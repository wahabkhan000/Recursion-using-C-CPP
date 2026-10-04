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

// output_function
void output(int *arr,int index) {

    // base_condition
    if (index == 0) {
        std::cout<<arr[index]<<" ";
        return;
    }

    // after_callback_output_the_value
    std::cout<<arr[index]<<" ";
    // function_calling_itself
    output(arr,index-1);


}
int main() {
    int size = 5;
    int arr[size];

    input(arr,size-1);

    output(arr,size-1);
}

