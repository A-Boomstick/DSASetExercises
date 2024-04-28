#include <iostream>
#include <vector>
using namespace std;

void insertNewElement(vector<int>& array, int x){
    int l = 0;
    int r = array.size() - 1;
    int pos = (l + r)/2
    cout << pos << endl;
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5};
    int newValue;
    cout << "What value would you like to add?";
    cin >> newValue;
    cout << endl;
    insertNewElement(array, newValue);
}