// Question 4.2.1: Attraction Galaxy Adventure:

#include <iostream>
#include <vector>
#include <string>
std::vector<std::vector<std::string>> attractions;

void AddNewAttraction(int zone, const std::string& attraction) {
  while (attractions.size() <= zone) {
    attractions.push_back(std::vector<std::string>());
  }
  attractions[zone].push_back(attraction);
}
void RemoveAttraction(int zone, int index) {
  if (zone < attractions.size()) {
    if (index < attractions[zone].size()) {
      attractions[zone].erase(attractions[zone].begin() + index);
    }
  }
}
void DisplayZoneAttractions(int zone) {
  if (zone < attractions.size()) {
    std::cout << "Attractions in Zone " << zone << ":\n";
    for (const auto& attraction : attractions[zone]) {
      std::cout << attraction << std::endl;
    }
  }
}

int main() {
  AddNewAttraction(1, "Space Mountain");
  AddNewAttraction(2, "Galactic Adventure");
  DisplayZoneAttractions(1);
  RemoveAttraction(2, 0);
  AddNewAttraction(2, "Alien Encounter");
  DisplayZoneAttractions(2);
  
  return 0;
}



// Question 4.2.2: Vector Racer Showdown:

#include <iostream>
#include <vector>
#include <string>

std::string VectorRacerWinner(const std::vector<int>& player1RaceProgress, const std::vector<int>& player2RaceProgress) {
  int total1 = 0, total2 = 0;
  for (int progress : player1RaceProgress) {
    total1 += progress;
  }
  for (int progress : player2RaceProgress) {
    total2 += progress;
  }
  if (total1 > total2) {
    return "Player 1 is the winner!";
  } else if (total2 > total1) {
    return "Player 2 is the winner!";
  } else {
    return "It's a tie!";
  }
}



// Question 4.2.3: 

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> ExplorerVector;
  ExplorerVector.push_back("Mysterious Cave");
  ExplorerVector.push_back("Enchanted Forest");
  ExplorerVector.push_back("Hidden Waterfall");
  ExplorerVector.resize(5);
  
  ExplorerVector[1] = "Secret Garden";
  ExplorerVector[3] = "Ancient Ruins";
  for (const auto& landmark : ExplorerVector) {
    std::cout << landmark << std::endl;
  }
  
  return 0;
}
