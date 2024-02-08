#ifndef API_H
#define API_H

#include "../lib.h"

#define API_ENABLED true

void api_init();
void api_destroy();

void private_api_start();
void private_api_stop();

#endif