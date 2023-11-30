#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    // Displaying the contents of the list
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
