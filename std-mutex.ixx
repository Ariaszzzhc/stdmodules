module;
#include <mutex>
export module std:mutex;
export namespace std {
  using std::lock;
  using std::lock_guard;
  using std::mutex;
  // FIXME: We couldn't export non-inline constexpr variables.
  inline constexpr std::defer_lock_t defer_lock_in_modules = std::defer_lock;
  inline constexpr std::try_to_lock_t try_to_lock_in_modules = std::try_to_lock;
  using std::scoped_lock;
  using std::unique_lock;
}  // namespace std
