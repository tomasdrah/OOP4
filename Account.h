#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Client.h"
using namespace std;

class Account
{
private:
    static int objectCount;

    int number;
    double balance;
    double interestRate;

    Client* owner;
    Client* partner;

public:
    static int GetobjectCount();

    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    Account(int n, Client* c, Client* p);
    Account(int n, Client* c, Client* p, double ir);
    ~Account();

    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    Client* GetPartner();
    bool CanWithdraw(double a);

    void Deposit(double a);
    void Withdraw(double a);
    void AddInterest(double standart);
};

