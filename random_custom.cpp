//
// Created by Backup on 2024-03-24.
//

#include "random"
#include "iostream"

using namespace std;

unsigned long long int random_custom(long double m, long double n) {
    random_device rd;//시드값을위한 random_device 생성
    mt19937 gen(rd());//random_device를 통해 난수 생성 엔진을 초기화한다
    uniform_int_distribution<unsigned long long int> dis((unsigned long long int) m, (unsigned long long int) n);//균등분포 정의
    auto result = (unsigned long long int) dis(gen);
    //printf("%s %llu\n","result_random : " ,result);
    return result;
}