#include <iostream>

enum sports {
    bieganie = 1,
    jezdziectwo = 2,
    kolarstwo = 4,
    plywanie = 8,
    rzut_oszczepem = 16,
    skok_w_dal = 32,
    wspinaczka = 64,
    zapasy = 128,
};
int main(){
    auto triathlon = bieganie | plywanie | kolarstwo;
}