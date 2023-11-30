#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <stack>

// Function to demonstrate deque
void demonstrateDeque()
{
    std::cout << "Demonstrating Deque:\n";

    // Creating a deque of integers
    std::deque<int> dequeNumbers = {1, 2, 3};

    // Adding elements to the front and back of the deque
    dequeNumbers.push_front(0);
    dequeNumbers.push_back(4);

    // Displaying elements using iterators
    std::cout << "Deque elements: ";
    for (const auto &num : dequeNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
}

// Function to demonstrate queues
void demonstrateQueue()
{
    std::cout << "Demonstrating Queue:\n";

    // Creating a queue of strings
    std::queue<std::string> messageQueue;

    // Enqueuing elements
    messageQueue.push("Hello");
    messageQueue.push(", ");
    messageQueue.push("C++ ");
    messageQueue.push("STL!");

    // Displaying elements using front and pop
    std::cout << "Queue elements: ";
    while (!messageQueue.empty())
    {
        std::cout << messageQueue.front();
        messageQueue.pop();
    }
    std::cout << "\n\n";
}

// Function to demonstrate stacks
void demonstrateStack()
{
    std::cout << "Demonstrating Stack:\n";

    // Creating a stack of characters
    std::stack<char> charStack;

    // Pushing elements onto the stack
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');

    // Displaying elements using pop
    std::cout << "Stack elements: ";
    while (!charStack.empty())
    {
        std::cout << charStack.top() << " ";
        charStack.pop();
    }
    std::cout << "\n\n";
}

void demonstrateIterators()
{
    std::cout << "Demonstrating Iterators:\n";

    // Creating a vector of integers
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Displaying elements using reverse iterators
    std::cout << "Reverse order of elements: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";
}

void demonstrateStrings()
{
    std::cout << "Demonstrating Strings:\n";

    // Creating a string
    std::string message = "Hello, C++ STL!";

    // Displaying characters using range-based for loop
    std::cout << "Characters in the string: ";
    for (char ch : message)
    {
        std::cout << ch << " ";
    }
    std::cout << "\n";

    // Using string functions
    std::cout << "String length: " << message.length() << "\n";
    std::cout << "Substring: " << message.substr(7, 4) << "\n\n";
}

void demonstrateSets()
{
    std::cout << "Demonstrating Sets:\n";

    // Creating a set of integers
    std::set<int> uniqueNumbers = {5, 2, 8, 3, 1, 5, 2};

    // Displaying unique elements using iterators
    std::cout << "Unique elements in the set: ";
    for (const auto &num : uniqueNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
}

void demonstrateAlgorithms()
{
    std::cout << "Demonstrating Algorithms:\n";

    // Creating a vector of integers
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Using std::count to count occurrences of a value
    int countOf5 = std::count(numbers.begin(), numbers.end(), 5);
    std::cout << "Count of 5: " << countOf5 << "\n";

    // Using std::find to search for a value
    auto it = std::find(numbers.begin(), numbers.end(), 9);
    if (it != numbers.end())
    {
        std::cout << "Found 9 at position " << std::distance(numbers.begin(), it) << "\n";
    }
    else
    {
        std::cout << "9 not found\n";
    }

    int sum = 0;
    // find the sum of all elements
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        sum += *it;
    }
    std::cout << "Sum of elements: " << sum << "\n\n";
}

void demonstrateMaps()
{
    std::cout << "Demonstrating Maps:\n";

    // Creating a map of string to int
    std::map<std::string, int> ages;

    // Adding key-value pairs to the map
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 22;

    // Displaying map elements using iterators
    std::cout << "Map elements:\n";
    for (const auto &entry : ages)
    {
        std::cout << entry.first << ": " << entry.second << "\n";
    }
    std::cout << "\n";
}

void demonstrateVectors()
{
    std::cout << "Demonstrating Vectors:\n";

    // Creating a vector of integers
    std::vector<int> numbers = {5, 2, 8, 3, 1};

    // Adding elements to the vector
    numbers.push_back(7);
    numbers.push_back(4);

    // Displaying elements using iterators
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Sorting the vector
    std::sort(numbers.begin(), numbers.end());

    // Displaying sorted elements
    std::cout << "Sorted vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
}

int main()
{
    // Call functions to demonstrate additional STL components
    demonstrateVectors();
    demonstrateMaps();
    demonstrateAlgorithms();
    demonstrateSets();
    demonstrateStrings();
    demonstrateIterators();
    demonstrateDeque();
    demonstrateQueue();
    demonstrateStack();

    return 0;
}
