// A bag of cookies holds 30 cookies. The calorie information on the bag claims there are 10
// "servings" in the bag and that a serving equals 300 calories. Write a program that asks the
// user to input how cookies as the input of the cookies he or she actually ate, then report how
// many total calories were consumed.

#include <iostream>
using namespace std;

int main(){
    int cookies_ate, calorie_percookie = 300/(30/10);
    
    cout << "Enter no. of cookies ate : ";
    cin >> cookies_ate;

    cout << "Total calories consumed : " << calorie_percookie*cookies_ate;
    return 0;
}