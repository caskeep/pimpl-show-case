//
// Created by caskeep on 3/23/20.
//

#include "caller2.h"
#include "mywork.h"

void caller2::also_call_mywork() {
  mywork w2;
  w2.do_work(2);
}
