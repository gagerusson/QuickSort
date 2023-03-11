#pragma once

#include <cstddef>
#include <vector>

#include "QSInterface.h"

using namespace std;

class QS : public QSInterface {
public:
    QS() {}

    virtual ~QS() = default;

    void quickSort(std::vector<int> &array, size_t left, size_t right) {
        if (left >= right) {
            return;
        }
        size_t pivot = medianOfThree(array, left, right);
        pivot = partition(array, left, right, pivot);
        quickSort(array, left, pivot - 1);
        quickSort(array, pivot + 1, right);
    }

    void sort(std::vector<int> &array) override {
        quickSort(array, 0, array.size()-1);
    }

    size_t medianOfThree(std::vector<int> &array, size_t left, size_t right) override {
        size_t middle = (left + right) / 2;

        if (array[left] > array[middle]) {
            swap(array[left], array[middle]);
        }
        if (array[left] > array[right]) {
            swap(array[left], array[right]);
        }
        if (array[middle] > array[right]) {
            swap(array[middle], array[right]);
        }

        return middle;
    }

    size_t partition(std::vector<int> &array, size_t left, size_t right, size_t pivotIndex) override {
        int temp = array[pivotIndex];
        array[pivotIndex] = array[left];
        array[left] = temp;

        int up = left + 1;
        int down = right;
        do {
            while((array[up] <= array[left]) && (up < right)) {
                up++;
            }
            while (array[down] > array[left] && down > left) {
                down--;
            }
            if (up <= down) {
                temp = array[up];
                array[up] = array[down];
                array[down] = temp;
            }
        } while (up < down);

        temp = array[left];
        array[left] = array[down];
        array[down] = temp;

        return down;
    }
};
