/*
** Copyright (c) 2026 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#ifndef GFXRECON_GRAPHICS_VULKAN_RESOURCES_UTIL_SC_BRIDGE_H
#define GFXRECON_GRAPHICS_VULKAN_RESOURCES_UTIL_SC_BRIDGE_H

#include "util/defines.h"

#include <vector>

// vulkan_resources_util.h includes vulkan/vulkan.h and declares functions
// against types (VkPhysicalDeviceMemoryProperties, VkTensorFormatPropertiesARM,
// ...) that vulkan_sc.h does not define, so a Vulkan SC translation unit under
// vulkansc_shim cannot include it. VkFormat and VkDeviceSize are the same
// types in both header sets, so redeclaring signatures built only from those
// (plus VkFlags) is safe -- the definitions already exist in gfxrecon_graphics,
// which the Vulkan SC object library links transitively through
// gfxrecon_encode. VkImageAspectFlagBits is NOT the same type in both header
// sets: plain Vulkan declares it as an enum, Vulkan SC as a VkFlags typedef,
// and the two mangle differently, so the two functions below are the VkFlags
// overloads of GetFormatAspects/GetImageAspectFormat, not the enum ones.
// Include a Vulkan header (plain or SC) before this one; it does not declare
// VkFormat itself.

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(graphics)

void GetFormatAspects(VkFormat format, std::vector<VkFlags>* aspects, bool* combined_depth_stencil);

VkFormat GetImageAspectFormat(VkFormat format, VkFlags aspect);

bool GetImageTexelSize(VkFormat      format,
                        VkDeviceSize* texel_size,
                        bool*         is_texel_block_size,
                        uint16_t*     block_width,
                        uint16_t*     block_height);

GFXRECON_END_NAMESPACE(graphics)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_GRAPHICS_VULKAN_RESOURCES_UTIL_SC_BRIDGE_H
