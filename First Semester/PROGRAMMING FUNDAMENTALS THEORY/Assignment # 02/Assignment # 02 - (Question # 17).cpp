#include <iostream>
using namespace std;

int arr[10] = {2, 3, 4, 5, 10, 11, 13, 15, 17, 20};

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfPrimes() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int result = sumOfPrimes();
    cout << "The sum of prime numbers in the array is: " << result << endl;
    return 0;
}
