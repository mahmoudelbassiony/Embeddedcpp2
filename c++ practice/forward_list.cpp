#include <iostream>
#include <forward_list>
#include <algorithm>

int main()
{
    std::forward_list<int> list = {1, 2, 3, 4};
    std::forward_list<int> list2 = {5, 6, 7};
    // list.assign({5});
    // list.assign({6, 7, 8});

    auto it = list.begin()++;
    list.merge(list2);
    list.remove(4);

    auto it_if = std::find_if(list.begin(), list.end(), [](int n)
                              { return n > 3; });

    std::cout << *it_if << std::endl;

    list.remove_if([](int n)
                   { return n > 3; });
    for (auto i : list)
    {
        std::cout << i << std::endl;
    }

    list.clear();
    
    return 0;
}