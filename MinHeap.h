#pragma once
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

class MinHeap {
public:
    std::vector<int> heap;

    void insert(int value) {
        heap.push_back(value);
        int i = static_cast<int>(heap.size()) - 1; // cast size_t to int safely

        while (i != 0 && heap[parent(i)] > heap[i]) {
            std::swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    // Display function returns std::stringB
    std::string display() {
        std::stringstream ss;
        for (int i = 0; i < static_cast<int>(heap.size()); ++i) {
            ss << heap[i];
            if (i != static_cast<int>(heap.size()) - 1)
                ss << " ";
        }
        return ss.str();
    }
};
