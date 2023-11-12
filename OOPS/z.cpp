#include <iostream>
#include <list>

int main()
{
    // Create a list of integers
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5);

    // Iterate over the list and print its elements
    for (const auto &num : myList)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element from the list
    myList.remove(20);

    // Check if the list is empty
    if (myList.empty())
    {
        std::cout << "List is empty" << std::endl;
    }
    else
    {
        std::cout << "List is not empty" << std::endl;
    }

    // Get the size of the list
    std::cout << "List size: " << myList.size() << std::endl;

    // Clear the list
    myList.clear();

    return 0;
}