# PassManager

PassdManager is a local password manager build on the QT framework, using SQLCipher as the database backend.

## Requirements:
- Operating System: `Arch Linux`
- Required packages (use this command): 
  - `pacman -Syyu sqlite sqlcipher sqlitebrowser qt5-base qt5-doc qtcreator qt5-tools`
  - AUR Packages:
    - link: [qt5-sqlcipher-git](https://aur.archlinux.org/packages/qt5-sqlcipher-git/)
    - How to build it: 
      - `git clone https://aur.archlinux.org/qt5-sqlcipher-git.git`
      - `cd qt5-sqlcipher-git`
      - `makepkg -si`
## How to compile this Application 
1. Download this repository. 
2. Open the all the files from the __PasswordManager__ folder into `Qt Creator` ide in Arch Linux. These files: 
    ```
    login.cpp
    login.h
    login.ui
    login.ui.autosave
    main.cpp
    manager.cpp
    manager.h
    manager.ui
    PasswordManager.pro
    PasswordManager.pro.user
    register.cpp
    register.h
    register.ui
    register.ui.autosave
    ```
3. If the project opens properly, press the green play button in `Qt Creator` to compile. 
4. The compiled executable will run. (If you want the executable itself, it will most likely be in you home directory.) 
5. __If you are unable to compile this application a sample executeable folder is provide.__ 

## Features:
- [X] Store username and password for an account inside a SQLScipher Database which is accessed by the program.
- [X] Password is hidden when being entered.
- [X] Usernames and Passwords are encrypted in the database.
- [X] Users can view decrypted passwords when request.

## ScreenShots:

First Time: 
- ![registration](https://github.com/MegaMan501/PassManager/blob/master/registration.png)

Subsequent Times: 

- ![login](https://github.com/MegaMan501/PassManager/blob/master/login.png)
- ![manager](https://github.com/MegaMan501/PassManager/blob/master/manager.png)
