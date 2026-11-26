#include <iostream>
using namespace std;

int main() {

  char fc;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> fc;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

switch(fc) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
