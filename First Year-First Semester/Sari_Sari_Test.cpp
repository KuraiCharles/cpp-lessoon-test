#include <iostream>
using namespace std;

int main() {
    string customerName;
    string itemName;
    double price;
    int quantity;
    double cash;

    cout << "===== ALING NENA'S SARI-SARI STORE =====" << endl;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter item bought: ";
    getline(cin, itemName);

    cout << "Enter price per item: ";
    cin >> price;
    cin.ignore(); // clear the leftover newline so the next getline works properly

    cout << "Enter quantity: ";
    cin >> quantity;
    cin.ignore();

    double total = price * quantity;

    cout << "Enter cash payment: ";
    cin >> cash;
    cin.ignore();

    double change = cash - total;

    cout << endl;
    cout << "===== RECEIPT =====" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "Item: " << itemName << endl;
    cout << "Price per item: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total: " << total << endl;
    cout << "Cash: " << cash << endl;
    cout << "Change: " << change << endl;
    cout << "Salamat sa pagbili! Bisita ulit!" << endl;

    return 0;
}