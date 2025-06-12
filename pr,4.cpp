#include <iostream>
using namespace std;



class BankAccount 
{
protected:
    string accountNumber;
    string accountHolderName;
private:
    double balance;
public:
    BankAccount(string accNo, string holderName, double bal) 
	{
        accountNumber = accNo;
        accountHolderName = holderName;
        balance = bal;
    }

    virtual void deposit(double amount) 
	{
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

    virtual void withdraw(double amount)
	 {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal!" << endl;
    }

    double getBalance() 
	{
        return balance;
    }

    virtual void displayAccountInfo() 
	{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

   
    virtual void calculateInterest()
	 {
        cout << "No interest calculation for base account." << endl;
    }

    virtual ~BankAccount() {}
};


class SavingsAccount : public BankAccount
 {
    double interestRate;
public:
    SavingsAccount(string accNo, string holderName, double bal, double rate)
        : BankAccount(accNo, holderName, bal), interestRate(rate) {}

    void calculateInterest() override 
	{
        double interest = getBalance() * interestRate / 100;
        cout << "Savings Interest: " << interest << endl;
    }

   void displayAccountInfo()  override {
        BankAccount::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


class CheckingAccount : public BankAccount
{
    double overdraftLimit;
public:
    CheckingAccount(string accNo, string holderName, double bal, double overdraft)
        : BankAccount(accNo, holderName, bal), overdraftLimit(overdraft) {}

    void withdraw(double amount) override 
	{
        if (amount <= getBalance() + overdraftLimit)
            BankAccount::withdraw(amount);
        else
            cout << "Withdrawal exceeds overdraft limit!" << endl;
    }

    void checkOverdraft() 
	{
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }

    void displayAccountInfo()  override
	 {
        BankAccount::displayAccountInfo();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};


class FixedDepositAccount : public BankAccount 
{
    int term;
public:
    FixedDepositAccount(string accNo, string holderName, double bal, int termMonths)
        : BankAccount(accNo, holderName, bal), term(termMonths) {}

    void calculateInterest() override 
	{
        double rate = 0.06; 
        double interest = getBalance() * rate * term / 12;
        cout << "Fixed Deposit Interest: " << interest << endl;
    }

    void displayAccountInfo()  override 
	{ 
        BankAccount::displayAccountInfo();
        cout << "Term: " << term << " months" << endl;
    }
};


int main()
 {
 	
 	
    BankAccount* account = nullptr;
    int choice;

    while (true) 
	{
        cout << "\n=== Bank Account Menu ===" << endl;
        cout << "1. Create Savings Account" << endl;
        cout << "2. Create Checking Account" << endl;
        cout << "3. Create Fixed Deposit Account" << endl;
        cout << "4. Deposit" << endl;
        cout << "5. Withdraw" << endl;
        cout << "6. Display Account Info" << endl;
        cout << "7. Calculate Interest" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 8) break;

        switch (choice)
		 {
            case 1: 
			{
                string no, name;
                double bal, rate;
                cout << "Enter Account Number: "; cin >> no;
                cout << "Enter Holder Name: "; cin >> name;
                cout << "Enter Initial Balance: "; cin >> bal;
                cout << "Enter Interest Rate: "; cin >> rate;
                account = new SavingsAccount(no, name, bal, rate);
                cout << "Savings Account Created." << endl;
                break;
            }
            case 2: 
			{
                string no, name;
                double bal, limit;
                cout << "Enter Account Number: "; cin >> no;
                cout << "Enter Holder Name: "; cin >> name;
                cout << "Enter Initial Balance: "; cin >> bal;
                cout << "Enter Overdraft Limit: "; cin >> limit;
                account = new CheckingAccount(no, name, bal, limit);
                cout << "Checking Account Created." << endl;
                break;
            }
            case 3:
			 {
                string no, name;
                double bal;
                int term;
                cout << "Enter Account Number: "; cin >> no;
                cout << "Enter Holder Name: "; cin >> name;
                cout << "Enter Initial Balance: "; cin >> bal;
                cout << "Enter Term (months): "; cin >> term;
                account = new FixedDepositAccount(no, name, bal, term);
                cout << "Fixed Deposit Account Created." << endl;
                break;
            }
            case 4: 
			{
                if (account) 
				{
                    double amt;
                    cout << "Enter Deposit Amount: ";
                    cin >> amt;
                    account->deposit(amt);
                } else 
				{
                    cout << "No account exists!" << endl;
                }
                break;
            }
            case 5:
			 {
                if (account) 
				{
                    double amt;
                    cout << "Enter Withdraw Amount: ";
                    cin >> amt;
                    account->withdraw(amt);
                } else 
				{
                    cout << "No account exists!" << endl;
                }
                break;
            }
            case 6: 
			{
                if (account)
                    account->displayAccountInfo();
                else
                    cout << "No account exists!" << endl;
                break;
            }
            case 7: 
			{
                if (account)
                    account->calculateInterest();
                else
                    cout << "No account exists!" << endl;
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    delete account;
    
    
}
/*
=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 1
Enter Account Number: 101
Enter Holder Name: rameshparikh
Enter Initial Balance: 100000
Enter Interest Rate: 50000
Savings Account Created.

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 2
Enter Account Number: 102
Enter Holder Name: amit
Enter Initial Balance: 500000
Enter Overdraft Limit: 50000
Checking Account Created.

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 3
Enter Account Number: 103
Enter Holder Name: rammehta
Enter Initial Balance: 150000
Enter Term (months): 20000
Fixed Deposit Account Created.

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 4
Enter Deposit Amount: 80000

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 5
Enter Withdraw Amount: 90000

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 6
Account Number: 103
Account Holder: rammehta
Balance: 140000
Term: 20000 months

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 7
Fixed Deposit Interest: 1.4e+07

=== Bank Account Menu ===
1. Create Savings Account
2. Create Checking Account
3. Create Fixed Deposit Account
4. Deposit
5. Withdraw
6. Display Account Info
7. Calculate Interest
8. Exit
Enter choice: 8

--------------------------------
*/