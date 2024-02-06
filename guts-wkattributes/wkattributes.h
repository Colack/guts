#ifndef WKATTRIBUTES_H
#define WKATTRIBUTES_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *wkattributes_get(char *path);
void wkattributes_set(char *path, char *value);
void wkattributes_unset(char *path);

#endif