#include "hmm.h"

int main (int argc, char *argv[]) {

  std::vector<double> pi{0.5, 0.5};

  HMM hmm1(2, 2, pi);

  hmm1.print_model();

  hmm1.random_init_A();

  hmm1.print_A();
  
  return 0;
}
