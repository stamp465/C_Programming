/// File: Tree-Map Demo
/// Author: Pinyo Taeprasartsit
#include <map>
#include <cstdio>

using namespace std;

int main() {
    map<int, double> gpaTreeMap;
    gpaTreeMap[7] = 3.5;
    gpaTreeMap[2] = 3.6;
    printf("%.2f\n", gpaTreeMap[7]);
    printf("%.2f\n", gpaTreeMap[2]);

    if(gpaTreeMap.find(99) == gpaTreeMap.end())
        printf("Key 99 is not mapped yet.\n");

    printf("%.2f\n", gpaTreeMap[99]);
    if(gpaTreeMap.find(99) != gpaTreeMap.end())
        printf("Key 99 is already mapped.\n");

    gpaTreeMap[1] = 3.6;
    gpaTreeMap[5] = 3.6;
    gpaTreeMap[3] = 3.6;
    gpaTreeMap[10] = 3.6;
    gpaTreeMap[9] = 3.6;
    gpaTreeMap[8] = 3.6;
    gpaTreeMap[4] = 3.6;
    gpaTreeMap[11] = 3.6;
    for(auto& keyValue : gpaTreeMap)
        printf("(%d, %.2f)\n", keyValue.first, keyValue.second);

    return 0;
}
