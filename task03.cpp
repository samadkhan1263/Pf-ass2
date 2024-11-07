#include <iostream>
using namespace std;

int main() {
    double priceA = 50.0, priceB = 30.0, priceC = 20.0;
    int quantityA, quantityB, quantityC;

    cout << "Enter the quantity of Product A: ";
    cin >> quantityA;
    cout << "Enter the quantity of Product B: ";
    cin >> quantityB;
    cout << "Enter the quantity of Product C: ";
    cin >> quantityC;

    double total = (priceA * quantityA) + (priceB * quantityB) + (priceC * quantityC);

    
    double finalTotal = (total > 200) ? total * 0.9 : total;

   
    double shipping = (finalTotal < 150) ? 15.0 : 0.0;

    cout << "Total after discount and shipping: $" << finalTotal + shipping << endl;

    return 0;
}
