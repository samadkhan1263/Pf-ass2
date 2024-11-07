#include <iostream>
#include <string>
using namespace std;

int main() 
{

    double laptops = 900.0, laptopaccessories = 350.0, laptopBags = 240.0;
    int stockA = 10, stockB = 5, stockC = 8;
    int quantityA, quantityB, quantityC;

    cout << "Enter the quantity of laptops : ";
    cin >> quantityA;


    if (quantityA > stockA) {
        cout << "Not enough stock";
        quantityA = stockA;
    }

    cout << "Enter the quantity of laptopaccessories : ";
    cin >> quantityB;


    if (quantityB > stockB) {
        cout << "Not enough stock";
        quantityB = stockB;
    }

    cout << "Enter the quantity of laptopBags : ";
    cin >> quantityC;


    if (quantityC > stockC) {
        cout << "Not enough stock";
        quantityC = stockC;
    }

    double total = (laptops * quantityA) + (laptopaccessories * quantityB) + (laptopBags * quantityC);
    
    double finalTotal = (total > 2000) ? total * 0.9 : total;

    
    double shipping = (finalTotal < 1500) ? 150.0 : 0.0;
    double totalWithShipping = finalTotal + shipping;

 
    int loyaltyPoints = (totalWithShipping > 3000) ? 50 : 20;


    int paymentMethod;
    cout << "Select a payment method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> paymentMethod;
    double transactionFee = (paymentMethod == 1) ? totalWithShipping * 0.02 :
                            (paymentMethod == 2) ? totalWithShipping * 0.03 : 0.0;
    double totalAfterPayment = totalWithShipping + transactionFee;


    int customerType;
    cout << "Enter customer type (1 for Regular, 2 for VIP): ";
    cin >> customerType;
    double finalAmount = (customerType == 2) ? totalAfterPayment * 0.95 : totalAfterPayment;


    string couponCode;
    cout << "Enter a coupon code (if any): ";
    cin >> couponCode;
    double couponDiscount = (couponCode == "SAVE10") ? 100.0 : 0.0;
    double totalAfterCoupon = finalAmount - couponDiscount;


    int location;
    cout << "Enter your location (1, 2, or 3): ";
    cin >> location;
    double taxRate = (location == 1) ? 0.05 : (location == 2) ? 0.10 : 0.08;
    double totalWithTax = totalAfterCoupon * (1 + taxRate);


    cout << "\nOrder Summary:\n";
    cout << "laptops (x" << quantityA << "): $" << laptops * quantityA << endl;
    cout << "laptopaccessories (x" << quantityB << "): $" << laptopaccessories * quantityB << endl;
    cout << "laptopBags (x" << quantityC << "): $" << laptopBags * quantityC << endl;


    cout << "Subtotal: $" << total << endl;

    cout << "Discount: $" << total - finalTotal << endl;

    cout << "Shipping: $" << shipping << endl;

    cout << "Transaction Fee: $" << transactionFee << endl;

    cout << "Coupon Discount: $" << couponDiscount << endl;

    cout << "Sales Tax: $" << totalWithTax - totalAfterCoupon << endl;

    cout << "Total Amount to Pay: $" << totalWithTax << endl;

    cout << "Loyalty Points Earned: " << loyaltyPoints << endl;


    return 0;
}