//we can pass a struct to a function by writing writing our defined name of sub struct in argument and writing
//our data type i.e our struct itself along with a nickname for our sub struct in parameter.
//we can pass by either value or reference.
#include <iostream>
#include <string>

struct Player {
    std::string name;
    int level;
    int health;
    double combatScore;
};

// Function 1: Modifies the original player stats using a Reference (&)
void levelUp(Player &p) {
    p.level = p.level + 1;
    p.health = p.health + 20;       // Boost health on level up
    p.combatScore = p.combatScore * 1.1; // 10% bonus to combat score
    
    std::cout << " LEVEL UP! " << p.name << " reached Level " << p.level << "! \n\n";
}

// Function 2: Just reads the data to print it (Pass by value is fine here)
void displayProfile(Player p) {
    std::cout << "=== PLAYER PROFILE ===\n";
    std::cout << "Name:   " << p.name << "\n";
    std::cout << "Level:  " << p.level << "\n";
    std::cout << "HP:     " << p.health << "\n";
    std::cout << "ACS:    " << p.combatScore << "\n";
    std::cout << "======================\n\n";
}
void takedamage(Player &p, int damage){
     p.health-=damage;
     std::cout<<"Phoenix took "<<damage<<" damage"<<"\n\n";
}

int main() {
    // Setting up our agent
    Player agent1;
    agent1.name = "Phoenix";
    agent1.level = 1;
    agent1.health = 100;
    agent1.combatScore = 210.5;

    // 1. Display initial stats
    displayProfile(agent1);

    // 2. Pass to the modification function
    levelUp(agent1);

    // 3. Display stats again to see the changes
    displayProfile(agent1);

    takedamage(agent1, 67);

    displayProfile(agent1);
  
    return 0;
}