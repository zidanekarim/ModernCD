#include "executor.h"
#include "aliases.h"


int changeDirCheck(char* path) {
    if (chdir(path) != 0) {
        perror("chdir() failed (Invalid path?)");
        exit(1);
    }
    else {
        return 0;
    }
}

