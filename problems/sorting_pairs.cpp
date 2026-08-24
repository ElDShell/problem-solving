#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct friend_class
{
    string name;
    int salary;
    friend_class() = default;
    friend_class (string n, int sal): name(n), salary(sal){};

    bool operator< (const friend_class &other){
        if (salary == other.salary) {
            return name < other.name;
        }
        return salary > other.salary;
    }
};


int main () {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    friend_class f[n];
    for(int i=0;i < n; i++){
        cin >> f[i].name >> f[i].salary ;
    }
    sort(f, f+n);
    for (auto [name, salary]: f){
        cout << name << " " << salary <<endl; 
    }
    return 0;
}