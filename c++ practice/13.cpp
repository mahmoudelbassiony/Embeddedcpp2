#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> um{{"kia", 2009}, {"Bmw", 2020}, {"toyota", 2019}};

    cout << um["kia"] << endl;

    um["kia"] = 2020;

    um["Mercedes"] = 2020;

    um.insert_or_assign("Kia", 2022);
    um.try_emplace("kia" ,2003);

    for (auto map : um)
    {
        std::cout << map.first << ": " << map.second << std::endl;
    }
    return 0;
}
