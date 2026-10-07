#include <stdio.h>

void recursive_function(int number) {
    if (number == 0) {
        return;
    }
    
    recursive_function(number/2);
    printf("%d",number%2);
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
