module;
#include <csignal>
export module std:csignal;

export namespace std {
  using std::raise;
  using std::sig_atomic_t;
  using std::signal;
}  // namespace std
