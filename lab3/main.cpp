#include "parent.hpp"

int main() {
    ParentProcess(getenv("PATH_TO_CHILD"));
    // bash: export PATH_TO_CHILD="/home/qwz/OS_LABS/build/lab3/child3"
    // bash: printenv PATH_TO_CHILD
    exit(EXIT_SUCCESS);
}
