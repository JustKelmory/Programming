#include "json.hpp"
#include <iostream>
#include <fstream>
#include <map>
#include <iomanip>
using namespace std;
using json = nlohmann::json;
int main() {
    std::map  <int, int> s;
    std::ifstream y("in.json");
    json a;
    y >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]["completed"] == true)
            s[a[i]["userId"]] += 1;
    }
    json q = json::array();
    for (auto e : s)
    {
        q.push_back({ {"userId",e.first},{"task_completed",e.second} });
    }
    std::ofstream o("out.json");
    o << std::setw(3) << q << endl;
    return 0;
}
