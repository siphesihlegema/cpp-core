// ============================================================
// COMPILATION & LINKING — Quick Reference
// ============================================================
// Build pipeline:  Source (.cpp) → Preprocess → Compile → Object (.o) → Link → Executable
//
// --- COMMON g++ COMMANDS ---
//
// 1. Compile everything at once:
//    g++ main.cpp functions.cpp math_utils.cpp -o my_app
//
// 2. Compile to object files separately, then link:
//    g++ -c main.cpp      -o main.o
//    g++ -c functions.cpp -o functions.o
//    g++ main.o functions.o -o my_app
//
// 3. With a header directory (e.g. headers are in ./include/):
//    g++ -I./include -c src/main.cpp -o main.o
//
// 4. Automate with a Makefile:
//    CXX      = g++
//    CXXFLAGS = -Wall -std=c++17
//
//    my_app: main.o functions.o
//        $(CXX) main.o functions.o -o my_app
//
//    main.o: main.cpp
//        $(CXX) $(CXXFLAGS) -c main.cpp
//
//    functions.o: functions.cpp
//        $(CXX) $(CXXFLAGS) -c functions.cpp
//
//    clean:
//        rm *.o my_app
//
// --- KEY FLAGS ---
//   -c           Compile to object file; skip linking
//   -o           Name the output file
//   -Wall        Enable all common compiler warnings (always use this)
//   -Wextra      Extra warnings beyond -Wall
//   -I<dir>      Add directory to header search path
//   -std=c++20   Select C++ standard version (c++11, c++14, c++17, c++20)
// ============================================================

#include <iostream>

int add(int, int); // forward declaration — add is defined in a separate file

int main() {
    std::cout << add(1, 2); // linker resolves this to the definition in the other .o file
}
