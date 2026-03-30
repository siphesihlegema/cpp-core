// ============================================================
// PREPROCESSOR — Quick Reference
// ============================================================
// The preprocessor runs BEFORE the compiler on every .cpp file.
// It performs text substitution — no type checking, no scope rules.
//
// Full build pipeline:
//   1. Preprocess  — handle all # directives, expand macros
//   2. Compile     — translate the preprocessed code to machine/object code (.o)
//   3. Link        — combine object files + libraries into an executable
//   (Together steps 1-3 are called "translation")
//
// Common preprocessor directives:
//   #include <file>       — paste the contents of a standard library header
//   #include "file"       — paste the contents of a local file
//   #define NAME value    — text substitution macro (avoid for constants; use constexpr)
//   #define MACRO(x) ...  — function-like macro (avoid; use inline functions)
//   #pragma once          — prevent a header from being included more than once
//   #ifdef / #ifndef / #endif — conditional compilation
//   #if 0 ... #endif      — comment out a block of code (useful for debugging)
//
// The preprocessor does NOT understand C++ — it works on raw text only.
// ============================================================
