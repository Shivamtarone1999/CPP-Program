#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp,q,num;
    cin >> n;

    vector<int> v;

    for (int i = 1; i <= n; i++) {
        cin >> temp ;
        v.push_back(temp);
    }
    
    cin >> q;
    for(int k =1; k<=q; k++) {
        cin >> num;
               vector<int>::iterator low = lower_bound(v.begin(), v.end(), num);
       if (v[low - v.begin()] == num)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;

    }

}
