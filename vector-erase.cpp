#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp,q,num1,num2;
    cin >> n;
    vector<int> v;
    
        for (int i = 1; i <= n; i++) {
        cin >> temp ;
        v.push_back(temp);
        }

    cin >> q;
    cin >> num1 >> num2;
    
    v.erase(v.begin()+q-1);
    v.erase(v.begin()+num1-1,v.begin()+num2-1);

    cout << v.size() << endl;
    for(auto _v : v)
       cout << _v << " ";
    cout << endl;

 
    return 0;
}
