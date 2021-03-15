#include "snowman.cpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstdlib> 
using namespace std;

int main(){
    int temp = 1;
    int ans = 0;
    for (int i = 0; i < 8; i++)
    {
        int x = (int)rand*4+1;
        ans+=x*temp;
        temp*=10;
    }
    string snow = ariel::snowman(ans);
    cout <<ans<< endl;
    cout <<snow<< endl;
    return 0;
}