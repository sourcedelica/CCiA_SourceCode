#include <iostream>
#include "parallel_quick_sort.h"

int main() {
    std::list<int> list{56, 1, 2, 7, 23, 4, 22};
    auto res = parallel_quick_sort(list);

    for (auto &elem : res) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
