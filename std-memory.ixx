module;
#include <memory>
export module std:memory;
export namespace std {
  using std::addressof;
  using std::allocator;
  using std::allocator_traits;
  using std::make_shared;
  using std::make_unique;
  using std::shared_ptr;
  using std::unique_ptr;
}  // namespace std
