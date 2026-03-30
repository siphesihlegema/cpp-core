// ============================================================
// CLASSES — Quick Reference
// ============================================================
// A class bundles data (member variables) and behavior (member functions).
// Members are PRIVATE by default (unlike struct where they are public).
//
// Syntax:
//   class Name {
//     public:
//       <accessible from anywhere>
//     private:
//       <accessible only within the class>
//   };
//
// Instantiation:  ClassName obj;    // default-initialized
// Member access:  obj.memberVar     // only works for public members
//                 obj.Method(args)
//
// 'this' pointer — inside any member function, 'this' refers to the calling object.
// ============================================================

#include <iostream>
#define pr(x) std::cout << x << "\n"

class player {
    public:
        int x, y;  // position
        int speed; // multiplier applied to movement

        void Move(int xa, int ya) {
            x += xa * speed; // moves x by xa scaled by speed
            y += xa * speed; // NOTE: uses xa for both axes (likely a typo — ya is unused)
        }
};

int main() {
    player player; // instance of player class

    player.x = 0;
    player.y = 0;
    player.speed = 10;

    player.Move(2, 2); // x becomes 0 + 2*10 = 20

    pr(player.x); // prints: 20
    return 0;
}
