#include <iostream>
using namespace std;


int main() {

    string productName[5] = {"Rice (kg)", "Sardines", "Softdrink","Instant Noodles", "Egg"};
    double productPrices[5] = {58.00, 25.00, 20.00, 15.00, 8.00};
    int productStock[5] = {50, 30, 40, 100, 60};

    int choice;
    int choice_Pr;
    do {
        cout << "\n=== SARI-SARI STORE ===\n";
        cout << "1. View Products\n";
        cout << "2. Buy Item\n";
        cout << "3. Restock Item\n";
        cout << "4. View Sales Summary\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:

                //This case is for showing the a product list
                cout << "\n-- View Products --\n";
                for (int i = 0; i < 5; i++) {
                    cout << i+1 << ". " << productName[i] << "- Php" << productPrices[i] << " (" << productStock[i] << " In Stock" << ")" << endl;
                }
                break;

            case 2:
                
                //This case is for buying item in the store
                cout << "\n-- Buy Item --\n";

                cout << "Input Product No. " << endl;
                cin >> choice_Pr;

                int index = choice_Pr - 1;
                if (index >= 0 && index < 5) {
                    cout << "You selected: " << productName[index] << endl;
                }else{
                    cout << "Invalid input" << endl;
                }
                break;
            case 3:
                cout << "\n-- Restock Item --\n";
                // code for restocking goes here
                break;
            case 4:
                cout << "\n-- Sales Summary --\n";
                // code for sales summary goes here
                break;
            case 5:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice > 5);

    return 0;
}
