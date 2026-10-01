#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(){

  std::ifstream file;
		      
  file.open("data.csv");

  std::string line; 

  while (std::getline(file, line)){
     // READ EACH LINE INSIDE THE FILE
    std::stringstream ss(line);
    
    // SEPARATE EACH LINE INTO STRINGS
    std::string first;
    std::string second;
    std::string text;
    
    std::getline(ss, first, ',');
    std::getline(ss, second, ',');
    std::getline(ss, text);
      
    // CONVERT STRINGS TO INTEGERS
    int int1;
    int int2;
    
    std::stringstream intconvert1(first);
    intconvert1 >> int1;

    std::stringstream intconvert2(second);
    intconvert2 >> int2;

    // ADD THE TWO INTEGERS
    int total;
    total = int1 + int2;

    // OUTPUT TEXT TO TOTAL
    for (int i = 0; i < total; i++){
      std::cout << text << " ";
    }
    std::cout << std::endl;
  }
}
