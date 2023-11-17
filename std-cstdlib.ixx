module;
#include <cstdlib>
#include <ctime>
export module std:cstdlib;

export namespace std {
  using std::div_t;
  using std::ldiv_t;
  using std::lldiv_t;

  using std::_Exit;
  using std::abort;
  using std::at_quick_exit;
  using std::atexit;
  using std::exit;
  using std::quick_exit;

  using std::getenv;
  using std::system;

  using std::calloc;
  using std::free;
  using std::malloc;
  using std::realloc;

  using std::atof;
  using std::atoi;
  using std::atol;
  using std::atoll;
  using std::strtod;
  using std::strtof;
  using std::strtol;
  using std::strtold;
  using std::strtoll;
  using std::strtoul;
  using std::strtoull;

  using std::mblen;
  using std::mbstowcs;
  using std::mbtowc;
  using std::wcstombs;
  using std::wctomb;

  using std::bsearch;
  using std::qsort;

  using std::rand;
  using std::srand;

  using std::labs;
  using std::llabs;

  using std::div;
  using std::ldiv;
  using std::lldiv;
}  // namespace std
