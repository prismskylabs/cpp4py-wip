#include "rvo-fixed.h"

ExpensiveObject value_return() {
    return ExpensiveObject();
}

ExpensiveObject& local_reference() {
    ExpensiveObject object;
    return object;
}
