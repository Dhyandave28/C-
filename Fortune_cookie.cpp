#include <iostream>
#include <cstdlib>

int main() {

  srand(time(NULL));

  int answer = std::rand()%10;
  
  if(answer ==0 ){
    std::cout<<"Don't pursue happiness – create it.";
  }
  else if (answer ==1){
    std::cout<<"All things are difficult before they are easy.";
  }
  else if(answer ==2){
    std::cout<<"The early bird gets the worm, but the second mouse gets the cheese.";
  }
  else if(answer ==3){
    std::cout<<"Someone in your life needs a letter from you.";
  }
  else if(answer ==4){
    std::cout<<"The fortune you search for is in another cookie.";
  }
  else{
    std::cout<<"Help! I'm being held prisoner in a Chinese bakery!";
  }
  
}
