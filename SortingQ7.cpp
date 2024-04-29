#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertNewElement(vector<int>& sortedVector, int x) { // Passes the vector by reference
    /* int l = 0;
    int r = sortedVector.size() - 1;
    int pos = 0;
    while (l != r){
        int pos = (l + r)/2;
        if (sortedVector[pos] < x){
            cout << "This works" << endl;
        }
        else if (sortedVector[pos] > x){
            cout << "This also works" << endl;
        }
        else{

        }
    }
    cout << l << " " << r << endl;
    cout << pos << endl; */
    // Attempted to make a binary search algorithm but part-way through discovered a built in library that does this easier

    auto y = lower_bound(sortedVector.begin(), sortedVector.end(), x); // Lower bound finds the first element
    // That isn't lower than the given value - in this case, the value that needs to be inserted
    sortedVector.insert(y, x); // Inserts the value into the position determined earlier, making the vector bigger
}

int main() {
    vector<int> sortedVector = { 1, 2, 3, 4, 5 }; // Using vector so it can adjust size easier
    int newValue;
    cout << "What value would you like to add? ";
    cin >> newValue;
    cout << endl;
    insertNewElement(sortedVector, newValue); // Calling the function and passing along the reference to the vector as well as
    // the user's input
    for (int num : sortedVector) { // Runs through and prints out all of the elements of the vector, to prove the function works
        cout << num << endl;
    }
}