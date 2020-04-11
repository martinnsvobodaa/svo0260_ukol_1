#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>

#include "Client.h"
#include "Account.h"
#include "Bank.h"

int main()
{
    Bank b(10, 10);

    Client* c1 = b.CreateClient(1, "Martin Svoboda");
    Account* acc1 = b.CreateAccount(123, c1);
    
    Client* c2 = b.CreateClient(2, "Bohdan Chladic");
    Account* acc2 = b.CreateAccount(456, c2, c1);

    acc2->Deposit(5000);
    acc2->CanWithdraw(1000);
        
    return 0;
}

