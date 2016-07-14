#ifndef DESIGN_H_
#define DESIGN_H_

#include <string>

class PoorlyDesigned {
  public:
    PoorlyDesigned(std::string data) : data_{data} {}

    std::string GetData() {
        transform_data();
        return data_;
    }

  private:
    void transform_data();

    std::string data_;
};

#endif // DESIGN_H_
