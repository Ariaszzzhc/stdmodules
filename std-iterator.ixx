module;
#include <iterator>
export module std:iterator;
export namespace std {
  using std::distance;
  using std::iterator_traits;
  using std::ostream_iterator;
  using std::operator-;

  using std::begin;
  using std::end;
}  // namespace std
