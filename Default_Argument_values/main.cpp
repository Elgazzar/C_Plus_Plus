#include <iostream>


double calc_cost(double base_cost, double tax_rate = 0.06);

int main() 
{
    double cost {0};
    cost = calc_cost(200);
    std::cout << "Cost is : " << cost << std::endl;

    cost = calc_cost(100, 0.08);
    std::cout << "Cost is : " << cost << std::endl;
    return 0;
}


double calc_cost(double base_cost, double tax_rate)
{
    return base_cost += (base_cost * tax_rate);
}