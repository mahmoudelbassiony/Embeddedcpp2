#include <iostream>
#include <memory>

void printUseCount(const std::shared_ptr<int>& ptr) {
    std::cout << "Use count in function: " << ptr.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> ptr = std::make_shared<int>(10);
    std::cout << "Use count in main: " << ptr.use_count() << std::endl;

    printUseCount(ptr);

    std::cout << "Use count in main after function call: " << ptr.use_count() << std::endl;

    return 0;
}