/*
A namespace in C++ is a declarative region that provides a named scope for identifiers (such
as variables, functions, and classes) to prevent naming conflicts, essentially acting like a
labeled container or a "surname" for your code. Just as two people can share the first name
"John" but are distinguished by their last names, two libraries can both have a function named
init() as long as they are inside different namespaces (e.g., Audio::init() vs.
Video::init()). This organization is crucial in large projects to ensure that internal variable
names do not accidentally clash with those in third-party libraries (like the Standard Library's
std namespace), and members are accessed using the scope *resolution operator (::)* or
using directives.
*/

