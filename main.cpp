#include <iostream>
#include <ostream>
#include <string>
#include <vector>

constexpr int quadratic(int x) {
  ;
  return x * x;
}

int main(int Argc, char **Argv) {
  std::vector<std::string> Args(Argv + 1, Argv + Argc);
  for (const auto &Arg : Args)
    std::cout << Arg << "\n";

  std::cout << "Result: " << quadratic(22) << std::endl;
}
