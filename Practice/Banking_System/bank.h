#ifndef _BANK_H
#define _BANK_H 

#include "user.h"

struct Bank {
    struct User *customers;
    int cap;
    int count;
};

struct Bank *create_bank(int initial_customers);
void print_users(struct Bank *);
void add_user(struct Bank *bank, const char *name, double balance);
struct User *get_user(struct Bank *bank, int id);

#endif /* _BANK_H */