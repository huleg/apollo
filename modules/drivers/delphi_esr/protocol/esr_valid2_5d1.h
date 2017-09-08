/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
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

#ifndef MODULES_DRIVERS_DELPHI_ESR_PROTOCOL_ESR_VALID2_5D1_H_
#define MODULES_DRIVERS_DELPHI_ESR_PROTOCOL_ESR_VALID2_5D1_H_

#include "modules/drivers/proto/delphi_esr.pb.h"
#include "modules/drivers/sensor_protocol_data.h"

namespace apollo {
namespace drivers {
namespace delphi_esr {

using apollo::drivers::DelphiESR;


class Esrvalid25d1 : public SensorProtocolData<DelphiESR> {
 public:
  static const int32_t ID;
  Esrvalid25d1();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     DelphiESR* delphi_esr) const override;

 private:

  // config detail: {'name': 'CAN_TX_VALID_MR_SN', 'offset': 0.0, 'precision': 1.0, 'len': 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 7, 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
  int can_tx_valid_mr_sn(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'CAN_TX_VALID_MR_RANGE_RATE', 'offset': 0.0, 'precision': 0.0078125, 'len': 16, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 31, 'type': 'double', 'order': 'motorola', 'physical_unit': 'm/s'}
  double can_tx_valid_mr_range_rate(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'CAN_TX_VALID_MR_RANGE', 'offset': 0.0, 'precision': 0.0078125, 'len': 16, 'is_signed_var': False, 'physical_range': '[0|200]', 'bit': 15, 'type': 'double', 'order': 'motorola', 'physical_unit': 'm'}
  double can_tx_valid_mr_range(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'CAN_TX_VALID_MR_POWER', 'offset': 0.0, 'precision': 1.0, 'len': 8, 'is_signed_var': True, 'physical_range': '[-10|40]', 'bit': 63, 'type': 'int', 'order': 'motorola', 'physical_unit': 'dB'}
  int can_tx_valid_mr_power(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'CAN_TX_VALID_MR_ANGLE', 'offset': 0.0, 'precision': 0.0625, 'len': 16, 'is_signed_var': True, 'physical_range': '[-64|63.9375]', 'bit': 47, 'type': 'double', 'order': 'motorola', 'physical_unit': 'deg'}
  double can_tx_valid_mr_angle(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace delphi_esr
}  // namespace drivers
}  // namespace apollo

#endif  // MODULES_CANBUS_VEHICL_ESR_PROTOCOL_ESR_VALID2_5D1_H_
