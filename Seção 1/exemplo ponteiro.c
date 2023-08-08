#include <stdio.h>

int main(){
    int age;
    int *address = &age;
    *address = 37;
    printf("%u", *address);
    printf("%u", &address);

    return 0;
}