// ============================================================
// NAMESPACES — Quick Reference
// ============================================================
// A namespace is a named scope that groups identifiers (variables, functions,
// classes) to prevent naming conflicts across large codebases or libraries.
//
// Syntax:
//   namespace Name {
//       void foo() {}
//       int x = 0;
//   }
//
// Accessing members:
//   Name::foo()  — scope resolution operator (::)
//   Name::x
//
// Example use case:
//   Audio::init()  and  Video::init()  can both exist — different namespaces
//   std::cout      — cout lives inside the 'std' namespace
//
// Access shortcuts (use sparingly):
//   using namespace Name;        — imports ALL names into current scope (risky: collisions)
//   using Name::foo;             — imports only 'foo' (safer)
//
// Nested namespaces (C++17):
//   namespace Outer::Inner { void bar() {} }
//   Outer::Inner::bar();
//
// Anonymous namespaces:
//   namespace { ... }  — gives internal linkage (file-scope only), like 'static'
// ============================================================
