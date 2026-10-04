#include <iostream>

bool palindrome(const std::string &input,int start,int end) {

    if (start >= end) {
        return true;
    }
    if (input[start] != input[end]) {
        return false;
    }

    return (palindrome(input,start+1,end-1) == true) ? true:false;

}
int main() {
    std::string input;
    std::cin>>input;
    std::cout<<palindrome(input,0,input.length()-1);
}
