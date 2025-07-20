#include<iostream>
using namespace std;

// Symmetric Butterfly Pattern
    /*
        ***** *****  
        ****   ****  
        ***     ***  
        **       **  
        *         *  
        *         *  
        **       **  
        ***     ***  
        ****   ****  
        ***** *****  
    */
int main() {
    int n;
    cin >> n;

    // Upper half of the butterfly
    for(int row = 0; row < n; row++) {
        // Left inverted triangle
        for(int col = 0; col < n - row; col++) {
            cout << "*";
        }

        // Middle spaces (gap)
        for(int col = 0; col < 2 * row + 1; col++) {
            cout << " ";
        }

        // Right inverted triangle
        for(int col = 0; col < n - row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the butterfly
    for(int row = 0; row < n; row++) {
        // Left triangle
        for(int col = 0; col < row + 1; col++) {
            cout << "*";
        }

        // Middle spaces (gap)
        for(int col = 0; col < 2 * n - 2 * row - 1; col++) {
            cout << " ";
        }

        // Right triangle
        for(int col = 0; col < row + 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}



