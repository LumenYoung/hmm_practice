#include "hmm.h"

#include <eigen3/Eigen/src/Core/Matrix.h>

#include <iostream>

HMM::HMM(unsigned N, unsigned M, std::vector<double> pi)
    : N(N), M(M), pi(pi), A(Eigen::MatrixXd(N, N)) {}

void HMM::print_model() const {
  std::cout << "The model parameters:" << std::endl;
  std::cout << "N: " << N << std::endl;
  std::cout << "M: " << M << std::endl;
  std::cout << "pi: ";
  for (auto p : pi) std::cout << p << " " << std::endl;
}

void HMM::set_A(const Eigen::MatrixXd &Amatrix) { A = Amatrix; }

void HMM::random_init_A() { A = Eigen::MatrixXd::Random(N, N); }

void HMM::print_A() const {
  printf("A:\n");
  // const Eigen::IOFormat fmt(2, Eigen::DontAlignCols, "\t", " ", "", "", "", "");
  Eigen::IOFormat OctaveFmt(Eigen::StreamPrecision, 0, ", ", ";\n", "", "", "[", "]");
  std::cout << A.transpose().format(OctaveFmt) << std::endl;
}
