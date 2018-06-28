// Copyright (c) 2018 Personal (Binbin Zhang)
// Created on 2018-06-27
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "resource-manager.h"

namespace xdecoder {

ResourceManager::ResourceManager(): beam_(13.0) {
}

void ResourceManager::SetBeam(float beam) {
  beam_ = beam;
}

float ResourceManager::beam() const {
  return beam_;
}

}  // namespace xdecoder
