// -*-c++-*---------------------------------------------------------------------------------------
// Copyright 2023 Bernd Pfrommer <bernd.pfrommer@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LIBCAER_DRIVER__DEVICE__DAVIS_HPP_
#define LIBCAER_DRIVER__DEVICE__DAVIS_HPP_

#include <libcaer_driver/device/device.hpp>

namespace libcaer_driver
{
class Davis : public Device
{
public:
  explicit Davis(int16_t chipId);
  void resetTimeStamps() override;
  void setExposureTime(int32_t t) override;
  int32_t getExposureTime() const override;
};

}  // namespace libcaer_driver
#endif  // LIBCAER_DRIVER__DEVICE__DAVIS_HPP_
