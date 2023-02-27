#include <iostream>

int add(){

    int x;
    int y;
    std::cout << "Input integer x: ";
    std::cin >> x;
    std::cout << "Input integer y: ";
    std::cin >> y;

    int result = x+y;

    return result;
}

int main() {

    int result0 = add();
    std::cout << "Result: "<<result0 <<std::endl;
    return 0;
}
