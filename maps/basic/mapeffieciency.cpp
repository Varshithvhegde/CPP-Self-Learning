#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>
#include <random>

int main() {
    const int numElements = 100000; // Number of elements to insert
    std::mt19937 gen; // Mersenne Twister pseudo-random generator
    std::uniform_int_distribution<int> dist(1, numElements * 2); // Random numbers in the range [1, 2 * numElements]

    // Measure the time taken to insert elements into a std::map
    {
        std::map<int, int> mapBenchmark;
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numElements; ++i) {
            int key = dist(gen);
            int value = i;
            mapBenchmark[key] = value;
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end - start;
        std::cout << "Insertion time for std::map: " << elapsed.count() << " seconds" << std::endl;
    }

    // Measure the time taken to insert elements into a std::unordered_map
    {
        std::unordered_map<int, int> unorderedMapBenchmark;
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numElements; ++i) {
            int key = dist(gen);
            int value = i;
            unorderedMapBenchmark[key] = value;
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end - start;
        std::cout << "Insertion time for std::unordered_map: " << elapsed.count() << " seconds" << std::endl;
    }

    // Measure the time taken to retrieve elements from std::map
    {
        std::map<int, int> mapBenchmark;

        for (int i = 0; i < numElements; ++i) {
            int key = dist(gen);
            int value = i;
            mapBenchmark[key] = value;
        }

        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numElements; ++i) {
            int key = dist(gen);
            int value = mapBenchmark[key];
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end - start;
        std::cout << "Retrieval time for std::map: " << elapsed.count() << " seconds" << std::endl;
    }

    // Measure the time taken to retrieve elements from std::unordered_map
    {
        std::unordered_map<int, int> unorderedMapBenchmark;

        for (int i = 0; i < numElements; ++i) {
            int key = dist(gen);
            int value = i;
            unorderedMapBenchmark[key] = value;
        }

        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numElements; ++i) {
            int key = dist(gen);
            int value = unorderedMapBenchmark[key];
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end - start;
        std::cout << "Retrieval time for std::unordered_map: " << elapsed.count() << " seconds" << std::endl;
    }

    return 0;
}
