#include <iostream>
#include <set>

bool hasDuplicateDigits(int num) {
    std::set<int> digits;
    while (num > 0) {
        int digit = num % 10;
        if (digits.find(digit) != digits.end()) {
            return true;
        }
        digits.insert(digit);
        num /= 10;
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (hasDuplicateDigits(num)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
    return 0;
}