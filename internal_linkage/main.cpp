// ============================================================
// LINKAGE — Internal vs External Quick Reference
// ============================================================
// Linkage controls whether an identifier is visible across translation units (.cpp files).
//
//  EXTERNAL linkage — identifier can be used from OTHER files (default for non-const globals)
//  INTERNAL linkage — identifier is ONLY visible within its own translation unit
//
// Rules:
//   Non-const global (int g_x)          → external by default
//   static non-const global (static int) → internal (static overrides default)
//   const global (const int)             → internal by default
//   constexpr global (constexpr int)     → internal by default
//
// Why const/constexpr default to internal:
//   They are commonly placed in header files that are #included by many .cpp files.
//   Internal linkage prevents "multiple definition" linker errors across those files.
//
// To give const/constexpr external linkage:
//   extern const int g_y = 1;       // definition with external linkage
//   extern const int g_y;           // forward declaration in another file
//   NOTE: you CANNOT forward-declare constexpr — the compiler needs its value at compile time.
//
// Rule of thumb:
//   - Use 'extern' only for global variable forward declarations or extern const definitions.
//   - Non-const globals don't need 'extern' in their definition (they are extern by default).
// ============================================================

#include <iostream>

static int g_x{};    // explicitly internal linkage — not visible outside this file
const int g_y{ 1 };  // internal linkage by default
constexpr int g_z{ 2 }; // internal linkage by default

int main()
{
    std::cout << g_x << ' ' << g_y << ' ' << g_z << '\n'; // 0 1 2
    return 0;
}
