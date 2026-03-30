// ============================================================
// USER-DEFINED NAMESPACE — Definition file
// ============================================================
// 'somthing' is scoped to namespace Foo.
// Accessed externally as: Foo::somthing(a, b)
// ============================================================

namespace Foo {
    int somthing(int x, int y) {
        return x + y; // adds two numbers
    }
}
