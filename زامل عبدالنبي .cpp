#include <iostream>  // cout, endl
#include <string>    // std::string
using namespace std;

class Animals {
public:
    string color;
    int legs;
};

int main() {
    Animals cat;
    Animals lion;
    Animals elephant;

    cat.color = "black";
    cat.legs = 4;

    elephant.color = "grey";
    elephant.legs = 4;

    lion.color = "yellow";
    lion.legs = 4;

    cout << "Cat color: " << cat.color << ", legs: " << cat.legs << endl;
    cout << "Elephant color: " << elephant.color << ", legs: " << elephant.legs << endl;
    cout << "Lion color: " << lion.color << ", legs: " << lion.legs << endl;

    return 0;
}