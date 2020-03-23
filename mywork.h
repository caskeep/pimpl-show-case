//
// Created by caskeep on 3/23/20.
//

#ifndef PIMPL_TEST1_MYWORK_H
#define PIMPL_TEST1_MYWORK_H

#include <memory>

class mywork {
public:
  mywork();
  ~mywork();
  void do_work(int param);
private:
//  int recal_param(int param);
  class mywork_impl;
  std::unique_ptr<mywork_impl> pimpl_;
};

#endif // PIMPL_TEST1_MYWORK_H
