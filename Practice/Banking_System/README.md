# Bank Management System

This Bank Management System is a simple command-line program written in C. It allows users to perform basic banking operations such as deposit, withdraw, and check balance. Below is a brief description of each file in the program:

## Files

### `bank.c`

This file contains the implementation of functions related to the bank, such as creating a bank structure, adding users to the bank, printing user information, and retrieving user information.

### `bank.h`

Header file declaring the structures and function prototypes related to the bank.

### `main.c`

The main program file where the user interacts with the bank management system. It provides a menu-driven interface for users to perform various actions like deposit, withdraw, check balance, etc.

### `user.c`

Contains the implementation of functions related to users, such as creating a new user, depositing money into a user's account, withdrawing money from a user's account, checking a user's balance, and displaying user information.

### `user.h`

Header file declaring the structures and function prototypes related to users.

## How to Operate the Program

1. Compile the program using a C compiler such as gcc.
   
   Example:
   ```
   gcc -o bank_management_system main.c bank.c user.c
   ```

2. Run the compiled executable.
   
   Example:
   ```
   ./bank_management_system
   ```

3. Follow the instructions displayed on the console to perform various actions like deposit, withdraw, check balance, etc.
   
   Example:
   ```
   ---- Bank -----
   1. for withdraw
   2. for deposit
   3. for user info
   4. for list users
   5. for quit
   enter the action:
   ```

4. Enter the desired action number according to the menu displayed.
5. Depending on the chosen action, follow the prompts to provide additional information such as user ID, amount, etc.
6. Continue interacting with the program until you choose to quit.

## Notes

- Ensure to provide valid inputs according to the instructions displayed during runtime.
- The program does not handle errors like invalid input types or insufficient funds beyond basic error messages.

