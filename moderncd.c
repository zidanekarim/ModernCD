#include <stdio.h>
#include "executor.h"

#define PROJECT_NAME "ModernCD"
char BUFFER[1024];
int main(int argc, char **argv) {
    
    //printf("This is project %s.\n", PROJECT_NAME);
    printf("%d\n", changeDirCheck(".."));
    loadBashFile(BUFFER);
    return 0;
}
