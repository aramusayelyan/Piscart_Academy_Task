#include "user.h"

void withdraw(struct User *user, double amount) 
{
    if (amount <= 0) {
        puts("you need to enter positive number");
        return;
    }

    if (user->balance < amount) {
        puts("you don't have this much");
        return;   
    }

    printf("you have withdrawn %.2lf$\n", amount);
    user->balance -= amount;
}

void deposit(struct User *user, double amount) 
{
    if (user == NULL) {
        puts("no such user");
        return;
    }

    if (amount <= 0) {
        puts("positive number");
        return;
    }

    user->balance += amount;
}

double check_balance(struct User *user)
{
    if (user == NULL) {
        puts("no such user");
        return -1.0;
    }

    return user->balance;
}

void user_info(struct User *user)
{
    printf("user id - %d\n", user->id);
    printf("user name - %s\n", user->username);
    printf("user balance - %.2lf\n", user->balance);
}

struct User create_user(const char *name, double balance) 
{
    static int current_id = -1;

    struct User result;
    strncpy(result.username, name, USERNAME_LEN);
    result.balance = balance;
    result.id = current_id += 1;

    return result;
}
