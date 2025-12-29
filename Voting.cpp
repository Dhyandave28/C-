#include <iostream>

int main() {
  int age=12;
  bool citizen = true;
  bool registered = true;

  if(age >=18 && citizen == true && registered == true){
    std::cout<< "Your can vote!";
  }
  else if (age<18){
    std::cout<<"You are not eligible to vote.";
  }
  else if(citizen == false){
    std::cout<<"You are not eligible to vote.";
  }
  else if(registered == false){
    std::cout<<"You need to register first.";
  }
  else{
    std::cout<<"You do not meet requirement.";
  }
}
