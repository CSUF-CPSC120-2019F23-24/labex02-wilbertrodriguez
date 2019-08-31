// Name:Wilbert Rodriguez
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double mealcost,waitertip,taxes;

  std::cout << "Welcome to the Restaurant Bill calculater!\n";
  std::cout << "What is the total meal cost? ";
  std::cin >> mealcost;
  taxes=mealcost*.0775;
  waitertip=mealcost*.20;
  double totalcost=mealcost+taxes+waitertip;
  std::cout << "Tax:        $" << taxes << "\n";
  std::cout << "Tip:        $" << waitertip << "\n";
  std::cout << "Total Bill: $" << totalcost << "\n";

}
