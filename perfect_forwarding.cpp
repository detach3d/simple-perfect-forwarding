#include <iostream>

void func(int&&) {
    std::cout << "rvalue reference" << std::endl;
}

void func(int&) {
    std::cout << "lvalue reference" << std::endl;
}

template <typename T>
void forwarding(T&& ref) {
    func(std::forward<T>(ref));
}

int main() {
    int a = 20;
    forwarding(10);
    forwarding(a);
}
