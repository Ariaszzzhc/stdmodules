module;
#include <cuchar>
export module std:cuchar;

export namespace std {
  using std::c16rtomb;
  using std::c32rtomb;
  using std::mbrtoc16;
  using std::mbrtoc32;
  using std::mbstate_t;
}  // namespace std
