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

// min_function
int min(int *arr,int index) {

    // base_condition
    if (index == 0) {
        return arr[index];
    }

    // storing_value_of_min_function
    int intermediate = min(arr,index-1);
    // obtaining_result_using_ternery_operator
    return (arr[index] <= intermediate) ? arr[index] : intermediate;


}
int main() {
    int size = 5;
    int arr[size];

    input(arr,size-1);

    std::cout<<min(arr,size-1);
}

