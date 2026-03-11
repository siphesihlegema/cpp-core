#include <iostream>

static int g_x{}; // non-constant globals have external linkage by default, but can be given internal linkage via the static keyword

const int g_y{ 1 }; // const globals have internal linkage by default
constexpr int g_z{ 2 }; // constexpr globals have internal linkage by default

/*
 * Ok i suppose i understand why const and constexpr have iternal linkage in the global namespace,
 * it is mainly because when we #include file with const or constexpr, this happens to multile files maybe
 * so these variable or functions in our header file that we include need to have internal linkage to prevent namingconflicts.
 *
 * And static is just an explicit way to make any variable or function in th global namespace, which by default have external linkage
 * to have internal linkage.
 *
 * there is a way to give const and constexpr functions and variable external linkege, its by using the
 * "etern" keyword. now remeber you always need to foward declare thing to use them in another file. Importently and also sad, we can not
 * foward declare a variable with constexpr, because the compiler needs to know the value of the cunction at compile time, of which
 * we can not do when we foward declare a member.
 *
 * but we can foward decalre a varibale with const, which is also kinda use less because even though the varible is const
 * it is evaluated at runtime.
 *
 * Only use extern for global variable forward declarations or const global variable definitions.
 * Do not use extern for non-const global variable definitions (they are implicitly extern).
 * */

int main()
{
    std::cout << g_x << ' ' << g_y << ' ' << g_z << '\n';
    return 0;
}
