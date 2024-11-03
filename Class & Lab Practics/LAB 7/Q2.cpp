#include <iostream>
using namespace std;

void towerOfHanoi(int n, char Source, char Destination, char Helper) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << Source << " to rod " << Destination << endl;
        return;
    }
    towerOfHanoi(n - 1, Source, Helper, Destination);
    cout << "Move disk " << n << " from rod " << Source << " to rod " << Destination << endl;
    towerOfHanoi(n - 1, Helper, Destination, Source);
}

int main() {
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}