#include <iostream>

int main() {
  std::string answer;

  int num=64;
  int inp;

  std::cout<<"Enter value to guess the number:\n";
  std::cin>>inp;

  while(inp !=num){
    std::cout<<"Enter the number again:\n";
    std::cin>>inp;
  }
  std::cout<<"You gussed it correct!";
}
