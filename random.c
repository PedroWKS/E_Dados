

#include <stdio.h>
#include "mtwister.h"

int main() {
  MTRand r = seedRand(1234567);
  int i;

  for(i=0; i<10; i++) {
    printf("%d\n",(int)( genRand(&r)*1000000));
  }

  return 0;
}

