#ifndef RUN_COMMAND_H
#define RUN_COMMAND_H

#include "lib.h"
#include "modules.h"

void run_command(const char *module, const bool run_with_debug, const char *command, const char *args);
void command_handler(const char *command, const bool run_with_debug, const char *args);
char *find_command_module(const char *command); // Returns the module name of the command ie: "guts-core" or "guts-commands"

/*
    Should be run in this order:
        1. command_handler -> Checks if the command is a built-in command or exists
        2. find_command_module -> Returns the module name of the command
        3. run_command -> Runs the command

    Example:
        command_handler("help", false, "");
        find_command_module("help"); -> "guts-commands"
        run_command("guts-commands", false, "help", "");

*/

#endif