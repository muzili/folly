/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <boost/filesystem.hpp>

namespace folly::fs {

enum class which_enum {
  std = 1,
  std_experimental = 2,
};

namespace std_fs = boost::filesystem;
inline constexpr which_enum which = which_enum::std;
//  imports

using std_fs::absolute;
using std_fs::canonical;
using std_fs::copy;
using std_fs::copy_file;
using std_fs::copy_options;
using std_fs::copy_symlink;
using std_fs::create_directories;
using std_fs::create_directory;
using std_fs::create_directory_symlink;
using std_fs::create_hard_link;
using std_fs::create_symlink;
using std_fs::current_path;
using std_fs::directory_entry;
using std_fs::directory_iterator;
using std_fs::directory_options;
using std_fs::equivalent;
using std_fs::exists;
using std_fs::file_size;
using std_fs::file_status;
using std_fs::file_type;
using std_fs::filesystem_error;
using std_fs::hard_link_count;
using std_fs::is_directory;
using std_fs::is_empty;
using std_fs::is_other;
using std_fs::is_regular_file;
using std_fs::is_symlink;
using std_fs::last_write_time;
using std_fs::path;
using std_fs::permissions;
using std_fs::perms;
using std_fs::read_symlink;
using std_fs::recursive_directory_iterator;
using std_fs::remove;
using std_fs::remove_all;
using std_fs::rename;
using std_fs::resize_file;
using std_fs::space;
using std_fs::space_info;
using std_fs::status;
using std_fs::status_known;
using std_fs::symlink_status;
using std_fs::temp_directory_path;

using std_fs::relative;
using std_fs::weakly_canonical;

struct lexically_normal_fn {
  path operator()(path const& p) const;
};
inline constexpr lexically_normal_fn lexically_normal;

} // namespace folly::fs
