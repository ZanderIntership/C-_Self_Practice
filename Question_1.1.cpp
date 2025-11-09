

#include <iostream>

using namespace std;

void ComputerBill(int price) {

    price = price * 1.14;
    cout << "The price is " << price << "\n";

}


void ComputerBill(float price, int quantity) {

    price = price * quantity;
    price = price * 1.14;
    cout << "The price is " << price << "\n";

}

void ComputerBill(double price, int quantity, double coupom) {

    price = price * quantity;
    price = price - coupom;
    price = price * 1.14;
    cout << "The price is " << price << "\n";
}


int main()
{
    ComputerBill(123);
    ComputerBill(123.12,20);
    ComputerBill(123.72639271, 20, 202.22);
}


