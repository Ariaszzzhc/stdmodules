module;
#include <string>
export module std:string;

export namespace std {
  using std::basic_string;
  using std::basic_string_view;
  using std::string;
  using std::string_view;

  using std::getline;

  using std::operator+;
  using std::operator<;
  using std::operator<=>;

  inline namespace literals {
    using std::literals::operator""s;
  }
}  // namespace std
