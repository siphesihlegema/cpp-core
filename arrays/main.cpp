#include <iostream>
#define print(x) std::cout << x << " ";

int main() {
    int arr[5];
    int* ptr = arr;

    int count = (sizeof(arr) / sizeof(int));

    for(int i = 0; i < count; i++) {
        *(ptr + i) = i;
    }

    for(int i = 0; i < count; i++) {
        print(arr[i]);
    }

}