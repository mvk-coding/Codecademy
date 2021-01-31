#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?

  //get string as input
  std::string input = "";
  std::cout << "What sentence would you like to translate to whale talk?\n";
  getline (std::cin, input);

  //vector of vowels
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  vowels.push_back('A');
  vowels.push_back('E');
  vowels.push_back('I');
  vowels.push_back('O');
  vowels.push_back('U');

  //vector of punctuation
  std::vector<char> punctuation;
  punctuation.push_back(',');
  punctuation.push_back('.');
  punctuation.push_back(';');
  punctuation.push_back(':');
  punctuation.push_back('!');
  punctuation.push_back('?');
  punctuation.push_back(' ');

  //to store the vowels found
  std::vector<char> result;
  
  //looping through the sentence
  for(int i = 0; i < input.size(); i++) {

    //check if a character is a vowel
    for(int j = 0; j < vowels.size(); j++) {
      if(input[i] == vowels[j]){
        result.push_back(input[i]);

        //double e's
        if(input[i] == 'e' || input[i] == 'E') {
          result.push_back('e');
        }

        //double u's
        if(input[i] == 'u' || input[i] == 'U') {
          result.push_back('u');
        }

        //skip the rest of the loop for this character
        break;
      }
    }

  //print out the result
  for(int l = 0; l < result.size(); l++) {
    std::cout << result[l];
  }

  std::cout << "\n";

}
