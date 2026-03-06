#include <iostream>
#define pr(x) std::cout << x << "\n"

class player {
    public:
        int x, y;
        int speed;

        void Move(int xa, int ya) {
            x += xa * speed;
            y += xa * speed;
        }
};

int main() {
    player player;

    player.x = 0;
    player.y = 0;

    player.speed = 10;

    player.Move(2, 2);

    pr(player.x);
    return 0;
}
