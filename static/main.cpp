// ============================================================
// 'static' KEYWORD — Quick Reference
// ============================================================
// 'static' means different things depending on WHERE it is used:
//
// 1. LOCAL VARIABLE (inside a function):
//    static int count = 0;
//    → Lifetime: entire program duration (not destroyed when function returns)
//    → Scope: still local to the function (can't be accessed from outside)
//    → Initialized ONCE on first call; retains value between calls
//    → Useful for: counters, memoization, one-time setup
//
// 2. CLASS MEMBER (inside a class):
//    static int s_count;           // declaration
//    int MyClass::s_count = 0;     // definition (in .cpp file)
//    → Belongs to the CLASS, not any individual object
//    → Shared by ALL instances of the class
//    → Can be accessed without an instance: MyClass::s_count
//
// 3. GLOBAL VARIABLE or FREE FUNCTION (outside any class/function):
//    static int g_x = 10;
//    static void helper() {}
//    → Restricts linkage to INTERNAL (this translation unit only)
//    → Prevents name conflicts with identically-named symbols in other files
//    → Same effect as an anonymous namespace
//
// ============================================================

int var = 10; // global variable with external linkage — accessible from other files via 'extern'
              // See static/Main.cpp for how 'extern' is used to access this
