#include <stdio.h>

void recursive_function(char *arr,int i) {
    if (arr[i] == '\0') {
        return ;
    }
    printf("%c ",arr[i]);
    recursive_function(arr,i+1);
}

int main() {
    int count = 0;
    scanf("%d",&count);
    for (int i = 0; i < count; i++) {
        char arr[1000000];
        scanf("%s",arr);
        recursive_function(arr,0);
        printf("\n");
    }
}
