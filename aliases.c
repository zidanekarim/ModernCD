#include "aliases.h"

item items[];



int addAlias(char* shortcut, char* path) {
    item newItem;
    newItem.shortcut = shortcut;
    newItem.path = path;
    realloc(items, sizeof(items) + sizeof(item));
    items[sizeof(items) / sizeof(items[0])] = newItem;
    return 0;
}