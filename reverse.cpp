#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void Reverse(vector<int>& v){
    int tmp=0;
    //auto start = steady_clock::now();
    for (int i=0; i<v.size()/2; i++) {
       tmp=v[i];
       v[i]=v[v.size()-1-i];
        v[v.size()-1-i]=tmp;
        tmp=0;
    }
    /*auto stop = steady_clock::now();
    cout << "it works in "
    << duration_cast<milliseconds>(stop-start).count() << " ms" << endl;*/
}

