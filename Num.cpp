
#include <iostream>
using namespace std;
void printFibonacci(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    //  Fibonacci part 
    int n = 10; 
    printFibonacci(n);

    cout << "Print numbers 1 to 10" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    return 0;
}
