// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float weight_lb, height_in, bmi;
    
    cout << "Enter your weight (in pounds): ";
    cin >> weight_lb;
    
    cout << "Enter your height (in inches): ";
    cin >> height_in;
    
    bmi = 703 * weight_lb / height_in;
    
    if(bmi < 18.5)
        cout << "You are underwight";
    else if(bmi >= 18.5 or bmi <= 24.9)
        cout << "Your bmi is normal";
    else if(bmi >= 25.0 or bmi <= 29.9)
        cout << "You are overweight";
    else
        cout << bmi, "You are obese";
}
