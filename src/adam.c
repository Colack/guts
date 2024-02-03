#include "adam.h"

void adam_startMenu(bool displayLogo) {
    
}

void adam_commandHandler(int argc, char *argv[]) {
    
}

void adam(int argc, char *argv[]) {
    if (argc > 1) {
        adam_commandHandler(argc, argv);
    } else {
        adam_startMenu(DISPLAY_LOGO);
    }
}