# PassManager

PassdManager is a local password manager build on the QT framework, using SQLCipher as the database backend.

## Requirements:
- Operating System: `Ubuntu 18.0.1`
- Required packages: `build-essential qtcreator qt5-default pkg-config libsqlcipher-dev qtbase5-private-dev sqlite sqlcipher`
- Required plugins: 
   - First reference this repository for how to build the plugining for Ubuntu 18.04: [qsqlcipher-qt5](https://github.com/sjemens/qsqlcipher-qt5)
   - Then run these comands to install the required packages correctly: 
   ```
   w@wHost:~$ sudo apt update
   w@wHost:~$ sudo apt upgrade
   w@wHost:~$ sudo apt install build-essential qtcreator qt5-default
   w@wHost:~$ sudo apt install -y pkg-config libsqlcipher-dev qtbase5-private-dev sqlite sqlcipher
   w@wHost:~$ export QT_SELECT=5
   w@wHost:~$ wget https://github.com/sjemens/qsqlcipher-qt5/archive/v5.9.5-1.tar.gz
   w@wHost:~$ tar -xf v5.9.5-1.tar.gz 
   w@wHost:~$ cd qsqlcipher-qt5-5.9.5-1/
   w@wHost:~$ mkdir -p build && cd build
   w@wHost:~$ qmake ../qsqlcipher.pro 
   w@wHost:~$ make
   w@wHost:~$ sudo make install
   ```

## Building PassManager: 
1. Download this repository and open `Qt Creator`
![step1](https://github.com/MegaMan501/PassManager/blob/master/step1.png)
2. Open the __PasswordManager__ folder in `Qt Creator` on Ubuntu. Then select the __.pro__ file. For example: 
![step2](https://github.com/MegaMan501/PassManager/blob/master/step2.png)
3. If the project opens properly, press the green play button in `Qt Creator` to compile. For example:
![step3](https://github.com/MegaMan501/PassManager/blob/master/step3.png)
4. The compiled executable will run automatically. (If you want the executable itself, it will most likely be in the __build-PasswordManager-Desktop-Debug__ directory as __PassManager__.

## Features:
- [X] Store username and password for an account inside a SQLScipher Database which is accessed by the program.
- [X] Password is hidden when being entered.
- [X] Usernames and Passwords are encrypted in the database.
- [X] Users can view decrypted passwords when request.

## Sample Runs:
Here are to sample runs of the password manager. The first run always creates the __accounts.db__ file for the password manager. However, in future runs of the password manager the login screen will show up instead, as long as the __accounts.db__ file exists in the home directory of the user. 

First Run: 
- Registration Screen, where users are asked to enter the master password for the accounts database. 
![registration](https://github.com/MegaMan501/PassManager/blob/master/registration.png)
- Then, the user has access to manager part of the password manager. 
![manager](https://github.com/MegaMan501/PassManager/blob/master/manager.png)

Subsequent Runs: 
- Instead of have to register, user are asked to enter the password that they created before hand.
![login](https://github.com/MegaMan501/PassManager/blob/master/login.png)
- Then, the user has access to manager part of the password manager. 
![manager](https://github.com/MegaMan501/PassManager/blob/master/manager.png)

Verification: 
- Here is a `hexdump` of the database file tie to this instance of the password manager. 
![verification](https://github.com/MegaMan501/PassManager/blob/master/verfication.png)

## Licenses: 
- Qt SQL driver plugin for SQLCipher: [qsqlcipher-qt5](https://github.com/sjemens/qsqlcipher-qt5/blob/master/LICENSE) (**LGPLV3**)
- SQLCipher license: [SQLCipher](https://www.zetetic.net/sqlcipher/license/) (**BSD**)
-Qt5: [Qt5 libraries](https://www.qt.io/licensing/) (**LGPLV3  GPLV2/GPLV3**)
