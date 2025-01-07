
//Description: this program will track an inventory of items.

#include <iostream>
#include <iomanip>
using namespace std;

struct Item {
    string name;
    double cost;
    int quantity;
};

int main()
{
    const int SIZE = 3;
    Item inventory[SIZE];
    int totalItems = 0,
        cheapestIndex = 0;
    double totalValue = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Product #" << (i + 1) << endl;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, inventory[i].name);

        cout << "Enter cost: ";
        cin >> inventory[i].cost;
        cout << "Enter quantity: ";
        cin >> inventory[i].quantity;

        totalItems += inventory[i].quantity;

        totalValue += inventory[i].cost * inventory[i].quantity;

        if (inventory[i].cost < inventory[cheapestIndex].cost)
        {
            cheapestIndex = i;
        }

        cout << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Total number of items   : " << totalItems << endl;
    cout << "Total value of inventory: $" << totalValue << endl;
    cout << "Cheapest item           : " << inventory[cheapestIndex].name << endl;

    return 0;
}
