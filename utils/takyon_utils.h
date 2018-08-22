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
extern bool takyonEndianIsBig();
extern void takyonEndianSwapUInt16(uint16_t *data, uint64_t num_elements);
extern void takyonEndianSwapUInt32(uint32_t *data, uint64_t num_elements);
extern void takyonEndianSwapUInt64(uint64_t *data, uint64_t num_elements);

// Setting path attributes
TakyonPathAttributes takyonAllocAttributes(bool is_endpointA, bool is_polling, int nbufs_AtoB, int nbufs_BtoA, uint64_t bytes, double timeout, const char *interconnect);
void takyonFreeAttributes(TakyonPathAttributes attrs);

#ifdef __cplusplus
}
#endif

#endif
