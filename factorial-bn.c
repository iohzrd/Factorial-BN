#include <stdio.h>
#include <gmp.h>

int main()
{
  unsigned long n;
  unsigned long i = 1;

  mpz_t f, ii;
  mpz_init_set_ui(f, i);

  printf("Calculate factorial of? ");
  scanf("%lu", &n);

  while(i <= n)
  {
    mpz_init_set_ui(ii, i);
    mpz_mul(f, ii, f);
    ++i;
  }
  gmp_printf("%lu! = %Zd\n", n, f);

  mpz_clear(f);
}
