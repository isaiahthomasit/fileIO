#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
  std::ifstream file; // creates file-input stream called 'file'
		      
  file.open("data.csv"); // opens data.csv using the file-input stream

  std::string line; // creates string variable called 'line'

  while (std::getline(file, line)){
     // read each line of code
    std::stringstream ss(line);
    
    // separate line into three pieces
    std::string first;
    std::string second;
    std::string text;
    
    std::getline(ss, first, ','); // keep reading until you hit a comma
    std::getline(ss, second, ',');
    std::getline(ss, text);

      // std::cout << first << std::endl;
      // std::cout << second << std::endl; // ss knows when you've already read something
				           // ss starts where you left off
      // std::cout << text << std::endl;
    
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

    for (int i = 0; i < total; i++){ // keep going as long as i is less than total
      std::cout << text << " "; // the quotes add space between the printed texts
    } 
    
    std::cout << std::endl;

  }

}
