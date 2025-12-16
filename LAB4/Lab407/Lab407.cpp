#include <iostream>
#include <string>
#include <limits> 

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "--- Safe Prime Checker ---" << endl;

    while (true) {
        cout << "\nEnter positive integer (0 to exit): ";
        cin >> num;

        
        if (cin.fail()) {
            cout << "Error: Invalid !" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue; 
        }
      


        if (num == 0) break;

        if (isPrime(num))
            cout << ">> " << num << " is a PRIME number." << endl;
        else
            cout << ">> " << num << " is NOT Prime." << endl;
    }
    return 1;
}