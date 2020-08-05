/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __VCON_ONE_H__
#define __VCON_ONE_H__

#include <cstdint>
#include <string>

namespace vconone
{

struct four
{
  uint16_t major;
  uint16_t minor;
  uint16_t patch;
  uint16_t build; // build is not used for now
};

union version {
  uint64_t v;
  four f;
};

/**
 * @brief get_number will return version union structure
 */
version get_number(void);

/**
 * @brief get_string will return string of major.minor.patch (without build)
 */
std::string get_string(void);

/**
 * @brief get_string4 will return string of major.minor.patch.build
 */
std::string get_string4(void);

/**
 * @brief get_copyright will return copyright string
 */
std::string get_copyright(void);

} // namespace vconone

#endif // __VCON_ONE_H__
