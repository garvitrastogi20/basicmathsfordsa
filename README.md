# Basic Maths for DSA

Welcome to **Basic Maths for DSA**, a curated collection of fundamental math-based C++ programs frequently used in Data Structures and Algorithms (DSA). This repository is designed to help students, competitive programmers, and coding enthusiasts build strong mathematical foundations crucial for problem-solving and algorithm design.

---

## 📖 Table of Contents

- [About](#about)  
- [Features](#features)  
- [File Descriptions](#file-descriptions)  
- [Installation & Usage](#installation--usage)  
- [Contribution Guidelines](#contribution-guidelines)  
- [FAQ](#faq)  
- [License](#license)  
- [Contact](#contact)

---

## About

Mathematical concepts form the backbone of many algorithmic challenges. This repository compiles key math-related programs that are often prerequisites in DSA and coding interviews. From basic digit manipulation to classic algorithms like the Euclidean GCD, these programs offer hands-on practice for beginners and intermediates alike.

---

## Features

- Simple, well-commented C++ programs  
- Covers digit operations, palindrome checks, prime checks, divisors, Armstrong numbers, and Euclidean algorithm  
- Modular code structure — easy to understand and extend  
- Sample output files included for reference  
- MIT License for open and free usage

---

## File Descriptions

| File Name             | Description                                             | Complexity      | Input Constraints          |
|-----------------------|---------------------------------------------------------|-----------------|---------------------------|
| `count_digits.cpp`     | Counts the number of digits in an integer               | O(log N)        | 1 <= N <= 10^9             |
| `reverse_number.cpp`   | Reverses the digits of a given number                    | O(log N)        | 1 <= N <= 10^9             |
| `check_palindrome.cpp` | Checks if the given number reads the same backward      | O(log N)        | 1 <= N <= 10^9             |
| `gcd_or_hcf.cpp`       | Computes GCD/HCF using the Euclidean algorithm           | O(log(min(A,B)))| 1 <= A, B <= 10^9          |
| `armstrong_number.cpp` | Verifies if a number is Armstrong (sum of cubes of digits)| O(log N)       | 1 <= N <= 10^9             |
| `print_divisors.cpp`   | Prints all divisors of a given number                     | O(√N)           | 1 <= N <= 10^5             |
| `check_prime.cpp`      | Checks if a number is prime or not                        | O(√N)           | 1 <= N <= 10^9             |

---

## Installation & Usage

### Prerequisites

- C++ compiler (g++ recommended)  
- Git (optional, for cloning repo)

### Clone the Repository

```bash
git clone https://github.com/<your-username>/basic-maths-for-dsa.git
cd basic-maths-for-dsa/code
```

## Compile and Run

To compile a file, use:

```bash
g++ filename.cpp -o outputname
./outputname
```
Example
```bash
g++ count_digits.cpp -o count_digits
./count_digits\
```

## Contribution Guidelines

We welcome contributions of all kinds: bug fixes, new features, optimizations, documentation improvements, and more!

- Fork the repository  
- Create a new branch (`git checkout -b feature/your-feature`)  
- Make your changes  
- Commit your work (`git commit -m "Add some feature"`)  
- Push the branch (`git push origin feature/your-feature`)  
- Open a Pull Request  

Please ensure code is clean and well-documented. Feel free to open an issue before implementing major changes.

---

## FAQ

**Q: Can I use this code for my assignments?**  
A: Yes! This repo is open-source under the MIT license, so feel free to use and modify.

**Q: How do I add more programs?**  
A: Fork the repo, add your programs inside the `code/` folder, update this README’s table, and submit a PR.

**Q: Why are output files included?**  
A: To provide example outputs and help verify the correctness of the programs.

---

## License

This project is licensed under the MIT License.

---

## Contact

Created by Garvit Rastogi – feel free to reach out for suggestions, questions, or collaboration!


