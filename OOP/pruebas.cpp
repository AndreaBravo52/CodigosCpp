#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> intvector;
    intvector.reserve(10);

    for (int i=0; i<10; i++){
        intvector.push_back(i*i);
        cout << intvector[i] << endl;
    }

    return 0;
}
