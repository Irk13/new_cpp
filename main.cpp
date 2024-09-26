#include "include.h"
#include "include2.h"


int main() {
    a = TEST_VAL;
    b = 9;
    ret = test_func(a, b);

    Flagi flagi; 
    std::cout << ret << std::endl;
    std::cout << "Roma Ivanov" << std::endl;
    std::cout << "Olya Ivanova" << std::endl;
    std::cout << "Lera Ivanova" << std::endl;
    std::cout << "Kirill Ivanov" << std::endl;
    std::cout << test_func2(a, b) << std::endl;
    // lalala
    std::cout << flagi.b  << std::endl;
    std::cout << flagi.c  << std::endl;
    std::cout << flagi.d  << std::endl;
    return 0;
}