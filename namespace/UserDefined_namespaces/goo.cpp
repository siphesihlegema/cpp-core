// ============================================================
// USER-DEFINED NAMESPACE — Goo
// ============================================================
// Both Foo and Goo define a function named 'somthing' — no conflict
// because they live in different namespaces.
// Accessed as: Goo::somthing(a, b)
// ============================================================

namespace Goo {
    int somthing(int x, int y) {
        return x - y; // subtracts y from x
    }
}
