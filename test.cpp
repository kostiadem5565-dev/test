#include <iostream>
#include <list>
int main()
{
    int A = 3;
    int B = 2;
    std::list <int> lis = {A, B};
    for (int i : lis)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}