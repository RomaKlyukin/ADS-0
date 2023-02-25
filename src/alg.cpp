// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
 int x, y, sc, r, gcd;
 if (a < 0)
  a = -a;
 if (b < 0)
  b = -b;
 if (a > b) {
  x = a;
  y = b;
 } else {
  x = b;
  y = a;
 }
 do {
  sc = 1;
  while (y < (x - sc * y)) {
   sc += 1;
  }
  r = x - (sc * y);
  x = y;
  gcd = y;
  y = r;
 } while (r != 0);
 return gcd;
}
