#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


struct student
{
    string name;
    int tot;
    int ar;
    int ma;
    int sc;
    int en;
    student() = default;
    student(string n, int ar, int ma, int sc, int en): name(n), ar(ar), ma(ma), sc(sc), en(en){};
    bool operator<(const student &other) const
    {
        if (tot == other.tot){
            return name < other.name;
        }
        return tot > other.tot;
    }
};



int main (){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    student sts[n];
    for(int i=0; i<n; i++){
        cin >> sts[i].name >> sts[i].ar >> sts[i].ma >> sts[i].sc >> sts[i].en;
        sts[i].tot = sts[i].ar + sts[i].en + sts[i].ma + sts[i].sc;   
    }
    sort(sts, sts+n);
    for (auto [name, tot, ar, ma, sc, en]: sts){
        cout << name << " " << tot << " " << ar << " " << ma << " " << sc << " " << en <<endl;
    }

}