#include <iostream>

int main() {
  
  int pin;
  std::cout<<"---------------\n";
  std::cout<< "Bank of Dhyan \n";
  std::cout<<"---------------\n";
  std::cout<< "Enter you PIN: ";
  std::cin>>pin;

  while(pin != 1234){
    std::cout<<"Incorrect PIN.\n\nEnter you pin again:";
    std::cin>> pin;
  }
  if(pin == 1234){
    std::cout<<"PIN accepted!";
  }
}
