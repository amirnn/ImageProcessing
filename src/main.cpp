#include <iostream>
#include <boost/gil.hpp>
using namespace boost::gil;

void x_gradient(const gray8c_view_t& src, const gray8s_view_t& dst)
{
  assert(src.dimensions() == dst.dimensions());
//   ...    // compute the gradient
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
