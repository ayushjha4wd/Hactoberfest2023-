#include <iostream>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there's only one disk, move it from source to destination
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    // Move n-1 disks from source to auxiliary peg using destination peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;

    // Move the n-1 disks from auxiliary peg to destination peg using source peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;

    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
