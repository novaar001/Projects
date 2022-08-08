#include <iostream>

int main() {

  double weight;
  int num;
  std::cout <<"Please Enter a weight on earth: ";

  std::cin >> weight;

  std::cout <<"\n I have information for the following planets:\n\n";

  std::cout << "1. Mercury\n";

  std::cout << "2. Venus\n";

  std::cout << "3. Mars\n";

  std::cout << "4. jupiter\n";

  std::cout << "5. saturn\n";

  std::cout << "6. Uranus\n";

  std::cout << "7. neptune\n";

std::cout << "Enter a number to get weight: ";

  std::cin >> num ;

if(num == 1){
  weight = weight* 0.38;
}

else if (num == 2){
  weight = weight * 0.91;
}

else if (num == 3){
  weight = weight * 0.36;
}

else if (num == 4){
    weight = weight * 2.34;
}

else if (num == 5){
    weight = weight * 1.06;
}

else if (num == 6){
weight = weight * 0.92 ;
}

else if (num == 7){
weight = weight * 1.19;
}

else{
    std::cout << "Invalid";
}
std::cout << "\n Your weight: " << weight << "\n";


}
