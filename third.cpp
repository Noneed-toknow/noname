#include<iostream>
int main()
{
    int a, b;
    std::cout<<"Enter the values of a and b respectively: " << std::endl;
    std::cin>>a>>b;
    char op;
    std::cout<<"What kind of operation do you want to perform on the 2 no.?"<<"\n"<<"Enter either '+', '-', '*', or '/'" << std::endl;
    std::cin>>op;
    if (op = '-')
    {
        std::cout<<"The subtraction of the two no. comes out to be: " << a - b << std::endl;
    }
    else if (op = '+')
    {
        std::cout<<"The sum of the two no. comes out to be: " << a+b << std::endl;
    }
    else if (op = '*')
    {
        std::cout<<"The product of the two no. comes out to be: " << a*b << std::endl;
    }
    else if (op = '/')
    {
        std::cout<<"The sum of the two no. comes out to be: " << a/b << std::endl;
    }
    else
    {
        std::cout << "Enter a valid operation" << std::endl;
    }
    std::cout<< "Thankyou for using out calculator" << std::endl;
        return 0;
}
