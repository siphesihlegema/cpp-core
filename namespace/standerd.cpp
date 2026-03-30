// ============================================================
// 'using namespace' — Quick Reference
// ============================================================
// 'using namespace std;' pulls ALL std:: names into the current scope.
//
// Consequence:
//   cout instead of std::cout    ✓ shorter to type
//   BUT: can cause silent name collisions if your code happens to define
//        something with the same name as a std member (e.g. 'count', 'distance')
//
// Best practices:
//   - NEVER put 'using namespace std;' in a header file — it forces the
//     directive onto every file that includes that header.
//   - Acceptable in .cpp implementation files, but prefer explicit std:: in
//     production code for clarity.
//   - Prefer targeted: using std::cout; using std::endl;  (imports only what you need)
// ============================================================

#include <iostream>

using namespace std; // imports entire std namespace — ok for small examples, risky in large projects

int main() {
    cout << "Hello" << "\n"; // no std:: needed because of the using directive
    return 0;
}
