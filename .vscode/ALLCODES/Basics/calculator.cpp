# include <iostream>
using namespace std;
int Add(int *num1,int *num2){
    return *num1 + *num2;
}
int subs(int *num1,int *num2){
  if( num1>num2){
    return *num1 - *num2;
  }
  else 
    return *num2 - *num1;
}
int main() {

  char op;
  int num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout<<Add(&num1,&num2);
      break;

    case '-':
      cout<<subs(&num1,&num2);
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
