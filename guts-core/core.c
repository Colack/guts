#include "core.h"

void core_print_version() {
    printf("Guts Version: %s\n", GUTS_VERSION);
    printf("Author: %s\n", GUTS_AUTHOR);
    printf("Repository: %s\n", GUTS_REPOSITORY);
    printf("License: %s\n", GUTS_LICENSE);
}

void core_print_help() {
    core_print_version();
    printf("\n");
    printf("Usage: guts <command> [args]\n");
    printf("\n");
}

void translate_args_to_command(int argc, char **argv) {
    if (argc < 2) {
        core_print_help();
        return;
    }

    const char *command = argv[1];
    const char *args = argc > 2 ? argv[2] : "";

    printf("Got command: %s\n", command);
    printf("Got args: %s\n", args);
    command_handler(command, GUTS_DEBUG, args);
}

bool core_init(int argc, char **argv) {
    translate_args_to_command(argc, argv);
    return true;
}