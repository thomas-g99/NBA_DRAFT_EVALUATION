#include <iostream>
#include <string>
using namespace std;


int main () {

  int hours;
  int overtime;
  int diff;
  double const Wage = 16.00;
  int const insurance = 10;
  double flat_pay;
  double tax_pay;
  double tax;

  cout << "Enter the amount of hours requied for overtime: " << endl;
  cin >> overtime;

  cout << "Enter the amount of hours workd: " << endl;
  cin >> hours;

  if (hours <= overtime) {
    flat_pay = hours * Wage;
  }
  else {
    diff = hours - overtime;
    flat_pay = overtime * Wage + diff * (1.5 * Wage);
  }
  cout << "Before taxes you earned " << flat_pay << endl;

  tax = 0.06 * flat_pay;
  cout << "You paid, $" << tax << " in social security tax" << endl;

  tax = 0.14 * flat_pay;
  cout << "You paid, $" << tax << " in federal income tax" << endl;

  tax = 0.05 * flat_pay;
  cout << "You paid, $" << tax << " in state income tax" << endl;

  cout << "You paid, $" << 10 << " in insurance" << endl;

  tax_pay = 0.25 * flat_pay;
  tax_pay -= 10;

  cout << "After taxes and insurance you earned " << tax_pay << endl;

}
