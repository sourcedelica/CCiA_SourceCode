#include <iostream>
#include <random>
#include <iomanip>
#include "parallel_quick_sort.h"

constexpr unsigned int Count = 1000;

void print(const std::list<int> &list, const std::string &desc) {
    std::cout << '\n' << desc << '\n';
    int i = 1;
    for (auto &elem : list) {
        std::cout << std::setw(4) << elem;
        std::cout << (i % 40 == 0 ? '\n' : ' ');
        ++i;
    }
    std::cout << std::endl;
}

int main() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, Count);

    std::list<int> list;
    for (int i = 0; i < Count; ++i) list.push_back(dist(rng));

    print(list, "Before");

    auto res = parallel_quick_sort(list);

    print(res, "After");
}
