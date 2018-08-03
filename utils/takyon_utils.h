// Copyright 2018 Abaco Systems
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//     http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _takyon_utils_h_
#define _takyon_utils_h_

#include "takyon.h"

#ifdef __cplusplus
extern "C"
{
#endif

// Time
extern void takyonSleep(double dseconds);
extern double takyonTime();

// Endian
extern int takyonEndianIsBig();
extern void takyonEndianSwapUInt16(uint16_t *data, uint64_t num_elements);
extern void takyonEndianSwapUInt32(uint32_t *data, uint64_t num_elements);
extern void takyonEndianSwapUInt64(uint64_t *data, uint64_t num_elements);

#ifdef __cplusplus
}
#endif

#endif
