#include <torch/torch.h>
#include <iostream>

int main() {
  auto v1 = std::vector<float>{1,2,3,4,5,6};
  torch::Tensor t1 = torch::from_blob(v1.data(), {3, 2});
  std::cout << t1 << std::endl;
  auto mean = torch::mean(t1, 0);
  auto sd = torch::std(t1, 0);
  auto norm_data = t1.sub(mean).div(sd);
  std::cout << mean << std::endl;
  std::cout << sd << std::endl;
  std::cout << norm_data << std::endl;
}