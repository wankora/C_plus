#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <filesystem>
#include <typeinfo>
#include <cmath>
#include <algorithm>
#include <ctime>

using namespace std;

#include "./header.hpp"

// template <typename T>
// T add(T x, T y) {
//     return x + y;
// }

// template<typename T> 
// class CCalc {
// private:
//     T m_n1;
//     T m_n2;
// public:
//     inline void set(const T n1, const T n2)
//     {m_n1 = n1; m_n2 = n2;};
//     inline T add() const {
//         return m_n1 + m_n2;
//     }
// };

// int main() {
//     CCalc<int> i1;
//     CCalc<string> i2;
//     i1.set(1, 2);
//     i2.set("Kurobe", "Akiyoshi");
//     cout << i1.add() << endl << i2.add() << endl;
// }

// class CManiac {
// private:
//     const int m_iSize;
// public:
//     CManiac():m_iSize(3){}
// };


void twice(int a)
{
    cout << a << endl;
    a += 2;
    cout << a << endl;
}

