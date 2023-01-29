#pragma once

// Tested code
class Wallet
{
public:
    Wallet();
    virtual ~Wallet();
    void addBalance(int sum);
    int getBalance();
    void setBalance(int balance);

private:
    int m_balance;
};