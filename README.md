# PassManager

PassdManager is a local password manager build on the QT framework, using SQLCipher as the database backend.

## Requirements:
- Operating System: `Ubuntu 18.0.1`
- Required packages: `build-essential qtcreator qt5-default pkg-config libsqlcipher-dev qtbase5-private-dev sqlite sqlcipher`
 
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

First Time: 
- Registration Screen, where users are asked to enter the master password for the accounts database. 
![registration](https://github.com/MegaMan501/PassManager/blob/master/registration.png)
- Then, the user has access to manager part of the password manager. 
![manager](https://github.com/MegaMan501/PassManager/blob/master/manager.png)

Subsequent Times: 
- Instead of have to register, user are asked to enter the password that they created before hand.
![login](https://github.com/MegaMan501/PassManager/blob/master/login.png)
- Then, the user has access to manager part of the password manager. 
![manager](https://github.com/MegaMan501/PassManager/blob/master/manager.png)

Verification: 
Here is a `hexdump` of the database file tie to this instance of the password manager. 
