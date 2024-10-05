#include <iostream
#include <list>
#include<algorithm>

int main()
{
    std::list<int> mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     std::cout << *it << " " << std::endl;
    // }
    // std::list
    // std::cout << std::endl;
    // mylist.push_front(0);
    // auto it1 = mylist.begin();

    std::list<int>l = {1, 2, 3};
    std::list<int> li = {4, 5, 6};
    std::cout << "==================================================" << std::endl;
    l.merge(li);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " " << std::endl;
    }
    l.clear();
    return 0;
}