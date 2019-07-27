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
