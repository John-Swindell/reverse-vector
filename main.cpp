#include <iostream>
#include <vector>


std::vector<int> reverseVector(const std::vector<int>& vec) {
    std::vector<int> reversedVec;

    for (int i = vec.size() - 1; i >= 0; --i) {
        reversedVec.push_back(vec[i]);
    }
    return reversedVec;
}

int main() {
    int numElements;
    std::vector<int> originalVector;


    std::cout << "Enter number of elements: ";
    std::cin >> numElements;


    if (numElements > 0) {
        std::cout << "Enter " << numElements << " elements:" << std::endl;
        for (int i = 0; i < numElements; ++i) {
            int element;
            std::cin >> element;
            originalVector.push_back(element);
        }
    }


    std::cout << "\nOriginal vector: ";
    for (size_t i = 0; i < originalVector.size(); ++i) {
        std::cout << originalVector[i] << (i == originalVector.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;

    std::vector<int> reversedResult = reverseVector(originalVector);


    std::cout << "Reversed vector: ";
    for (size_t i = 0; i < reversedResult.size(); ++i) {
        std::cout << reversedResult[i] << (i == reversedResult.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}