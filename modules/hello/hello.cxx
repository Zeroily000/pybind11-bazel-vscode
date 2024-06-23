#include "modules/hello/hello.h"

Hello::Hello() : value_("hello") {}

Hello::~Hello() = default;

std::string const & Hello::operator()() const {
    return value_;
}