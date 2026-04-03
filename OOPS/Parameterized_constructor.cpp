#include <iostream>
#include <string>

class Player {
public:
    std::string name;
    int score;

    // Parameterized Constructor
    Player(std::string n, int s) {
        name = n;
        score = s;
        std::cout << "Constructor called for " << name << std::endl;
    }

    void display() {
        std::cout << "Player: " << name << " | Score: " << score << std::endl;
    }
};

int main() {
    // Objects created using the parameterized constructor
    Player p1("Alice", 95);
    Player p2("Bob", 88);

    p1.display();
    p2.display();

    return 0;
}
