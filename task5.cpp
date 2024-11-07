#include <iostream>
using namespace std;

int main() {
    double laptops = 50.0, laptopaccessories = 30.0, laptopBags = 20.0;
    int quantityA, quantityB, quantityC;

    cout<< "Enter the quantity of Laptops: ";
    cin>> quantityA;
    cout << "Enter the quantity of Laptop Accessories: ";
    cin >> quantityB;
    cout << "Enter the quantity of Laptop Bags: ";
   cin >> quantityC;

    double total = (laptops* quantityA) + (laptopaccessories * quantityB) + (laptopBags * quantityC);

   
    double finalTotal = (total > 200) ? total * 0.9 : total;

   
    double shipping = (finalTotal < 150) ? 15.0 : 0.0;
    double totalWithShipping = finalTotal + shipping;

    
    int loyaltyPoints = (totalWithShipping > 300) ? 50 : 20;

   cout << "Total after discount and shipping: $" << totalWithShipping <<endl;
   cout << "Loyalty points earned: " << loyaltyPoints <<endl;

    return 0;
}
