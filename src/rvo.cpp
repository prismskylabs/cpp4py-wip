#include "rvo.h"

ExpensiveObject value_return() {
    ExpensiveObject object;
    return object;
}

ExpensiveObject& local_reference() {
    ExpensiveObject object;
    return object;
}
