#include <iostream>
#include <vector>
#include <memory>

using std::cout;
using std::endl;

/// auto as return type for a function
template <typename F, typename T>
void applyy(F&& f, T arg)
{
    f(arg);
}

int main() 
{
    /// Using Auto Whenever possible
    /// using syntax auto name = expression
    auto i      = 10;                // int
    auto d      = 10.0;              // double
    auto ptr    = "somestring";    // char *
    auto list   = {1};            // initalizer list and not int.

    /// using auto commiting to a specific type
    auto b      = new char[10]{0};   // char *
    auto str    = std::string{"somestring"};
    auto vecInt = std::vector<int>{10,20,30,40};
    auto sptr   = std::make_shared<int>(10);

    ///auto to declare names lamda function
    auto lambda  = [](){ std::cout << " calling lambda" << std::endl; };
    lambda();

    /// auto for lambda parameters
    auto lambda2 = [](auto const a) { std::cout << a << std::endl; };
    lambda2(10);

    applyy(lambda2, 10);

    return 0;
}
