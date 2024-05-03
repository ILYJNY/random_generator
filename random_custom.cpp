//
// Created by Backup on 2024-03-24.
//

#include "random"
#include "iostream"
#define lf long double


using namespace std;

lf random_custom(lf m, lf n) {
    random_device rd;//시드값을위한 random_device 생성
    mt19937 gen(rd());//random_device를 통해 난수 생성 엔진을 초기화한다
    uniform_int_distribution<unsigned long long int> dis((lf) m, (lf) n);//균등분포 정의
    auto result = (lf) dis(gen);
    //printf("%s %Lf\n","result_random : " ,result);
    return result;
}
