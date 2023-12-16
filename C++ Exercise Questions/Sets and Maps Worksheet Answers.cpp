// Question 4.3.1: Pirate's Puzzle Plunder:

#include <iostream>
#include <map>

int main() {
  std::map<std::string, std::string> treasureMap = {
    {"Cursed Cove", "Follow the ghostly glow"},
    {"Hidden Harbor", "Beneath the starry sky"},
    {"Mermaid Lagoon", "Where the siren's song enchants"},
    {"Skull Island", "Beware! A treasure lies within"},
  };
  treasureMap["Hidden Harbor"] = "Sunken treasure under the moonlight";
  
  for (const auto& location : treasureMap) {
    std::cout << location.first << ": " << location.second << std::endl;
  }
  
  return 0;
}



// Question 4.3.2: Magical Menagerie Mayhem:

#include <iostream>
#include <set>
#include <string>

int main() {
  std::set<std::string> creatureAttendees = {"Phoenix", "Dragon", "Mermaid", "Centaur"};
  creatureAttendees.insert("Gryphon");
  int totalAttendees = creatureAttendees.size();
  std::cout << "Total number of magical creatures attending: " << totalAttendees << std::endl;
  
  return 0;
}



// Question 4.3.3: Cosmic Cafe Reservations:

#include <iostream>
#include <set>
#include <map>
#include <string>

int main() {
  std::set<std::string> cosmicVisitors = {"Lunar Lepus", "Nebula Nymph", "Stellar Squid", "Quantum Quokka"};
  std::map<std::string, std::string> diningPreferences = {{"Lunar Lepus","Zero-G Noodles"}, {"Nebula Nymph", "Galactic Gushers"}, {"Stellar Squid", "Celestial Sushi"}, {"Quantum Quokka", "Quantum Quinoa"}};
  for (const auto& visitor : cosmicVisitors) {
    std::cout << visitor << ": " << diningPreferences[visitor] << std::endl;
  }
  
  return 0;
}
