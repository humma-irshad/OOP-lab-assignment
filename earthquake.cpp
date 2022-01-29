// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float value;
    cout << ("Enter the richter scale value to acess the damage: ");
    
    cin >> value;
    
    if(value > 0.0 && value < 5.0)
    cout << "Little to no damage";
    else if(value > 5.0 && value < 5.5)
    cout << "Some damage due to earthquake";
    else if(value > 5.5 && value < 6.5)
    cout << "Serious damage: walls may crack or fall";
    else if(value > 6.5 && value < 7.5)
    cout << "Disaster: houses and buildings may collapse";
    else
    cout << "Catastrophe: most buildings destroyed";
}
