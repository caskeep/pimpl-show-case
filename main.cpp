#include <iostream>
#include "caller1.h"
#include "caller2.h"

int main() {

  caller1 c1;
  c1.call_mywork();

  caller2 c2;
  c2.also_call_mywork();

  return 0;
}
