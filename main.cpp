#include <iostream>

double soma(double a, double b, double &c, double &f)
{
    c = a + b;
    a = a + b;
    f = a - b;

    return a;
}

int main(int argc, char const *argv[])
{
    double a, b, numero, f;
    a = 2.0;
    b = 1.0;

    a = soma(a, b, numero, f);

    printf("a:%f numero:%f f:%f\n", a, numero, f);
    // std::cout << "Hallo Welt!" << std::endl;
    return 0;
}
