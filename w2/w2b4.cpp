#include <iostream>

using namespace std;

int main() {
    int chicken, dog;
    int total, totalLegs;
    cin>>total>>totalLegs;
    dog = (totalLegs-2*total)/2;
    chicken = total - dog;
    if (chicken*2+(total-chicken)*4 == totalLegs){
        cout<<"chicken = "<<chicken<<", dog = "<<dog;
    }
    else cout<<"invalid";
}
