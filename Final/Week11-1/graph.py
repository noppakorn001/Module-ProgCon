import matplotlib.pyplot as plt
import numpy as np

# ข้อมูลจากผลการรัน
N = np.array([5000, 10000, 20000, 50000])

# ข้อมูลของ ALGO 3.1 (O(n^2))
algo31_mean = np.array([0.080657, 0.354788, 1.417541, 8.105283])
algo31_sd = np.array([0.014173, 0.001593, 0.003027, 1.082870])

# ข้อมูลของ ALGO 3.2 (O(n log n))
algo32_mean = np.array([0.000711, 0.001534, 0.003247, 0.008727])
algo32_sd = np.array([0.000064, 0.000017, 0.000034, 0.000629])

# สร้างกราฟ
plt.figure(figsize=(12, 6))

# 1. กราฟแบบ Linear Scale (ซ้าย)
plt.subplot(1, 2, 1)
plt.errorbar(N, algo31_mean, yerr=algo31_sd, fmt='o-', label='ALGO 3.1 ($O(n^2)$)', color='tab:red', capsize=5)
plt.errorbar(N, algo32_mean, yerr=algo32_sd, fmt='s-', label='ALGO 3.2 ($O(n \log n)$)', color='tab:blue', capsize=5)
plt.title('Algorithm Comparison (Linear Scale)')
plt.xlabel('Input Size ($N$)')
plt.ylabel('Execution Time (seconds)')
plt.grid(True, linestyle='--', alpha=0.6)
plt.legend()

# 2. กราฟแบบ Log Scale (ขวา) เพื่อให้เห็นความแตกต่างของ ALGO 3.2 ที่มีค่าน้อยมากๆ
plt.subplot(1, 2, 2)
plt.errorbar(N, algo31_mean, yerr=algo31_sd, fmt='o-', label='ALGO 3.1 ($O(n^2)$)', color='tab:red', capsize=5)
plt.errorbar(N, algo32_mean, yerr=algo32_sd, fmt='s-', label='ALGO 3.2 ($O(n \log n)$)', color='tab:blue', capsize=5)
plt.yscale('log')
plt.title('Algorithm Comparison (Log Scale)')
plt.xlabel('Input Size ($N$)')
plt.ylabel('Execution Time (seconds) - Log Scale')
plt.grid(True, which="both", ls="-", alpha=0.2)
plt.legend()

plt.tight_layout()
plt.savefig('performance_comparison.png')
plt.show()