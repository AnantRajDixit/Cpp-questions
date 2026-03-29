#include <iostream>

class Tracker {
public:
    Tracker() {
        cout << "Object created" << std::endl;
    }

    ~Tracker() {
        cout << "Object destroyed" << std::endl;
    }
};

int main() {
    Tracker myObj;
    return 0;
}
