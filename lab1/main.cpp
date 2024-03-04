#include "parent.hpp"

int main() {
    parentProcess(getenv("PATH_TO_CHILD"));
    // bash: export PATH_TO_CHILD="/home/qwz/OS_LABS/build/lab1/child"
    exit(EXIT_SUCCESS);
}
