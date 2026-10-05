#include <iostream>

void reverseString(std::string &input,int start,int end) {
    if (start >= end) {
        return;
    }

    std::swap(input[start],input[end]);
    reverseString(input,start+1,end-1);
}

int main() {
    std::string input;
    std::cin>>input;
    reverseString(input,0,input.length()-1);
    std::cout<<input;
}
