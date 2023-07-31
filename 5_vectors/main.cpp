#include <iostream>
#include <vector>

int main()
{
    std::vector<double> order = {3.99, 12.99, 2.49};
    std::cout << "order[0] = " << order[0] << std::endl;
    std::cout << "order[2] = " << order[2] << std::endl;

    std::cout << "Size: " << order.size() << std::endl;


    // initialize the vector at 5
    std::vector<int> numbers(5);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

    int prevNumberSize = numbers.size();
    numbers.pop_back();

    std::cout << "after pop_back, numbers.size() == " << numbers.size() << " used to be " << prevNumberSize << std::endl;
}