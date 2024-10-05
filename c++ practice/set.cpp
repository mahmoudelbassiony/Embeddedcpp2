#include <iostream>
#include <set>

int main()
{
    std::set<int> s{1, 2, 3, 4, 5, 6, 6, 7, 7};
    for (int i : s)
    {
        std::cout << i << std::endl;
    }
    std::multiset<std::string , std::greater<std::string>> set_str = {"omar" , "ahmed" , "ahmed"};
    for(auto i :set_str)
    {
        std::cout<< i <<std::endl;

    }

    s.insert(5);
    s.emplace(7);
    auto it = s.begin();

    s.insert(it , 8);
    s.emplace_hint(it  , 10);
    it = s.emplace_hint(it , 9);

    for(int i : s )
    {
        std::cout <<i <<std::endl;
    }
    std::cout <<*ter.first << "   " << ter.second <<std::endl;

    s.erase(11);
    auto iterator = s.begin();
    ++++++++iterator;
    s.erase(iterator);
    for(auto ss :s)
    {
        std::cout << ss <<std::endl;
    }
        std::cout  << "======================================" <<std::endl;
        std::cout << s.count(15) << std::endl;
        std::cout << set_str.count("ahmed") << std::endl;
        std::cout  << "======================================" <<std::endl;
        for (auto set : set_str)
        {
           std::cout << set << std::endl;
        }
        return 0;
    }
    
