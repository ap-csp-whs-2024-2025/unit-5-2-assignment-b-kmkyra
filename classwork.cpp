#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    //get every element loop: while loop
    std::vector<int> numbers = {8,6,7,5,3,0,9};
    int curr_index = 0;
    
    while (curr_index < numbers.size())
    {
        st::cout<<numbers[curr_index]<< " ";
        curr_index = curr_index + 1;
    }
    //for loop
    std::vector<int> numbers = {8,6,7,5,3,0,9};
    
    for (int curr_index = 0; curr_index < numbers.size(); curr_index = curr_index+1)
    {
        
    }
    
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}