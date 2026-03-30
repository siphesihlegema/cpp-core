// ============================================================
// std::vector — Quick Reference
// ============================================================
// std::vector is a dynamic array from the standard library.
// Unlike std::array, its size can grow and shrink at runtime.
//
// Syntax:
//   std::vector<T> v;                 // empty vector
//   std::vector<T> v{1, 2, 3};        // initialized with values
//   std::vector<T> v(n);              // n default-initialized elements
//   std::vector<T> v(n, value);       // n elements all set to value
//
// Common operations:
//   v.push_back(x)     — add element to the end
//   v.pop_back()       — remove last element
//   v.size()           — number of elements
//   v.empty()          — true if no elements
//   v[i]               — access element (no bounds check)
//   v.at(i)            — access element (bounds-checked, throws out_of_range)
//   v.front() / v.back() — first / last element
//   v.clear()          — remove all elements
//
// Range-based for loop:
//   for (auto& elem : v) { }
//
// Include: #include <vector>
// ============================================================

#include <vector>

int main() {
    std::vector<int> list{}; // empty vector of ints; grows as elements are added
}
