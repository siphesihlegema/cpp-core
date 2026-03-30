// ============================================================
// CONSTANT EXPRESSIONS — Quick Reference
// ============================================================
// A "constant expression" is one the compiler can fully evaluate at compile time.
//
//  const int b { a };    → NOT a constant expression if 'a' is non-const (runtime value)
//  const int c { 5 };    → IS a constant expression (literal initializer)
//  constexpr int x { 5}; → FORCES compile-time evaluation; compiler error if impossible
//
// Key difference:
//   const    — value cannot change after init, but may be set at runtime
//   constexpr — value MUST be known at compile time; enables use in:
//               - array sizes: int arr[constexpr_val];
//               - template arguments
//               - case labels in switch
//
// Prefer constexpr over const when the value is truly fixed at compile time.
// ============================================================

int main() {
    int a { 5 };       // plain variable, not const
    const int b { a }; // const but NOT a constant expression — 'a' is a runtime value
    const int c { 5 }; // constant expression — literal 5 is known at compile time
}
