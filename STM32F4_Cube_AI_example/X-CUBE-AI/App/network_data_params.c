/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Feb 20 10:40:55 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[161] = {
  0x400215f53e40b457U, 0xbf35b180bf2f4b14U, 0xbf659d79bf29bd8cU, 0x3e860be0be75ea50U,
  0x3e4605f93f98b5d0U, 0xbe7162b2bbd50380U, 0xbe9e0b263e8597dfU, 0xbe5809223eb0999aU,
  0x3e6f0da23d323f5fU, 0x3f3335843b88196fU, 0xbd438a373e8f4df8U, 0xbdf825143f0db1a7U,
  0xbd1af830bdb9faf0U, 0xbf059cf2be546a4cU, 0xbe8c66f4bec46104U, 0x3e604a783e6ba2b9U,
  0xbef2b185bec51947U, 0xbf023e48bcda8679U, 0x3f4c2e2a3eb4b7fcU, 0xbe0e6178U,
  0x0U, 0x0U, 0x0U, 0x3f1428f6bf1abd62U,
  0xbda40fdf00000000U, 0x3d8cbe11bec1eba7U, 0xbedfe0a23ea75455U, 0xbc911e203e6dbd87U,
  0x3e6cfb62bed8269cU, 0xbddf02643d0a1c20U, 0xbe498113bdddfaf8U, 0x3e5d64903e978d0aU,
  0x3eccc3213eb1917fU, 0x3efa9c6e3e6a5812U, 0xbf809395be09f789U, 0xbe52e50dbd9bcfe4U,
  0x3cdd19403e811409U, 0xbdabb26cbe2cfddcU, 0xbe6df5643e61b50eU, 0xbe85c5ed3f3edb9eU,
  0x3ecb0e753ec04f0bU, 0xbecb74ef3d979c54U, 0x3f1d4be93d05d664U, 0x3e87a0bbbe6a29ffU,
  0xbec4eb9fbe8d559fU, 0xbe02c74c3e9f8867U, 0xbd4e6f903eb0535fU, 0xbeb5966ebe7492fcU,
  0xbdd1dd58be6890ddU, 0xbd5f00103d497878U, 0x3f30d0abbe4461a9U, 0x3edce1c3bf077aceU,
  0x3e92b5e33ec6eb6dU, 0xbe2759b63eae80e7U, 0xbeda40823cc5baf0U, 0xbd7daf493ed3828bU,
  0x3a1f9efc3ea53c39U, 0x3e839079be209ddaU, 0xbead9e153e8c91ddU, 0x3ec5ec4b3e9e1cd1U,
  0x3ea801913e543d32U, 0x3e1426cebe0217d8U, 0xbe7a0271bec3ea58U, 0x3cbb84f53e433292U,
  0x3e25cf3a3d696388U, 0xbeb6351c3ebbfe89U, 0x3e8da964bda36ca4U, 0xbd9dedf8bee560dfU,
  0xbc8586b03eb71039U, 0xbe8a02c4be5a17afU, 0xbd8a90f03ebd30bdU, 0x3e460e483ea8f311U,
  0xbcbd58ebbeb90ae2U, 0x3eb7520d3e0409fbU, 0xbdaf33d53ec0f470U, 0x3e78c7823e2c789cU,
  0xbd22b920bebbf91fU, 0xbe8bb872be854412U, 0xbec8c900beabf40bU, 0xbd251d6f3e980becU,
  0x3de7c7043ec2f8d5U, 0x3d31fc50be9f7e3eU, 0xbeb309e4be9edc56U, 0x3ed68bb5be7be3c3U,
  0xbe9105ea3e056ba2U, 0x3ed76c7f3e346c5aU, 0xbc5440a0be7df62dU, 0x3ed486993ec6c6f3U,
  0xbf13d2c33ed1ea99U, 0xbe837277bec5d446U, 0x3ebc296e3efe981bU, 0xbde7465cbef8e3abU,
  0xbd4b8a78bebcedb8U, 0x3e97f79f3ed02c5fU, 0xbe09cc243d9d5d14U, 0x3ec4c30cbed245fcU,
  0xbdab855abe5ae594U, 0x3c1a58793e079393U, 0xbc4f04ca3ea8940dU, 0x3d510e003df41e48U,
  0xbd556f98be4eaacaU, 0xbd3013003e8afcefU, 0x3eab369dbcb5a2e0U, 0x3e2f2f32be87803cU,
  0x3c632a803e9e3357U, 0x3e04d052bead4393U, 0xbeab1f46beb09926U, 0x3e100956bea35786U,
  0x3e9b49adbe9ad2d1U, 0xbe7678efbe34bbaeU, 0xbe3775343ec71f1fU, 0x3eb635d13e9cbd95U,
  0x3e7059bbbed95a4bU, 0xbdaf71893eb2ccabU, 0xbe05b799bdd6ef00U, 0x3d5e7b203eb4aac5U,
  0x3ec9ab0dbceda790U, 0xbec16493beaa3f83U, 0x3d8dd464be96fe34U, 0xbea6f0bdbeaa0e7cU,
  0x3b1cf588bd3f7860U, 0x3ea146c93e5bf7abU, 0xbb4e89223e8aa741U, 0x3e9eb549bd96d07eU,
  0xbea3ba543c8be720U, 0xbdf3a0a8be380020U, 0xbe714cce3d5bb5f8U, 0xbee55a31be4afcd1U,
  0xbebc57fdbec0eca8U, 0x3ef318e1be9ed736U, 0x3e7eb9d2be093a06U, 0x3ed456dfbd758bf7U,
  0xbe9ad262bec6bffbU, 0xbe40a477be3c31f7U, 0xbc3bede0be1e31a6U, 0x3e4b09873dc3135cU,
  0xbe3f01e6bcde3440U, 0x3e8181aa3e5c8e16U, 0xbdd508a83e9028e3U, 0xbec5c9233dba5cd7U,
  0x3eb19dd33ed17d3bU, 0xbcbf40c03dee8304U, 0x3e944813be4d9812U, 0x3ea5be513e89039dU,
  0x3e20b827be87a9c8U, 0x3efd3b03be227e82U, 0xbea7a4083e75e7fdU, 0xbec79d85bdfd1b9eU,
  0xbcd30d603df73bf4U, 0x3e8e96f9beb688b3U, 0xbe58bd6f3e1f9ff2U, 0x3e91f3d13e9b8c33U,
  0x3db5d92fbeaf5debU, 0x3e5cbb17bf278962U, 0xbdd62b473e94e2c9U, 0xbe2195523e78cceaU,
  0x3ee0910600000000U, 0x3d23dd42U, 0x3d3dcaf8bc614e02U, 0x3d244f61be12e5b2U,
  0xbdc2889dU,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

