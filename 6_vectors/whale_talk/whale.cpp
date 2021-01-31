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

    //double the e's and u's 
    if(input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }

    //check if a character is a vowel
    for(int j = 0; j < vowels.size(); j++) {
      if(input[i] == vowels[j]){
        result.push_back(input[i]);
      }
    }

    //check if a character is a form of punctuation
    for(int k = 0; k < punctuation.size(); k++) {
      if(input[i] == punctuation[k]){
        result.push_back(input[i]);
      }
    }
  }

  //print out the result
  for(int l = 0; l < result.size(); l++) {
    std::cout << result[l];
  }

  std::cout << "\n";

}
