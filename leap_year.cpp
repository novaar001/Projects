#include <iostream>

int main() {

 int year = 0;
  std::cout << "Enter a year in 4 digits: ";
  std::cin >> year;

   if( year < 1000 || year > 9999){
    std::cout << "Invalid Entery.\n";
   }

    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        std::cout << year<<"\n";
        std::cout << "Its not a Leap year\n";
    }
    else{
        std::cout << year << "\n";
        std::cout << "Its a leap year.\n";

    }
}
