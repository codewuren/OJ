#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    std::cout << *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
    return 0;
}