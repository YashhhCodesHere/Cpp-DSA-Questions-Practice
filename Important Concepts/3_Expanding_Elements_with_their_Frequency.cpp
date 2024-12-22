#include <iostream>
#include <vector>

using namespace std;

vector<int> expandArray(const vector<int>& elements, const vector<int>& frequencies) {
    vector<int> expandedArray;
    for (size_t i = 0; i < frequencies.size(); ++i) {
        for (int j = 0; j < frequencies[i]; ++j) {
            expandedArray.push_back(elements[i]);
        }
    }
    return expandedArray;
}

int main() {
    // Example input
    vector<int> elements = {1, 2, 3, 4};
    vector<int> frequencies = {2, 3, 1, 4};

    // Expand the array
    vector<int> expandedArray = expandArray(elements, frequencies);

    // Print the result
    for (int val : expandedArray) {
        cout << val << " ";
    }

    return 0;
}
