#include "co/all.h"

int main(int argc, char** argv) {
    flag::init(argc, argv);
    log::init();

    COUT << "hello world";

    return 0;
}
