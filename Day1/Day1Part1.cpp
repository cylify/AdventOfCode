#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;
typedef long long ll;


int main() {
    ifstream day1("day1Input.txt");

    int calories;
    string current;

    vector<int> allCalories;

    while(getline(day1, current)) {
        if(current.empty()) {
            allCalories.push_back(calories);
            calories = 0;
        } else {
            calories += stoi(current);
        }
    }

    int maxCal = *max_element(allCalories.begin(), allCalories.end());


    cout << maxCal;

}