// Name:Wilbert Rodriguez
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  //Added double variables so decimals can be inserted.
  double mealcost,waitertip,taxes;

  std::cout << "Welcome to the Restaurant Bill calculator!\n";
  std::cout << "What is the total meal cost? ";
  std::cin >> mealcost;
  taxes=mealcost*.0775;
  waitertip=mealcost*.20;
  //The total cost was added later so no unexpected prices appeared.
  double totalcost=mealcost+taxes+waitertip;
  //Added \n at the end so the code would move on to the next line.
  std::cout << "Tax:        $" << taxes << "\n";
  std::cout << "Tip:        $" << waitertip << "\n";
  std::cout << "Total Bill: $" << totalcost << "\n";

}
