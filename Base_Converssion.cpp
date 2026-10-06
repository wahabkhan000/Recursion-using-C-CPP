#include <stdio.h>

void recursive_function(int number) {
    if (number == 0) {
        return;
    }
    int rem = number%2;
    number/=2;
    recursive_function(number);
    printf("%d",rem);
}

int main() {
    int count = 0;
    scanf("%d",&count);
    for (int i = 0; i < count; i++) {
        int input;
        scanf("%d",&input);
        recursive_function(input);
        printf("\n");
    }
}
