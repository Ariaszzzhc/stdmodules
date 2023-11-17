module;
#include <clocale>
export module std:clocale;

export namespace std {
  using std::lconv;

  using std::localeconv;
  using std::setlocale;
}  // namespace std
