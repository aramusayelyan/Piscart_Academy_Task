#ifndef _USER_H
#define _USER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USERNAME_LEN 20

struct User {
    int id;
    double balance;
    char username[USERNAME_LEN];
};

void user_info(struct User *);
struct User create_user(const char *name, double balance);
double check_balance(struct User *);
void withdraw(struct User *, double);
void deposit(struct User *, double);

#endif /* _USER_H */
