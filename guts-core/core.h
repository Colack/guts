#ifndef CORE_H
#define CORE_H

#include "run-command.h"

#define GUTS_VERSION "0.0.2"
#define GUTS_AUTHOR "Guts Team"
#define GUTS_REPOSITORY "https://github.com/colack/guts"
#define GUTS_LICENSE "GPL-3.0"

#define GUTS_DEBUG false

bool core_init(int argc, char **argv);
bool core_destroy();

void core_print_version();
void core_print_help();

/*
    Guts Core is the main entry point for the Guts program. It is responsible for initializing the program and handling the main loop.

    The actual implementation of the 'Guts' program (not the core) is split into several modules, each of which is responsible for a specific part of the program. The core is responsible for initializing these modules and handling the main loop.
*/

#endif