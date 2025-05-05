#include <cstdlib>
#include <iostream>

int main() {
  std::cout << "MAGIC 8-BALL:\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer << std::endl;

  switch (answer) {
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "It is decidedly so.\n";
      break;
    case 2:
      std::cout << "Without a doubt.\n";
      break;
    case 3:
      std::cout << "Yes - definitely.\n";
      break;
    case 4:
      std::cout << "Most likely.\n";
      break;
    case 5:
      std::cout << "Concentrate and ask again.\n";
      break;
    case 6:
      std::cout << "Better not tell you now.\n";
      break;
    case 7:
      std::cout << "Reply hazy, try again.\n";
      break;
    case 8:
      std::cout << "My sources say no.\n";
      break;
    default:
      std::cout << "Very doubtful.\n";
  }
  return 0;
}