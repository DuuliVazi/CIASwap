#include <iostream>

using namespace std;

//Function for normal balance check transaction.
void normbal(int x, int y);

/*Function for balance check hacked transaction.
The & symbol is a reference to the previous int
x and int y used from normbal.
*/
void hackbal(int &x, int &y);

//JoesCoffeeShop original account balance.
int JoesCoffeeShop = 200;

//Terrorist original account balance.
int BankofTerror = 1000000;

/*Just a little extra way to break the program.
Could've used return 0.
*/
bool cancel = true;

int main()
{

    //Intro statement for ATM.
    cout << "Greetings Agent, welcome to the Bank of CIA Operations. If you would you like to check balances, press enter: "
         << "\n"
         << "And if not, then press cancel"
         << "\n";

    /*Variable created to ask user if they would
    like to continue to check balances.
    */
    char cont;
    cin >> cont;

    /*Represents enter button and if user selects
    e in program, then balances display.
    */
    if (cont == 'e')
    {
        cout << "Joes Coffee Shop Balance: $" << JoesCoffeeShop << "\n";
        cout << "Bank of Terror Balance: $" << BankofTerror << "\n\n";
    }

    /*Represents the x-cancel button known globally
    in ATM's and if user selects x in program, then
    it breaks program. 
    */
    else if (cont == 'x')
    {
        cancel = false;
    }

    cout << "Displaying the normal balance again: \n";
    //Passes both balances into the normal transaction function.
    normbal(JoesCoffeeShop, BankofTerror);

    //Displays balances again to show nothing changes.
    cout << "Joes Coffee Shop Balance: $" << JoesCoffeeShop << "\n";
    cout << "Bank of Terror Balance: $" << BankofTerror << "\n\n";

    cout << "Agent, you have successfully hacked the transactions. Here are their new balances: \n";
    //Passes both balances into the hacked transaction function.
    hackbal(JoesCoffeeShop, BankofTerror);

    /*Displays the balance from Bank of Terror being switched
    to Joes Coffee Shop.
    */
    cout << "Joes Coffee Shop Balance: $" << JoesCoffeeShop << "\n";
    cout << "Bank of Terror Balance: $" << BankofTerror << "\n";

    return 0;
}

void normbal(int x, int y)
{
    int trade = x;
    x = y;
    y = trade;
}

// Function definition
void hackbal(int &x, int &y)
{
    int trade = x;
    x = y;
    y = trade;
}