#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

#define ll long long
#define ld long double

using namespace std;

struct student
{
private:
    bool graudated;    
public:
    string name;
    int age;
    float gpa;

    student(string x, int y, float z):name(x), age(y), gpa(z), graudated(false) {}
    void init(bool x){
        graudated = x;
    }
    bool getGraudated(){
        return graudated;
    }
    bool operator< (const student &other){
        return age<other.age;
    }
};

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    student st[5];

    st[0].age = 5;
    st[1].age = 15;
    if (st[0] < st[1])
    {
        cout << "2nd is Greater" <<endl;
    }else{
        cout << "1st is Greater" <<endl;
    }
    

}