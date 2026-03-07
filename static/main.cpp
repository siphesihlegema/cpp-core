// what does static in c++ mean

// from what i remember static mean a variable or method does not belong to a class,
// you can use it without instanciating a class object.

// ok now this is the educated explanation.
/*
In C++, the static keyword fundamentally dictate
that a variable or function exists for the entire
duration of the program, but its specific behavior changes 
based on where it is declared. When applied to a local 
variable inside a function, static extends its lifetime 
so it retains its state between function calls instead of 
being destroyed and recreated. When applied to a class 
member, it detaches the variable or method from individual object 
instances, creating a single shared entity that belongs to the 
class itself and can be accessed without instantiation. 
Lastly, when applied to a global variable or standalone function, 
it alters visibility by restricting the entity's linkage strictly to the 
.cpp file it is defined in, effectively hiding it from the rest of the 
program to prevent naming conflicts.
*/

int var = 10;
