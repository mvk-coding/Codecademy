#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  cout << "MAGIC 8-BALL:\n\n";
  
  //set random number from 0-19
  srand(time(NULL));
  int answer = std::rand() % 20;
  
  //all 20 random answers
  switch(answer) {
    case 0:
      cout << "It is certain.";
      break;
    case 1:
      cout << "It is decidedly so.";
      break;
    case 2:
      cout << "Without a doubt.";
      break;
    case 3:
      cout << "Yes - definitely.";
      break;
    case 4:
      cout << "You may rely on it.";
      break;
    case 5:
      cout << "As I see it, yes.";
      break;
    case 6:
      cout << "Most likely.";
      break;
    case 7:
      cout << "Outlook good.";
      break;
    case 8:
      cout << "Yes.";
      break;
    case 9:
      cout << "Signs point to yes.";
      break;
    case 10:
      cout << "Reply hazy, try again.";
      break;
    case 11:
      cout << "Ask again later.";
      break;
    case 12:
      cout << "Better not tell you now.";
      break;
    case 13:
      cout << "Cannot predict now.";
      break;
    case 14:
      cout << "Concentrate and ask again.";
      break;
    case 15:
      cout << "Don't count on it.";
      break;
    case 16:
      cout << "My reply is no.";
      break;
    case 17:
      cout << "My sources say no.";
      break;
    case 18:
      cout << "Outlook not so good.";
      break;
    case 19:
      cout << "Very doubtful.";
      break;
  }

}
