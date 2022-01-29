// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float x, y;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of y: ";
    cin >> y;
    
    if (x > 0 and y > 0)
        cout << "lies in First quadrant";
 
    else if (x < 0 and y > 0)
        cout << "lies in Second quadrant";
 
    else if (x < 0 and y < 0)
        cout << "lies in Third quadrant";
 
    else if (x > 0 and y < 0)
        cout << "lies in Fourth quadrant";
    else
        cout << "lies at origin";
}
