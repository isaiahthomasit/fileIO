#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
  std::ifstream file;
		      
  file.open("data.csv");

  std::string line; 

  while (std::getline(file, line)){
     // read each line of code
    std::stringstream ss(line);
    
    // separate line into three pieces
    std::string first;
    std::string second;
    std::string text;
    
    std::getline(ss, first, ',');
    std::getline(ss, second, ',');
    std::getline(ss, text);

          
    // convert strings to integers
    int int1;
    int int2;
    
    std::stringstream intconvert1(first);
    intconvert1 >> int1;

    std::stringstream intconvert2(second);
    intconvert2 >> int2;

    // adding the integers
    int total;
    total = int1 + int2;

    for (int i = 0; i < total; i++){
      std::cout << text << " ";
    } 
    
    std::cout << std::endl;

  }

}
