#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n,type,mark;
    cin >> n;

    map<string,int>m;
    string name;

    for(int i=0; i<n; i++) {
        cin >> type >> name;

        if(type == 1) {
            cin >> mark;
            m[name] += mark; 
        }

        else if(type == 2) {
            m.erase(name);
        }

        else {
           cout << m[name] << endl;
        }
    }

    
    return 0;
}
