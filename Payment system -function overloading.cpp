#include <iostream>
#include <iomanip>

using namespace std;

class Payment {
public:
    // Cash payment: integer amount
    void processPayment(int amount) {
        cout << fixed << setprecision(2);
        cout << "Cash Payment -> Final Amount: " << static_cast<double>(amount) << "\n";
    }

    // Card payment: amount + transaction fee
    void processPayment(double amount, double fee) {
        double finalAmount = amount + fee;
        cout << fixed << setprecision(2);
        cout << "Card Payment -> Final Amount (with fee): " << finalAmount << "\n";
    }

    // Mobile payment: amount + fee - discount
    void processPayment(double amount, double fee, double discount) {
        double finalAmount = amount + fee - discount;
        cout << fixed << setprecision(2);
        cout << "Mobile Payment -> Final Amount (with fee & discount): " << finalAmount << "\n";
    }
};

int main() {
    Payment pay;

    pay.processPayment(2000);                // Cash
    pay.processPayment(5000.00, 120.00);     // Card
    pay.processPayment(3500.00, 50.00, 200.00); // Mobile money

    return 0;
}