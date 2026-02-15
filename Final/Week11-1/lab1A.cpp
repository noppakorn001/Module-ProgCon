#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

// Algorithm 3.1: O(n^2)
bool ALGO1(const vector<int> &a) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    int c = 0;
    for (int j = 0; j < n; j++)
      if (a[i] == a[j])
        c++;
    if (c > n / 2)
      return true;
  }
  return false;
}

// Algorithm 3.2: O(n log n)
bool ALGO2(vector<int> &a) {
  int n = a.size();
  if (n <= 1)
    return (n == 1);

  sort(a.begin(), a.end());

  int d = a[0], c = 1;
  for (int i = 1; i < n; i++) {
    if (d == a[i])
      c++;
    else {
      d = a[i];
      c = 1;
    }
    if (c > n / 2)
      return true;
  }
  return false;
}

int main() {
  srand(time(0));
  int test_n[] = {50000, 100000, 200000, 500000};
  int rounds = 10;
  cout << fixed << setprecision(6);

  for (int current_n : test_n) {
    vector<double> t1, t2;

    for (int r = 0; r < rounds; r++) {
      vector<int> data(current_n);
      for (int &x : data)
        x = rand() % 100;

      // วัด ALGO 3.1
      clock_t start = clock();
      volatile bool res1 = ALGO1(data);
      t1.push_back((double)(clock() - start) / CLOCKS_PER_SEC);

      // วัด ALGO 3.22
      vector<int> data_copy = data;
      start = clock();
      volatile bool res2 = ALGO2(data_copy);
      t2.push_back((double)(clock() - start) / CLOCKS_PER_SEC);
    }

    auto get_mean = [](const vector<double> &v) {
      double s = 0;
      for (double x : v)
        s += x;
      return s / v.size();
    };
    auto get_sd = [](const vector<double> &v, double m) {
      double s = 0;
      for (double x : v)
        s += pow(x - m, 2);
      return sqrt(s / v.size());
    };

    double m1 = get_mean(t1), m2 = get_mean(t2);
    cout << current_n << "\t" << m1 << "\t" << get_sd(t1, m1) << "\t" << m2
         << "\t" << get_sd(t2, m2) << endl;
  }
  return 0;
}