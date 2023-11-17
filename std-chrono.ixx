module;
#include <chrono>
#include <ratio>
export module std:chrono;
export namespace std {
  namespace chrono {
    using std::chrono::duration;
    using std::chrono::duration_cast;
    using std::chrono::microseconds;
    using std::chrono::milliseconds;
    using std::chrono::nanoseconds;
    using std::chrono::seconds;

    using std::chrono::operator>;
    using std::chrono::operator>=;
    using std::chrono::operator<;
    using std::chrono::operator<=;
    using std::chrono::operator==;

    using std::chrono::operator+;
    using std::chrono::operator-;

    using std::chrono::minutes;
    using std::chrono::weeks;
    using std::chrono::years;

    using std::chrono::time_point;

    using std::chrono::high_resolution_clock;
  }  // namespace chrono
}  // namespace std
export namespace std {
  using std::centi;
  using std::deca;
  using std::hecto;
  using std::micro;
  using std::nano;
  using std::ratio;
  using std::ratio_multiply;
}  // namespace std

export namespace std {
  inline namespace literals {
    inline namespace chrono_literals {
      using std::literals::chrono_literals::operator""s;
    }
  }  // namespace literals
}  // namespace std
