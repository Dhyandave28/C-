#include <iostream>

int main() {
  
  int ques1;
  int ques2;
  std::string ques3;
  int points =0;

  std::cout<<"Q1) What is the name of the world's longest river? 💧\n 1) Missouri River \n 2) Nile \n 3) Amazon River \n 4) Yangtze River \n";
  std::cin >> ques1;
  
  std::cout<<"Q2) How many bones are in the human body? 🦴 \n1) 92 \n2) 150 \n3) 206 \n4) 10 \n";
  std::cin>>ques2;

  std::cout<<"Q3) What food never spoils?(Answer in one word only)😷 \nType your answer: ";
  std::cin>>ques3;

  if(ques1==2){
    std::cout<<"Your 1st answer is correct.\n";
    points =+5;
  }
  else{
    std::cout<<"Please try again.";
  }

  if(ques2 ==3){
    std::cout<<"Your 2nd answer is correct. \n";
    points +=5;

  }
  else{
    std::cout<<"Please try again.";
  }

  if(ques3 == "honey" || ques3 =="Honey"){
    std::cout<<"Your 3rd answer is correct.\n";
    points +=5;
  }
  else{
    std::cout<<"Please try again.";
  }

  std::cout<<"Your total points are "<< points;


 
}
