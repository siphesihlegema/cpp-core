// Basical constexpr are expressions that are evaluated at complile time

int main() {
    int a { 5 };       // not const at all
    const int b { a }; // clearly not a constant expression (since initializer is non-const)
    const int c { 5 }; // clearly a constant expression (since initializer is a constant expression)
}
