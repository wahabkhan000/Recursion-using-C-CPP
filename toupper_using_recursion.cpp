#include <iostream>

void toUpper(std::string &input,int end) {
    if (end == -1) {
        return;
    }

    if (input[end]>='a' && input[end]<='z') {
        input[end]-=32;
    }

    toUpper(input,end-1);
}

int main() {
    std::string input;
    std::cin>>input;
    toUpper(input,input.length()-1);
    std::cout<<input;
}
