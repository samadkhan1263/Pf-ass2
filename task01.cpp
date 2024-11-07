#include <iostream>
using namespace std;

int main() {
    double laptop = 50.0;              
    double laptopAccessories = 30.0;   
    double laptopBag = 20.0;           
    int quantityA, quantityB, quantityC;

    cout << "Enter the quantity of Laptops: ";
    cin >> quantityA;
    cout << "Enter the quantity of Laptop Accessories: ";
    cin >> quantityB;
    cout << "Enter the quantity of Laptop Bags: ";
    cin >> quantityC;

    double total = (laptop * quantityA) + (laptopAccessories * quantityB) + (laptopBag * quantityC);
   cout << "Total cost: $" << total << std::endl;

    return 0;
}