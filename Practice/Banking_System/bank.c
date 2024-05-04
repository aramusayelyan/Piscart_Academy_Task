#include "bank.h"
#include "user.h"
#include <stdio.h>

struct Bank *create_bank(int cap)
{
    if (cap <= 0) {
        fprintf(stderr, "count must be positive value\n");
        exit(1);
    }

    struct Bank *bank = (struct Bank *)malloc(sizeof(*bank));
    bank->cap = cap;
    bank->count = -1;
    bank->customers = (struct User *)calloc(cap, sizeof(struct User));

    return bank;
}

void print_users(struct Bank *bank)
{
    for (int i = 0; i <= bank->count; ++i) {
        user_info(&bank->customers[i]);
    }
}

void add_user(struct Bank *bank, const char *name, double balance)
{
    if (++bank->count >= bank->cap) {
        puts("there is no more places");
        return;
    }

    bank->customers[bank->count] = create_user(name, balance);
}

struct User *get_user(struct Bank *bank, int id)
{
    if (id < 0 || id > bank->count) {
        puts("there is no such user");
        return NULL;
    }

    return &bank->customers[id];
}
