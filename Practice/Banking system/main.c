#include "bank.h"
#include "user.h"

enum Action {
    Withdraw = 1,
    Deposit,
    UserInfo,
    ListUsers,
    Quit,
};

void print_actions()
{
    puts("1. for withdraw");
    puts("2. for deposit");
    puts("3. for user info");
    puts("4. for list users");
    puts("5. for quit");
}

int main() 
{
    puts("---- Bank -----");

    struct Bank *bank = create_bank(20);

    add_user(bank, "Harut", 900);
    add_user(bank, "Mher", 850);
    add_user(bank, "Norayr", 800);
    add_user(bank, "Narek", 450);

    for (;;) {
        int action = 0;
        int user_id;
        double amount;

        print_actions();
        puts("enter the action: ");
        scanf("%d", &action);

        switch (action) {
        case Withdraw:
            scanf("%lf", &amount);
            scanf("%d", &user_id);
            withdraw(&bank->customers[user_id], amount);
            break;
        case Deposit:
            scanf("%lf", &amount);
            scanf("%d", &user_id);
            deposit(&bank->customers[user_id], amount);
            break;
        case UserInfo:
            scanf("%d", &user_id);
            user_info(&bank->customers[user_id]);
            break;
        case ListUsers:
            print_users(bank);
            break;
        case Quit:
            puts("ending session...");
            exit(0);
        default:
            puts("undefined action");
            break;
        }
    }
}