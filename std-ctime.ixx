module;
#include <ctime>
export module std:ctime;

export namespace std {
  using std::asctime;
  using std::clock;
  using std::clock_t;
  using std::ctime;
  using std::difftime;
  using std::gmtime;
  using std::localtime;
  using std::mktime;
  using std::strftime;
  using std::time;
  using std::time_t;
  using std::timespec;
  using std::timespec_get;
  using std::tm;
}  // namespace std
