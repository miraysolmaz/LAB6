#include <iostream>
#include <cmath>

using namespace std;

//Question 3
int calculateFactorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * calculateFactorial(num - 1);
}
//Question 4
double calculateSum() {

    int valueOfn;
    cout << "Enter your number: ";
    cin >> valueOfn;

    double sum = 0;
    for (int i = 1; i <= valueOfn; i++) {
        double term = pow(-1, i + 1) / i;
        sum += term;
    }
    return sum;
}

int main() {
    int valueOfn, valueOfx;
    cout << "Enter the value of n: ";
    cin >> valueOfn;
    cout << "Enter the value of x: ";
    cin >> valueOfx;

    double* termsArray = new double[valueOfn];
    for (int i = 1; i <= valueOfx; i++) {
        termsArray[i - 1] = pow(valueOfn, i) / calculateFactorial(i);
    }

    double result = 1;

    for (int i = 0; i < valueOfx; i++) {
        result += termsArray[i];
    }
  
    cout << "Result is: " << result << endl;
    delete[] termsArray;

    double sum = calculateSum();
    cout << "Sum: " << sum << endl;
    return 0;
}