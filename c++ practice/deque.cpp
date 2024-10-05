#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
    std::deque<char> d = {'s', 'v', 'd', 'r', 'y', 'y'};

    d.push_back('s');
    d.push_front('p');

    // std::sort(d.begin( ) , d.end());
    // std::reverse(d,begin() , d.end());

    for (auto it : d)
    {
        std::cout << it;
    }
    std::cout << "\n";
    std::cout << d.max_size() << std::endl;
    std::cout << d.empty() << std::endl;

    d.clear();
    std::cout << d.empty() << std::endl;
    return 0;
}
// Properties of deque