#include <iostream>
#include <vector>

#include "QS.h"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &array) {
    bool print_space = false;
    for (int elem: array) {
        if (print_space) {
            os << ' ';
        }
        print_space = true;
        os << elem;
    }
    return os;
}

void part1() {
    std::cout << "--- Part 1 output ---" << std::endl;

    std::vector<int> array;
    array.push_back(-3);
    array.push_back(4);
    array.push_back(4);
    array.push_back(8);
    array.push_back(-4);
    array.push_back(4);
    array.push_back(2);
    array.push_back(-6);
    array.push_back(6);
    array.push_back(5);

    QS sorter;
    size_t index;

    std::cout << "array = " << array << std::endl;

    index = sorter.medianOfThree(array, 0, 9);
    std::cout << "sorter.medianOfThree(array, 0, 9) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.medianOfThree(array, 1, 6);
    std::cout << "sorter.medianOfThree(array, 1, 6) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.medianOfThree(array, 2, 7);
    std::cout << "sorter.medianOfThree(array, 2, 7) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.medianOfThree(array, 6, 8);
    std::cout << "sorter.medianOfThree(array, 6, 8) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.medianOfThree(array, 7, 9);
    std::cout << "sorter.medianOfThree(array, 7, 9) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.medianOfThree(array, 2, 4);
    std::cout << "sorter.medianOfThree(array, 2, 4) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;
}

void part2() {
    std::cout << "--- Part 2 output ---" << std::endl;

    std::vector<int> array;
    array.push_back(1);
    array.push_back(3);
    array.push_back(10);
    array.push_back(2);
    array.push_back(9);
    array.push_back(7);
    array.push_back(-7);
    array.push_back(2);
    array.push_back(-2);
    array.push_back(9);
    array.push_back(-1);
    array.push_back(0);
    array.push_back(12);
    array.push_back(7);
    array.push_back(10);
    array.push_back(10);
    array.push_back(7);
    array.push_back(10);
    array.push_back(7);
    array.push_back(-3);

    QS sorter;
    size_t index;

    std::cout << "array = " << array << std::endl;

    index = sorter.partition(array, 2, 11, 3);
    std::cout << "sorter.partition(array, 2, 11, 3) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.partition(array, 12, 18, 15);
    std::cout << "sorter.partition(array, 12, 18, 15) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.partition(array, 7, 16, 10);
    std::cout << "sorter.partition(array, 7, 16, 10) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.partition(array, 1, 13, 1);
    std::cout << "sorter.partition(array, 1, 13, 1) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;

    index = sorter.partition(array, 0, 19, 8);
    std::cout << "sorter.partition(array, 0, 19, 8) = " << index << std::endl;
    std::cout << "array = " << array << std::endl;
}

void part3() {
    std::cout << "--- Part 3 output ---" << std::endl;

    std::vector<int> array;
    QS sorter;

    array.push_back(0);
    array.push_back(-8);
    array.push_back(-7);
    array.push_back(7);
    array.push_back(5);
    array.push_back(6);
    array.push_back(5);
    array.push_back(0);
    array.push_back(-3);
    array.push_back(-9);
    array.push_back(-1);
    array.push_back(10);
    array.push_back(-1);
    array.push_back(-7);
    array.push_back(3);
    array.push_back(-2);
    array.push_back(-6);
    array.push_back(-4);

    std::cout << "array = " << array << std::endl;
    std::cout << "sorting array..." << std::endl;
    sorter.sort(array);
    std::cout << "array = " << array << std::endl << std::endl;

    array.clear();
    array.push_back(6);
    array.push_back(-1);
    array.push_back(-5);
    array.push_back(-5);
    array.push_back(-1);
    array.push_back(-4);
    array.push_back(-9);
    array.push_back(5);
    array.push_back(6);
    array.push_back(8);
    array.push_back(7);
    array.push_back(-1);
    array.push_back(-3);
    array.push_back(7);
    array.push_back(-9);
    array.push_back(7);
    array.push_back(-8);
    array.push_back(-8);
    array.push_back(1);
    array.push_back(-6);

    std::cout << "array = " << array << std::endl;
    std::cout << "sorting array..." << std::endl;
    sorter.sort(array);
    std::cout << "array = " << array << std::endl << std::endl;

    array.clear();
    array.push_back(2);
    array.push_back(-3);
    array.push_back(0);
    array.push_back(2);
    array.push_back(3);
    array.push_back(7);
    array.push_back(3);
    array.push_back(-6);
    array.push_back(9);
    array.push_back(-4);
    array.push_back(-9);
    array.push_back(-2);
    array.push_back(-3);
    array.push_back(-1);
    array.push_back(3);
    array.push_back(-4);

    std::cout << "array = " << array << std::endl;
    std::cout << "sorting array..." << std::endl;
    sorter.sort(array);
    std::cout << "array = " << array << std::endl << std::endl;

    array.clear();
    array.push_back(-5);
    array.push_back(8);
    array.push_back(-4);
    array.push_back(-8);
    array.push_back(9);
    array.push_back(1);
    array.push_back(6);
    array.push_back(-2);
    array.push_back(-3);
    array.push_back(-5);
    array.push_back(3);
    array.push_back(1);
    array.push_back(-6);
    array.push_back(5);
    array.push_back(2);
    array.push_back(9);
    array.push_back(-3);
    array.push_back(9);
    array.push_back(8);

    std::cout << "array = " << array << std::endl;
    std::cout << "sorting array..." << std::endl;
    sorter.sort(array);
    std::cout << "array = " << array << std::endl;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [TEST]" << std::endl;
        std::cerr << "where TEST is one of 1, 2, 3, or all" << std::endl;
        return 1;
    }

    std::string test = argv[1];

    if (test == "1") {
        part1();
    } else if (test == "2") {
        part2();
    } else if (test == "3") {
        part3();
    } else if (test == "all") {
        part1();

        std::cout << "\n\n";
        part2();

        std::cout << "\n\n";
        part3();
    } else {
        std::cerr << test << " is not a valid test to run. The valid options are 1, 2, 3, and all"
                  << std::endl;
        return 1;
    }

    return 0;
}
