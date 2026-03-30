// ============================================================
// STRUCTS vs CLASSES — Quick Reference
// ============================================================
// In C++, struct and class are almost identical — the ONLY difference is
// the DEFAULT access modifier:
//
//   struct → members are PUBLIC by default
//   class  → members are PRIVATE by default
//
// Convention (not enforced by the language):
//   struct — used for simple data-only aggregates (Plain Old Data / POD types)
//             e.g. Point { int x, y; }, Color { float r, g, b; }
//   class  — used when you want encapsulation (private state + public interface)
//
// Structs CAN have member functions, constructors, and inheritance — they are
// not limited to data. But by convention, if you need heavy encapsulation, use class.
// ============================================================

#include <iostream>
#define pr(x) std::cout << x << "\n"

struct player {
    int x, y;    // public by default
    int speed;

    void Move(int xa, int ya) {
        x += xa * speed;
        y += xa * speed; // NOTE: ya is unused here (likely a bug — should be y += ya * speed)
    }
};

int main() {
    player player;

    player.x = 0;
    player.y = 0;
    player.speed = 10;

    player.Move(2, 2); // x becomes 0 + 2*10 = 20

    pr(player.x); // prints: 20
    return 0;
}
