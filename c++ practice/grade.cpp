#include <iostream>
#include <map>
int main()
{
    std::map<std::string,float> gradeByName;
    gradeByName.insert({"omar", 90.9});
    gradeByName.insert({"kareem", 80.9});

    gradeByName.insert({"essam", 78.9});

    gradeByName.insert({"khaled", 66.9});

    gradeByName.insert({"ahmed", 77.9});

    std::string name;
    std::cin >> name;
    int count = 0;
    for (auto it = gradeByName.begin(); it != gradeByName.end(); ++it)
    {
        if (it->first == name)
        {
            std::cout << "your grade is : " << it->second << std::endl;
            count++;
            break;
        }
    }
}