#include <iostream>

class Swapping
{
    int a, b, tmp;

public:
    Swapping(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend void swapping(Swapping &);
};
void swapping(Swapping &first)
{
    std::cout << "\nbefor swap: " << first.a << " " << first.b;
    first.tmp = first.a;
    first.a = first.b;
    first.b = first.tmp;
    std::cout << "\nafter swap: " << first.a << " " << first.b;
}

int main()
{
    Swapping object(4, 5);
    swapping(object);
}