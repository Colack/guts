#ifndef MODULES_H
#define MODULES_H

#include "lib.h"

#include "guts-api/api.h"
#include "guts-client/client.h"
#include "guts-offline/offline.h"
#include "guts-server/server.h"
#include "guts-utility/utility.h"
#include "guts-wkattributes/wkattributes.h"

/*
    Modules are essentially the building blocks of the Guts program. Each module is responsible for a specific part of the program, such as the API, the client, the server, etc.
*/

#define MODULES_API 0 // API module, responsible for handling API requests
#define MODULES_CLIENT 1 // Client module, responsible for handling client requests
#define MODULES_OFFLINE 2 // Offline module, responsible for handling offline requests
#define MODULES_SERVER 3 // Server module, responsible for handling server requests
#define MODULES_UTILITY 4 // Utility module, responsible for handling utility requests
#define MODULES_WKATTRIBUTES 5 // WKAttributes module, responsible for handling WKAttributes requests

void modules_init();
void modules_destroy();

void modules_run_command(const char *module, const bool run_with_debug, const char *command, const char *args);
void modules_find_command(const char *command);

#endif