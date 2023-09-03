#include <vector>
#include <eigen3/Eigen/Dense>


class HMM{
public:
  HMM(unsigned , unsigned, std::vector<double> );
  HMM(HMM &&) = default;
  HMM(const HMM &) = default;
  // HMM &operator=(HMM &&) = default;
  // HMM &operator=(const HMM &) = default;
  // ~HMM();
  void print_model() const;

  void set_A(const Eigen::MatrixXd &A);
  void print_A() const;

  void random_init_A();

private:
  const unsigned N;
  const unsigned M;
  std::vector<double> pi;
  Eigen::MatrixXd A;
  Eigen::MatrixXd B;
  
};
