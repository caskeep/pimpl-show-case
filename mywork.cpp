//
// Created by caskeep on 3/23/20.
//

#include "mywork.h"
#include <iostream>

class mywork::mywork_impl {
public:
  void do_mywork_imp(int param);

private:
//  int recal_param(int param);
};

mywork::mywork() : pimpl_(std::make_unique<mywork::mywork_impl>()) {}

mywork::~mywork() = default;

void mywork::do_work(int param) {
  std::cout << "internal impl of mywork param " << recal_param(param) << std::endl;
}

int mywork::recal_param(int param) { return ++param; }

void mywork::mywork_impl::do_mywork_imp(int param) {
  std::cout << "internal impl of mywork param " << param << std::endl;
//  std::cout << "internal impl of mywork param " << recal_param(param) << std::endl;
}

//int mywork::mywork_impl::recal_param(int param) { return param++; }
