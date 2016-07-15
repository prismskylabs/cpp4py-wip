#include "design-fixed.h"

#include <string>

class BetterDesigned::Impl {
  public:
    Impl(std::string data) : data_{data} {}

    std::string GetData() {
        transform_data();
	    return data_;
    }

  private:
    void transform_data() {
        data_ = data_ + data_;
    }

    std::string data_;
};

BetterDesigned::BetterDesigned(std::string data) : pimpl_{new Impl{data}} {}
BetterDesigned::~BetterDesigned() {}

std::string BetterDesigned::GetData() {
    return pimpl_->GetData();
}
