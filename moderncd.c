#include <stdio.h>
#include "executor.h"

#define PROJECT_NAME "ModernCD"

int main(int argc, char **argv) {
    
    printf("This is project %s.\n", PROJECT_NAME);
    changeDir("..");
    return 0;
}
