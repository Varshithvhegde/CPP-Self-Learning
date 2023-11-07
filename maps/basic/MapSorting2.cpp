#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

// Function to print a map
template <typename K, typename V>
void printMap(const std::map<K, V>& inputMap) {
    for (const auto& pair : inputMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}

int main() {
    std::map<int, std::string> myMap;

    // Populate the map
    myMap[3] = "Alice";
    myMap[1] = "Bob";
    myMap[4] = "Charlie";
    myMap[2] = "David";

    int choice;
    std::cout << "Sort by (1 for keys, 2 for values): ";
    std::cin >> choice;

    if (choice == 1) {
        // Sort by keys
        std::cout << "Sort in ascending (1) or descending (2) order: ";
        std::cin >> choice;

        std::map<int, std::string> sortedMap(myMap.begin(), myMap.end());

        if (choice == 1) {
            std::cout << "Sorted by keys in ascending order:" << std::endl;
        } else if (choice == 2) {
            std::cout << "Sorted by keys in descending order:" << std::endl;
            std::map<int, std::string, std::greater<int>> descendingMap(myMap.begin(), myMap.end());
            sortedMap = descendingMap;
        }

        // Print the sorted map
        printMap(sortedMap);
    } else if (choice == 2) {
        // Sort by values
        std::cout << "Sort in ascending (1) or descending (2) order: ";
        std::cin >> choice;

        std::vector<std::pair<int, std::string>> sortedVec(myMap.begin(), myMap.end());

        if (choice == 1) {
            std::sort(sortedVec.begin(), sortedVec.end(), [](const auto& a, const auto& b) {
                return a.second < b.second;
            });
            std::cout << "Sorted by values in ascending order:" << std::endl;
        } else if (choice == 2) {
            std::sort(sortedVec.begin(), sortedVec.end(), [](const auto& a, const auto& b) {
                return a.second > b.second;
            });
            std::cout << "Sorted by values in descending order:" << std::endl;
        }

        // Create a new map from the sorted vector
        std::map<int, std::string> sortedMap(sortedVec.begin(), sortedVec.end());

        // Print the sorted map
        printMap(sortedMap);
    }

    return 0;
}
