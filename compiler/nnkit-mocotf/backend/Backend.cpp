/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd. All Rights Reserved
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

#include "nnkit/support/moco/tf/Backend.h"

#include <nnkit/CmdlineArguments.h>
#include <stdex/Memory.h>

#include <cassert>

extern "C" std::unique_ptr<nnkit::Backend> make_backend(const nnkit::CmdlineArguments &args)
{
  using stdex::make_unique;

  assert(args.size() == 2); // args.at[0] : *.pb path, args.at[1]: *.info path

  return make_unique<::nnkit::support::moco::tf::Backend>(args.at(0), args.at(1));
}
