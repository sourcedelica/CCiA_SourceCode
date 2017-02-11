#include <iostream>
#include <random>
#include "parallel_quick_sort.h"

int main() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1,1000);

    std::list<int> list;
    for (int i = 0; i < 50; ++i) list.push_back(dist(rng));

    auto res = parallel_quick_sort(list);

    for (auto &elem : res) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
