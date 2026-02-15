#include <chrono>
#include <cmath>
#include <iostream>

using namespace std;
using namespace chrono;

// Solution 1: Use loop
long long sum_loop(int n) {
  long long s = 0;
  for (int i = 1; i <= n; i++)
    s += i;
  return s;
}

// Solution 2: Use formula
long long sum_formula(int n) { return 1LL * n * (n + 1) / 2; }

int main() {
  int N[2] = {1000000, 10000000};
  int ROUNDS = 100;

  for (int k = 0; k < 2; k++) {
    int n = N[k];

    double time_loop[10];
    double time_formula[10];

    for (int i = 0; i < ROUNDS; i++) {

      // วิธีที่ 1: ใช้ loop
      auto start = high_resolution_clock::now();
      volatile long long a = sum_loop(n); // ใช้ volatile เพื่อป้องกันการ optimize
      auto end = high_resolution_clock::now();
      time_loop[i] = duration<double, micro>(end - start).count();

      // วิธีที่ 2: ใช้สูตร
      start = high_resolution_clock::now();
      volatile long long b = sum_formula(n); // ใช้ volatile เพื่อป้องกันการ optimize
      end = high_resolution_clock::now();
      time_formula[i] = duration<double, micro>(end - start).count();
    }

    // ===== ค่าเฉลี่ย =====
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < ROUNDS; i++) {
      sum1 += time_loop[i];
      sum2 += time_formula[i];
    }

    double mean_loop = sum1 / ROUNDS;
    double mean_formula = sum2 / ROUNDS;

    // ===== ส่วนเบี่ยงเบนมาตรฐาน =====
    double sd_loop = 0, sd_formula = 0;
    for (int i = 0; i < ROUNDS; i++) {
      sd_loop += (time_loop[i] - mean_loop) * (time_loop[i] - mean_loop);
      sd_formula +=
          (time_formula[i] - mean_formula) * (time_formula[i] - mean_formula);
    }

    sd_loop = sqrt(sd_loop / ROUNDS);
    sd_formula = sqrt(sd_formula / ROUNDS);

    // แสดงผล
    cout << "n = " << n << endl;
    cout << "Loop    : mean = " << mean_loop << " us, sd = " << sd_loop << " us"
         << endl;
    cout << "Formula : mean = " << mean_formula << " us, sd = " << sd_formula
         << " us" << endl;
    cout << "----------------------------" << endl;
  }

  return 0;
}