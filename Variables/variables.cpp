// ============================================================
// VARIABLES — C++ Quick Reference
// ============================================================
// Syntax: <type> <name>;                  // declaration (uninitialized)
//         <type> <name> = value;          // copy initialization
//         <type> <name>(value);           // direct initialization
//         <type> <name>{value};           // brace (uniform) initialization — PREFERRED
//                                         // brace-init disallows narrowing conversions
// ============================================================

#include <iostream>
#include <string>

int g; // global variable — zero-initialized automatically (value: 0)

int main() {
    // --- INITIALIZATION STYLES ---
    int x;        // declared but uninitialized (undefined behavior if read before assigned)
    x = 5;        // copy initialization
    int y(5);     // direct initialization
    int z{5};     // brace initialization — preferred; rejects narrowing (e.g. int{3.5} is an error)

    // --- ZERO-INITIALIZATION ---
    // Global and static variables are automatically zero-initialized before program starts.
    static int s; // s == 0 (static local: persists across calls, zero-initialized once)

    // --- FUNDAMENTAL TYPES ---
    int a = 10;
    long b = 123456L;          // L suffix = long literal
    long long c = 123456789LL; // LL suffix = long long literal
    unsigned int u = 42;       // only non-negative integers (wraps around on overflow)

    // Floating-point
    float f = 3.14f;  // f suffix = float literal (32-bit)
    double d = 3.14;  // default floating-point literal is double (64-bit)

    // Characters (stored as integer under the hood)
    char A = 'a'; // single-quoted char literal
    char B = 66;  // 66 == 'B' in ASCII

    // Boolean
    bool ok = true; // true(1) / false(0)

    // Strings (not a primitive — requires #include <string>)
    // std::string name = "bob";

    // --- SCOPE ---
    {
        int x = 3; // shadows outer x; destroyed when block exits
    }

    // --- CONSTANTS ---
    const int daysInWeek = 7;       // cannot be modified after initialization; evaluated at runtime
    constexpr int maxStudents = 300; // must be known at compile time; enables compile-time optimizations

    // --- AUTO (type deduction) ---
    // Compiler deduces type from the initializer. Drops const and reference qualifiers.
    auto dd = 10;   // deduced: int
    auto p = 3.14;  // deduced: double
    auto lt = true; // deduced: bool

    // --- TYPE CONVERSION ---
    double D = 5;              // int → double: implicit widening, safe (result: 5.0)
    int i = 5.9;               // double → int: truncates toward zero (result: 5), data loss!
    int aa = 5, bb = 2;
    double cc = aa / bb;       // GOTCHA: integer division happens first → 2, then stored as 2.0
    double c2 = static_cast<double>(a) / b; // correct: cast before dividing → 2.5

    // --- TYPE SIZES (typical, platform-dependent) ---
    // char:        1 byte
    // int:         4 bytes
    // double:      8 bytes
    // Use sizeof() to check at runtime:
    std::cout << sizeof(bool) << "\n"; // prints 1

    // --- REFERENCES (aliases) ---
    int AA = 10;
    int BB = AA;  // BB is a COPY; changing BB does not affect AA
    BB = 20;      // AA still == 10

    int& RR = AA; // RR is a reference (alias) to AA — same memory address
    RR = 30;      // AA is now 30; RR and AA refer to the same object

    return 0;
}
