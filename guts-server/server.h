#ifndef SERVER_H
#define SERVER_H

struct server_user {
    char username[50];
    char password[50];
    char email[50];
    int userID;
    int userType;
    char userStatus[50];
    bool loggedIn;
    bool banned;
};

/*
    User Example:
    {
        "username": "jackjack",
        "password": "password",
        "email": "colackalpha@gmail.com",
        "userID": 1,
        "userType": 2,
        "userStatus": "I made this btw :P",
        "loggedIn": false,
        "banned": false
    }
*/

/*
    User Types:
    0 - Banned
    1 - User
    2 - Admin
*/

void server_init();
void server_start();
void server_stop();

int server_createUserID();
int server_hashPassword(char *password);
int server_getUserType(char *username);
int server_getUserIndex(char *username);

bool server_checkIfUserExists(char *username);
bool server_checkIfUserLoggedIn(char *username);
bool server_checkIfUserIsAdmin(char *username);
bool server_checkIfUserIsBanned(char *username);

char server_createUser(char *username, char *password, char *email, int userID, int *userType, char *userStatus);
char server_loginUser(char *username, char *password);
char server_logoutUser(char *username);

#endif