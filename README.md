-- <tbd> v0.0.1

Introducing <tbd>, a simple tool to manage and create code repositories. (Essentially just a simpler version of git)

-- Installation
    -- To install <tbd> simply run the following command:
        -- `curl -s https://raw.githubusercontent.com/colack/<TBD>/install.sh | bash`

-- Program Options
    --version, -v       Print version information
    --help, -h          Print a help message
    --config, -c        Specify a configuration file
    --debug, -d         Enable debug mode
    --quiet, -q         Suppress all output
    --update, -u        Update the program
    --uninstall, -U     Uninstall the program
    --fix-install, -f   Fix the installation

-- Configuration File 
    -- The configuration file is a JSON file that contains the following options:
        -- "repo": The base repository for the whole program
        -- "directory": Directory of all repositories
        -- "server": The server mode for the program
        -- "port": The port for the server mode
        -- "default": The default repository options for creating new repositories

-- Repository Options
    -- The repository options are as follows:
        -- "name": The name of the repository
        -- "description": The description of the repository
        -- "files": The files in the repository
        -- "commits": The commits in the repository
        -- "branches": The branches in the repository
        -- "tags": The tags in the repository

-- Commands
    create <name>           Create a new repository
    delete <name>           Delete a repository
    list                    List all repositories
    add <name> <file>       Add a file to a repository
    remove <name> <file>    Remove a file from a repository
    commit <name>           Commit changes to a repository
    push <name>             Push changes to a repository 
    pull <name>             Pull changes from a repository   
    status <name>           Get the status of a repository
    move <name> <newname>   Move a repository to a new name
    clone <name>            Clone a repository
    rename <name> <newname> Rename a repository
    log <name>              Get the log of a repository
    history <name>          Get the history of a repository

-- This program also comes with a server mode that can be enabled by running the following command:
    -- `tbd server`

-- Server Mode
    -- The server mode allows you to manage repositories from a command line interface.
    -- Clients can connect to the server and manage repositories remotely.
    -- You can connect to the server by running the following command:
        -- `tbd connect <server> <port>`
    -- Note: Servers will require username and password authentication.

-- Server Database
    -- The server mode also comes with a database that stores all the repositories and their information, along with user information.
    -- The database is a 2 file system that contains the following files:
        -- "users.json": Contains all the user information
        -- "repositories.json": Contains all the repository information

-- Server Commands
    -- create <name>                            Create a new repository
    -- delete <name>                            Delete a repository
    -- list                                     List all repositories
    -- add <name> <file>                        Add a file to a repository
    -- remove <name> <file>                     Remove a file from a repository
    -- commit <name>                            Commit changes to a repository
    -- push <name>                              Push changes to a repository 
    -- pull <name>                              Pull changes from a repository   
    -- status <name>                            Get the status of a repository
    -- move <name> <newname>                    Move a repository to a new name
    -- clone <name>                             Clone a repository
    -- rename <name> <newname>                  Rename a repository
    -- log <name>                               Get the log of a repository
    -- history <name>                           Get the history of a repository
    -- users                                    List all users
    -- adduser <username>                       Add a user
    -- removeuser <username>                    Remove a user
    -- changepassword <username> <password>     Change a user's password
    -- user <username>                          Get a user's information
    -- ban <username>                           Ban a user
    -- update                                   Update the server (requires admin privileges and a restart of the server)
    -- restart                                  Restart the server (requires admin privileges)
    -- stop                                     Stop the server (requires admin privileges)
    -- quit                                     Quit the server (requires admin privileges)
    -- login <username> <password>              Login to the server
    -- backup                                   Backup all the server data along with repositories and user information. (Requires admin privileges)

-- Client Commands
    -- connect <server> <port>                  Connect to a server
    -- login <username> <password>              Login to the server
    -- register <username> <password>           Register a new user (You will have to have your account approved by an admin.)
    -- create <name>                            Create a new repository
    -- delete <name>                            Delete a repository
    -- list                                     List all repositories
    -- add <name> <file>                        Add a file to a repository
    -- remove <name> <file>                     Remove a file from a repository
    -- commit <name>                            Commit changes to a repository
    -- push <name>                              Push changes to a repository
    -- pull <name>                              Pull changes from a repository
    -- status <name>                            Get the status of a repository
    -- move <name> <newname>                    Move a repository to a new name
    -- clone <name>                             Clone a repository
    -- rename <name> <newname>                  Rename a repository
    -- log <name>                               Get the log of a repository
    -- history <name>                           Get the history of a repository
    -- quit                                     Quit the server

-- This program is still in development (literally just started it) and is not ready for use yet. (I will update this README when it is ready for use)