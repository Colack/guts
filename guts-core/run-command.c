#include "run-command.h"

void run_command(const char *module, const bool run_with_debug, const char *command, const char *args) {

}

void command_handler(const char *command, const bool run_with_debug, const char *args) {
    if (strcmp(command, "version") == 0) {
        core_print_version();
    } else if (strcmp(command, "help") == 0) {
        core_print_help();
    } else {
        run_command(find_command_module(command), GUTS_DEBUG, command, args);
    }
}

char *find_command_module(const char *command) {

}