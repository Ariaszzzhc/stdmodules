module;
#include <cwctype>
export module std:cwctype;

export namespace std {
  using std::wctrans_t;
  using std::wctype_t;

  using std::iswalnum;
  using std::iswalpha;
  using std::iswblank;
  using std::iswcntrl;
  using std::iswctype;
  using std::iswdigit;
  using std::iswgraph;
  using std::iswlower;
  using std::iswprint;
  using std::iswpunct;
  using std::iswspace;
  using std::iswupper;
  using std::iswxdigit;
  using std::towctrans;
  using std::towlower;
  using std::towupper;
  using std::wctrans;
  using std::wctype;
}  // namespace std
