//#ifndef RECURSION_SET_H_
#define RECURSION_SET_H_

/*
 * Implement the recursive function to compute the nth power of base.
 * For example, exponential(2, 0) is 2^0 (2 to the power of 0), so it is 1.
 */
int exponential(int base, int n) {
  if (n == 0) return 1;
  return n * exponential(base, n - 1);
}

/*
 * Implement the recursive function to compute the log x with base.
 * For example, logarithm(2, 1) is log(1), base 2, so it is 0.
 */
int logarithm(int base, int x) {
  return -1;
}

/*
 * Sum all the digits for a given number n.
 * For example, sum_of_digit(123) = 1 + 2 + 3 = 6.
 */
int sum_of_digit(int n) {
  return -1;
}

/*
 * Count how many 6's exist for a given number n.
 * For example, count_six(456) = 1, and count_six(666) = 3.
 */
int count_six(int n) {
  return -1;
}

/*
 * Find the greatest common divisor of x and y.
 */
int gcd(int x, int y) {
  return -1;
}

/*
 * Determine how many 'steps' are needed for a given number n to be zero.
 * 'Steps' are defined as the number of divisions by 2.
 * For example, if n = 9, you will need 5 'steps' to reach 0.
 * Sequence: 9, 4, 2, 1, 0
 * Ignore remainders.
 */
int div2(int n) {
  return -1;
}

/*
 * Find how many steps will be needed to return 6174, a kaprekar constant
 */
int kaprekar(int n) {
  return -1;
}
