#include <cstring>

int main() {
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    delete[] buffer;

    char** ptr = &buffer;
}