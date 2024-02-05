#ifndef CLIENT_H
#define CLIENT_H

struct client_user {
    char username[50];
    char password[50];
    char email[50];
    int userID;
    int userType;
    char userStatus[50];
    bool loggedIn;
    bool banned;
};

void client_init();
void client_start();
void client_stop();

int client_createUser(char *username, char *password, char *email, int userID, int userType, char *userStatus);
int client_loginUser(char *username, char *password);
int client_logoutUser(char *username);

int client_updateUsername(char *username, char *newUsername);
int client_updatePassword(char *username, char *newPassword);
int client_updateEmail(char *username, char *newEmail);

bool client_checkIfUserExists(char *username);
bool client_checkIfUserLoggedIn(char *username);
bool client_checkIfUserIsAdmin(char *username);
bool client_checkIfUserIsBanned(char *username);

#endif