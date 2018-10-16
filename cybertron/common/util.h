/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef CYBERTRON_COMMON_UTIL_H_
#define CYBERTRON_COMMON_UTIL_H_

#include <string>

namespace apollo {
namespace cybertron {
namespace common {

inline std::size_t Hash(const std::string& key) {
  return std::hash<std::string>{}(key);
}

}  // namespace common
}  // namespace cybertron
}  // namespace apollo

#endif  // CYBERTRON_COMMON_UTIL_H_