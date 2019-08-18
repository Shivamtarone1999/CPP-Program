#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    set <int> s;

    for(int i = 0; i<n; i++) {
        int num1;
        int num2;
        cin >> num1;
        cin >> num2;

        if(num1==1) {
            s.insert(num2);
        }

        else if (num1==2) {
             s.erase(num2);
        }

         else {
            if(s.end()==s.find(num2))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }

    }

    return 0;
}
