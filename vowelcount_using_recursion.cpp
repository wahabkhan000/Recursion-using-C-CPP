#include <iostream>

int vowelCheck(const std::string &input,int end) {

    if (end == -1) {
        return 0;
    }

    return (input[end] != 'a' && input[end] != 'e' && input[end] != 'i' && input[end] != 'o' && input[end] != 'u') ? vowelCheck(input,end-1) : 1+vowelCheck(input,end-1);

}
int main() {
    std::string input;
    std::cin>>input;
    std::cout<<vowelCheck(input,input.length()-1);
}
