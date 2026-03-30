// ============================================================
// CLASS — Private Members & Access Control
// ============================================================
// Access modifiers:
//   public    — accessible from anywhere (inside and outside the class)
//   private   — accessible ONLY within the class's own methods
//   protected — accessible within the class and its derived classes
//
// Convention: prefix private member variables with m_ (e.g. m_LogLevel)
// to distinguish them from local variables and parameters.
//
// Pattern: use a public setter (SetLevel) to validate and control changes
// to private state (m_LogLevel) — this is encapsulation.
//
// Log levels work as a threshold:
//   m_LogLevel >= LogLevelError   → always prints errors
//   m_LogLevel >= LogLevelWarning → prints errors + warnings
//   m_LogLevel >= LogLevelInfo    → prints everything
// ============================================================

#include <iostream>

class Log {

    public:
        const int LogLevelError   = 0; // lowest priority
        const int LogLevelWarning = 1;
        const int LogLevelInfo    = 2; // highest priority

    private:
        int m_LogLevel = LogLevelInfo; // default: show everything

    public:
        // SetLevel — control which messages get printed
        void SetLevel(int level) {
            m_LogLevel = level;
        }

        void Error(const char* message) {
            if (m_LogLevel >= LogLevelError)
                std::cout << "[Error] " << message << std::endl;
        }

        void Warn(const char* message) {
            if (m_LogLevel >= LogLevelWarning)
                std::cout << "[warning] " << message << std::endl;
        }

        void Info(const char* message) {
            if (m_LogLevel >= LogLevelInfo)
                std::cout << "[Info] " << message << std::endl;
        }
};

int main() {
    Log log;

    log.SetLevel(log.LogLevelWarning); // level = 1: show errors + warnings, suppress info
    log.Error("Hello"); // prints — 0 >= 0... wait, LogLevelWarning(1) >= LogLevelError(0) → yes
    log.Warn("hello");  // prints — 1 >= 1 → yes
    log.Info("Hello");  // suppressed — 1 >= 2 → no
    std::cin.get();     // pause until Enter key
}
