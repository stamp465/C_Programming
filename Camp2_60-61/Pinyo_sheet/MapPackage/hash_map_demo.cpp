/// File: Hash-Map Demo
/// Author: Pinyo Taeprasartsit
#include <unordered_map>
#include <cstdio>

using namespace std;

int main() {
    unordered_map<int, double> gpaHashMap;
    gpaHashMap[7] = 3.5;
    gpaHashMap[2] = 3.6;
    printf("%.2f\n", gpaHashMap[7]);
    printf("%.2f\n", gpaHashMap[2]);

    if(gpaHashMap.find(99) == gpaHashMap.end())
        printf("Key 99 is not mapped yet.\n");

    printf("%.2f\n", gpaHashMap[99]);
    if(gpaHashMap.find(99) != gpaHashMap.end())
        printf("Key 99 is already mapped.\n");

    gpaHashMap[1] = 3.6;
    gpaHashMap[5] = 3.6;
    gpaHashMap[3] = 3.6;
    gpaHashMap[10] = 3.6;
    gpaHashMap[9] = 3.6;
    gpaHashMap[8] = 3.6;
    gpaHashMap[4] = 3.6;
    gpaHashMap[11] = 3.6;
    for(auto& keyValue : gpaHashMap)
        printf("(%d, %.2f)\n", keyValue.first, keyValue.second);

    return 0;
}

