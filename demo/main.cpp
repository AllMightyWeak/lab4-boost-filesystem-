// Copyright by AllMightyWeak

#include <header.hpp>
#include <iostream>


int main() {
  // path  менять в зависимости от системы
  std::string path("/home/user/Desktop/JBCL/lab4/lab4/misc/ftp");
  Filesystem test(path);
  std::cout << test;
}