module;
#include <cwchar>
export module std:cwchar;

export namespace std {
  using std::wint_t;

  using std::btowc;
  using std::fgetwc;
  using std::fgetws;
  using std::fputwc;
  using std::fputws;
  using std::fwide;
  using std::fwprintf;
  using std::fwscanf;
  using std::getwc;
  using std::getwchar;
  using std::putwc;
  using std::putwchar;
  using std::swprintf;
  using std::swscanf;
  using std::ungetwc;
  using std::vfwprintf;
  using std::vfwscanf;
  using std::vswprintf;
  using std::vswscanf;
  using std::vwprintf;
  using std::vwscanf;
  using std::wcscat;
  using std::wcschr;
  using std::wcscmp;
  using std::wcscoll;
  using std::wcscpy;
  using std::wcscspn;
  using std::wcsftime;
  using std::wcslen;
  using std::wcsncat;
  using std::wcsncmp;
  using std::wcsncpy;
  using std::wcspbrk;
  using std::wcsrchr;
  using std::wcsspn;
  using std::wcsstr;
  using std::wcstod;
  using std::wcstof;
  using std::wcstok;
  using std::wcstol;
  using std::wcstold;
  using std::wcstoll;
  using std::wcstoul;
  using std::wcstoull;
  using std::wcsxfrm;
  using std::wctob;
  using std::wmemchr;
  using std::wmemcmp;
  using std::wmemcpy;
  using std::wmemmove;
  using std::wmemset;
  using std::wprintf;
  using std::wscanf;

  using std::mbrlen;
  using std::mbrtowc;
  using std::mbsinit;
  using std::mbsrtowcs;
  using std::wcrtomb;
  using std::wcsrtombs;
}  // namespace std
