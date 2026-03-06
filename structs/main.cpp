// what is the differance between struct and a class?

// i think it has somthing to do with access modifiers.
// members of a class are by default private where as structs it the opposit.

// whats the point of structs then if they are basically the same as classes? IDK.

// so it seems like it up to me to decide when i should use a struct or class.
// as a person comming from java, imma stick with classes until i find a reason
// somewhere to use a struct.
//But c++ is not like java, in java variable are "public" bu default in a class, so idk

#include <iostream>
#define pr(x) std::cout << x << "\n"

struct player {
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
