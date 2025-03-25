#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 


typedef struct {
    char* shortcut;
    char* path;
} item;

int changeDirCheck(char* path);


#endif // EXECUTOR_H