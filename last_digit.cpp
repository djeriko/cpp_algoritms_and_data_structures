#include <string>
#include <math.h>
#include <iostream>

int last_digit(const std::string &str1, const std::string &str2) {
  
  int lastDigit = std::stoi(str1.substr( str1.length() - 1 ));
  int coupleDigits = std::stoi(str2.substr( str2.length() - 2 ));
  
  if (coupleDigits % 4== 0) {
    return (int)pow(lastDigit, 4) % 10;
  }

  int result = (int)pow(lastDigit, coupleDigits % 4) % 10  ;
  std::cout << coupleDigits << std::endl;
  std::cout << coupleDigits % 4 << std::endl;
  return result;
}

int main () {
  std::cout << last_digit("1", "2"); 
  return 0;  
}