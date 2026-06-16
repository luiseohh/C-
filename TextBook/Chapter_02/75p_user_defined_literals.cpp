#include<iostream>
using namespace std;

const long double km_per_mile = 1.609344L;

long double operator"" _km(long double val){
    return val;
}

long double operator"" _mi(long double val){
    return val * km_per_mile;
}

int main(){
    long double distance_1 = 1.0_km; // 킬로미터는 그대로 저장
    long double distance_2 = 1.0_mi; // 마일은 킬로미터 단위로 변환해서 저장

    cout << distance_1 + distance_2 << " km" << endl;
    
    return 0;
}