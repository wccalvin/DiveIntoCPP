#include <iostream>

int main() {
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0;

  std::cout << "The Sorting Hat Quiz!\n";

  // Q1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << std::endl;
  std::cout << "  (1) The Good\n";
  std::cout << "  (2) The Great\n";
  std::cout << "  (3) The Wise\n";
  std::cout << "  (4) The Bold\n";
  std::cout << std::endl;
  std::cout << "Enter your choice: ";
  std::cin >> answer1;
  if (answer1 == 1) {
    hufflepuff += 1;
  } else if (answer1 == 2) {
    slytherin += 1;
  } else if (answer1 == 3) {
    ravenclaw += 1;
  } else if (answer1 == 4) {
    gryffindor += 1;
  } else {
    std::cout << "Invalid input.\n";
  }
  std::cout << std::endl;
  std::cout << "-------\n";
  std::cout << std::endl;

  // Q2
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << std::endl;
  std::cout << "  (1) Dawn\n";
  std::cout << "  (2) Dusk\n";
  std::cout << std::endl;
  std::cout << "Enter your choice: ";
  std::cin >> answer2;
  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
  } else if (answer2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
  } else {
    std::cout << "Invalid input.\n";
  }
  std::cout << std::endl;
  std::cout << "-------\n";
  std::cout << std::endl;

  // Q3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << std::endl;
  std::cout << "  (1) The violin\n";
  std::cout << "  (2) The trumpet\n";
  std::cout << "  (3) The piano\n";
  std::cout << "  (4) The drum\n";
  std::cout << std::endl;
  std::cout << "Enter your choice: ";
  std::cin >> answer3;
  switch (answer3) {
    case 1:
      slytherin += 1;
      break;
    case 2:
      hufflepuff += 1;
      break;
    case 3:
      ravenclaw += 1;
      break;
    case 4:
      gryffindor += 1;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }
  std::cout << std::endl;
  std::cout << "-------\n";
  std::cout << std::endl;

  // Q4
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << std::endl;
  std::cout << "  (1) The wide, sunny grassy lane\n";
  std::cout << "  (2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  (3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  (4) The cobbled street lined (ancient buildings)\n";
  std::cout << std::endl;
  std::cout << "Enter your choice: ";
  std::cin >> answer4;
  switch (answer4) {
    case 1:
      hufflepuff += 1;
      break;
    case 2:
      slytherin += 1;
      break;
    case 3:
      gryffindor += 1;
      break;
    case 4:
      ravenclaw += 1;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  // find the house with highest answer
  int max = 0;
  std::string house;
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

  return 0;
}