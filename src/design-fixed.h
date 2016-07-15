#ifndef DESIGN_FIXED_H_
#define DESIGN_FIXED_H_

#include <memory>
#include <string>

class BetterDesigned {
  public:
    BetterDesigned(std::string data);
    ~BetterDesigned();

    std::string GetData();

  private:
    class Impl;
    std::unique_ptr<Impl> pimpl_;
};

#endif // DESIGN_FIXED_H_
