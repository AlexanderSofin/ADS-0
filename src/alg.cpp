// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    int res = 0;
    while (a != b) {
        res = a > b ? a -= b : b -= a;
    }
    return res;
}
