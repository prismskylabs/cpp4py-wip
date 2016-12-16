#include "singleton.h"

Singleton& Singleton::GetInstance() {
    static Singleton instance;
    // Anything past this point has instance
    return instance;
}
