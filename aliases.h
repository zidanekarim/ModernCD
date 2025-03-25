#ifndef ALIASES_H
#define ALIASES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include "executor.h"

int addAlias(char* shortcut, char* path);
int removeAlias(char* shortcut);
int listAliases();


#endif // ALIASES_H