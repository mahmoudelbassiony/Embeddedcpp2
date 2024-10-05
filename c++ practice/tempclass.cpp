#include <iostream>
#include <vector>
#include <array> 

template <typename T1, typename T2 >
struct pair
{
    T1 first;
    T2 second;
};

template <typename T1, typename T2>
pair<T1, T2> make_pair(T1 first, T2 second)
{
    pair<T1, T2> p;
    p.first = first;
    p.second = second;
    return p;
}
 

int main()
{

    // Pair<int, Pair<std::string, int>> P( 1, {" Bassiony ", 123});
 
    std::vector<pair<int, std::string>> P ={{1 , "nada"} ,{2 , "kenzy"}};


    P.push_back(make_pair<int, std::string>(1, "Mahmoud"));
    P.push_back({2, "Bassiony"});

    for (int i = 0; i < P.size(); i++)
    {
        std::cout << P[i].first << " " << P[i].second << "\n";
    }

    return 0;
}