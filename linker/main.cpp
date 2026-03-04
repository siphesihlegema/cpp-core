#include <iostream>

int add(int, int);

int main() {
    std::cout << add(1, 2);
}

/*
   simple standerd way to compile frograms
1. g++ main.cpp functions.cpp math_utils.cpp -o my_app

   for compiling the files seperatly and then linking them
   to an executable "my_app"
2. g++ -c main.cpp -o main.o
   g++ -c functions.cpp -o functions.o

   g++ main.o functions.o -o my_app

   for header file seperate from cpp file
3. g++ -I./include -c src/main.cpp -o main.o

4. automating everithing using a make file
   # Variables
   CXX = g++
   CXXFLAGS = -Wall -std=c++17

   # The final executable
   my_app: main.o functions.o
	   $(CXX) main.o functions.o -o my_app

   # Rules for object files
   main.o: main.cpp
	   $(CXX) $(CXXFLAGS) -c main.cpp

   functions.o: functions.cpp
	   $(CXX) $(CXXFLAGS) -c functions.cpp

   clean:
	   rm *.o my_app
*/

/*
-c	        Compile to object file (.o), skip linking.
-o	        Name the output file.
-Wall	    Enable "all" compiler warnings (highly recommended).
-I	        Add a directory to the header search path.
-std=c++20	Use a specific C++ standard.
*/

// i dont remember this anymore
