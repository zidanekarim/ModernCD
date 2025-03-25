#include "aliases.h"

item items[];



int loadBashFile(char* buffer) {
    char* home = getenv("HOME");
    if (!home) {
        perror("getenv() failed (HOME not set?)");
        exit(1);
    }
    char* path = strcat(home, "/.bashrc");
    FILE* file = fopen(path, "r");
    if (!file) {
        perror("fopen() failed (File not found?)");
        exit(1);
    }
    
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    return fclose(file);
}



//int addAlias(char* shortcut, char* path) {
//     item newItem;
//     newItem.shortcut = shortcut;
//     newItem.path = path;
//     realloc(items, sizeof(items) + sizeof(item));
//     items[sizeof(items) / sizeof(items[0])] = newItem;
//     return 0;
// }