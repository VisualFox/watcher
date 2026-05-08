#pragma once

/*  This is the public interface.
    Include and use this file.

    WTR_NO_RENAME: when defined, OS move events are reported as create/destroy
    pairs instead of paired rename events; removes all move-pairing machinery.
    Pass -DWTR_NO_RENAME or enable the CMake option of the same name.

    WTR_NO_SYMLINK: when defined, symbolic links are reported as path_type::file
    instead of path_type::sym_link; removes all is_symlink() calls.
    Pass -DWTR_NO_SYMLINK or enable the CMake option of the same name. */

// clang-format off
#include "wtr/watcher-/event.hpp"
#include "detail/wtr/watcher/semabin.hpp"
#include "detail/wtr/watcher/adapter/darwin/watch.hpp"
#include "detail/wtr/watcher/adapter/linux/sysres.hpp"
#include "detail/wtr/watcher/adapter/linux/fanotify/watch.hpp"
#include "detail/wtr/watcher/adapter/linux/inotify/watch.hpp"
#include "detail/wtr/watcher/adapter/linux/watch.hpp"
#include "detail/wtr/watcher/adapter/windows/watch.hpp"
#include "detail/wtr/watcher/adapter/warthog/watch.hpp"
#include "wtr/watcher-/watch.hpp"
// clang-format on
