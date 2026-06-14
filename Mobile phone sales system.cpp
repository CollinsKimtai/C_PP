#include <iostream>
#include <iomanip>
using namespace std;

class SaleInformation {
public:
    string customerName;
    string phoneModel;
    int quantityBought;
    float price;

    void inputDetails() {
        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Phone Model Purchased: ";
        getline(cin, phoneModel);

        cout << "Enter Quantity Bought: ";
        cin >> quantityBought;

        cout << "Enter Price Per Phone: ";
        cin >> price;
    }

    double TotalSales() {
        return quantityBought * price;
    }

    void displayReceipt() {
        cout << "\n=====================================";
        cout << "\n       MOBILE PHONE SALES RECEIPT";
        cout << "\n=====================================";
        cout << "\nCustomer Name      : " << customerName;
        cout << "\nPhone Model        : " << phoneModel;
        cout << "\nQuantity Bought    : " << quantityBought;
        cout << "\nPrice Per Phone    : Ksh " << fixed << setprecision(2) << price;
        cout << "\n-------------------------------------";
        cout << "\nTotal Sales Amount : Ksh " << TotalSales();
        cout << "\n=====================================" << endl;
    }
};

int main() {
    SaleInformation sale;

    sale.inputDetails();
    sale.displayReceipt();

    return 0;
}