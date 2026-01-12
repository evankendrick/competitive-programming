#include <iostream>
using namespace std;
 
int main() {
    int g, c, l;
    int maximums;
    int minimums;
    int median;
    cin >> g >> c >> l;
 
    if (g <= c) {
        maximums = c;
        minimums = g;
    } else {
        maximums = g;
        minimums = c;
    }
 
    if (maximums <= l) {
        median = maximums;
        maximums = l;
    } else if (l <= minimums) {
        median = minimums;
        minimums = l;
    } else {
        median = l;
    }
  
 
    if (maximums - minimums >= 10) {
        cout << "check again" << endl;
    } else {
        cout << "final " << median;
    }
}
