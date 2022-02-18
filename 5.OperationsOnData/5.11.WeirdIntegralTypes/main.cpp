#include <iostream>

int main()
{
    short int var1 { 10 };   // 2 bytes
    short int var2 { 20 };

    char var3 { 40 };   // 1
    char var4 { 50 };

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    // complier will change the variables to int in this case
    // auto result1 = var1 + var2 ;
    // auto result2 = var3 + var4;

    // and here it won't change
    short result1 = var1 + var2;
    char result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl;   // 4
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;   // 4

    return 0;
}