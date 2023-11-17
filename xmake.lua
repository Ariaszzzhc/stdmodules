add_rules("mode.release", "mode.debug")
set_languages("c++20")

target("std")
    set_kind("static")
    add_files("./std-*.ixx", "./std.ixx")

target("std.compat")
    set_kind("static")
    add_deps("std")
    add_files("./std.compat.ixx")
