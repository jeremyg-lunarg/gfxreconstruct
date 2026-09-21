/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2026 LunarG, Inc.
** Copyright (c) 2023 Advanced Micro Devices, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#ifndef  GFXRECON_GENERATED_VULKAN_DECODER_ARGS_H
#define  GFXRECON_GENERATED_VULKAN_DECODER_ARGS_H

#include "decode/custom_vulkan_struct_decoders.h"
#include "decode/handle_pointer_decoder.h"
#include "decode/pointer_decoder.h"
#include "decode/string_array_decoder.h"
#include "decode/string_decoder.h"
#include "decode/struct_pointer_decoder.h"
#include "decode/vulkan_pnext_node.h"
#include "format/format.h"
#include "generated/generated_vulkan_struct_decoders.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"
#include "vk_video/vulkan_video_codec_h264std.h"
#include "vk_video/vulkan_video_codec_h264std_decode.h"
#include "vk_video/vulkan_video_codec_h264std_encode.h"
#include "vk_video/vulkan_video_codec_h265std.h"
#include "vk_video/vulkan_video_codec_h265std_decode.h"
#include "vk_video/vulkan_video_codec_h265std_encode.h"
#include "vk_video/vulkan_video_codecs_common.h"

#ifdef WIN32
#ifdef CreateEvent
#undef CreateEvent
#endif
#ifdef CreateSemaphore
#undef CreateSemaphore
#endif
#endif

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)
GFXRECON_BEGIN_NAMESPACE(args)

struct CreateInstance
{
    VkResult result;
    StructPointerDecoder<Decoded_VkInstanceCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkInstance> pInstance;
};


struct DestroyInstance
{
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct EnumeratePhysicalDevices
{
    VkResult result;
    format::HandleId instance;
    PointerDecoder<uint32_t> pPhysicalDeviceCount;
    HandlePointerDecoder<VkPhysicalDevice> pPhysicalDevices;
};


struct GetPhysicalDeviceFeatures
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures> pFeatures;
};


struct GetPhysicalDeviceFormatProperties
{
    format::HandleId physicalDevice;
    VkFormat format;
    StructPointerDecoder<Decoded_VkFormatProperties> pFormatProperties;
};


struct GetPhysicalDeviceImageFormatProperties
{
    VkResult result;
    format::HandleId physicalDevice;
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;
    StructPointerDecoder<Decoded_VkImageFormatProperties> pImageFormatProperties;
};


struct GetPhysicalDeviceProperties
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties> pProperties;
};


struct GetPhysicalDeviceQueueFamilyProperties
{
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pQueueFamilyPropertyCount;
    StructPointerDecoder<Decoded_VkQueueFamilyProperties> pQueueFamilyProperties;
};


struct GetPhysicalDeviceMemoryProperties
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties> pMemoryProperties;
};


struct CreateDevice
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkDeviceCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDevice> pDevice;
};


struct DestroyDevice
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetDeviceQueue
{
    format::HandleId device;
    uint32_t queueFamilyIndex;
    uint32_t queueIndex;
    HandlePointerDecoder<VkQueue> pQueue;
};


struct QueueSubmit
{
    VkResult result;
    format::HandleId queue;
    uint32_t submitCount;
    StructPointerDecoder<Decoded_VkSubmitInfo> pSubmits;
    format::HandleId fence;
};


struct QueueWaitIdle
{
    VkResult result;
    format::HandleId queue;
};


struct DeviceWaitIdle
{
    VkResult result;
    format::HandleId device;
};


struct AllocateMemory
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryAllocateInfo> pAllocateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDeviceMemory> pMemory;
};


struct FreeMemory
{
    format::HandleId device;
    format::HandleId memory;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct MapMemory
{
    VkResult result;
    format::HandleId device;
    format::HandleId memory;
    VkDeviceSize offset;
    VkDeviceSize size;
    VkMemoryMapFlags flags;
    PointerDecoder<uint64_t, void*> ppData;
};


struct UnmapMemory
{
    format::HandleId device;
    format::HandleId memory;
};


struct FlushMappedMemoryRanges
{
    VkResult result;
    format::HandleId device;
    uint32_t memoryRangeCount;
    StructPointerDecoder<Decoded_VkMappedMemoryRange> pMemoryRanges;
};


struct InvalidateMappedMemoryRanges
{
    VkResult result;
    format::HandleId device;
    uint32_t memoryRangeCount;
    StructPointerDecoder<Decoded_VkMappedMemoryRange> pMemoryRanges;
};


struct GetDeviceMemoryCommitment
{
    format::HandleId device;
    format::HandleId memory;
    PointerDecoder<VkDeviceSize> pCommittedMemoryInBytes;
};


struct BindBufferMemory
{
    VkResult result;
    format::HandleId device;
    format::HandleId buffer;
    format::HandleId memory;
    VkDeviceSize memoryOffset;
};


struct BindImageMemory
{
    VkResult result;
    format::HandleId device;
    format::HandleId image;
    format::HandleId memory;
    VkDeviceSize memoryOffset;
};


struct GetBufferMemoryRequirements
{
    format::HandleId device;
    format::HandleId buffer;
    StructPointerDecoder<Decoded_VkMemoryRequirements> pMemoryRequirements;
};


struct GetImageMemoryRequirements
{
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkMemoryRequirements> pMemoryRequirements;
};


struct GetImageSparseMemoryRequirements
{
    format::HandleId device;
    format::HandleId image;
    PointerDecoder<uint32_t> pSparseMemoryRequirementCount;
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements> pSparseMemoryRequirements;
};


struct GetPhysicalDeviceSparseImageFormatProperties
{
    format::HandleId physicalDevice;
    VkFormat format;
    VkImageType type;
    VkSampleCountFlagBits samples;
    VkImageUsageFlags usage;
    VkImageTiling tiling;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties> pProperties;
};


struct QueueBindSparse
{
    VkResult result;
    format::HandleId queue;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindSparseInfo> pBindInfo;
    format::HandleId fence;
};


struct CreateFence
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkFenceCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkFence> pFence;
};


struct DestroyFence
{
    format::HandleId device;
    format::HandleId fence;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct ResetFences
{
    VkResult result;
    format::HandleId device;
    uint32_t fenceCount;
    HandlePointerDecoder<VkFence> pFences;
};


struct GetFenceStatus
{
    VkResult result;
    format::HandleId device;
    format::HandleId fence;
};


struct WaitForFences
{
    VkResult result;
    format::HandleId device;
    uint32_t fenceCount;
    HandlePointerDecoder<VkFence> pFences;
    VkBool32 waitAll;
    uint64_t timeout;
};


struct CreateSemaphore
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSemaphore> pSemaphore;
};


struct DestroySemaphore
{
    format::HandleId device;
    format::HandleId semaphore;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateQueryPool
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkQueryPoolCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkQueryPool> pQueryPool;
};


struct DestroyQueryPool
{
    format::HandleId device;
    format::HandleId queryPool;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetQueryPoolResults
{
    VkResult result;
    format::HandleId device;
    format::HandleId queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
    VkDeviceSize stride;
    VkQueryResultFlags flags;
};


struct CreateBuffer
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkBuffer> pBuffer;
};


struct DestroyBuffer
{
    format::HandleId device;
    format::HandleId buffer;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateImage
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkImage> pImage;
};


struct DestroyImage
{
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetImageSubresourceLayout
{
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkImageSubresource> pSubresource;
    StructPointerDecoder<Decoded_VkSubresourceLayout> pLayout;
};


struct CreateImageView
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageViewCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkImageView> pView;
};


struct DestroyImageView
{
    format::HandleId device;
    format::HandleId imageView;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateCommandPool
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCommandPoolCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkCommandPool> pCommandPool;
};


struct DestroyCommandPool
{
    format::HandleId device;
    format::HandleId commandPool;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct ResetCommandPool
{
    VkResult result;
    format::HandleId device;
    format::HandleId commandPool;
    VkCommandPoolResetFlags flags;
};


struct AllocateCommandBuffers
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo> pAllocateInfo;
    HandlePointerDecoder<VkCommandBuffer> pCommandBuffers;
};


struct FreeCommandBuffers
{
    format::HandleId device;
    format::HandleId commandPool;
    uint32_t commandBufferCount;
    HandlePointerDecoder<VkCommandBuffer> pCommandBuffers;
};


struct BeginCommandBuffer
{
    VkResult result;
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCommandBufferBeginInfo> pBeginInfo;
};


struct EndCommandBuffer
{
    VkResult result;
    format::HandleId commandBuffer;
};


struct ResetCommandBuffer
{
    VkResult result;
    format::HandleId commandBuffer;
    VkCommandBufferResetFlags flags;
};


struct CmdCopyBuffer
{
    format::HandleId commandBuffer;
    format::HandleId srcBuffer;
    format::HandleId dstBuffer;
    uint32_t regionCount;
    StructPointerDecoder<Decoded_VkBufferCopy> pRegions;
};


struct CmdCopyImage
{
    format::HandleId commandBuffer;
    format::HandleId srcImage;
    VkImageLayout srcImageLayout;
    format::HandleId dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    StructPointerDecoder<Decoded_VkImageCopy> pRegions;
};


struct CmdCopyBufferToImage
{
    format::HandleId commandBuffer;
    format::HandleId srcBuffer;
    format::HandleId dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    StructPointerDecoder<Decoded_VkBufferImageCopy> pRegions;
};


struct CmdCopyImageToBuffer
{
    format::HandleId commandBuffer;
    format::HandleId srcImage;
    VkImageLayout srcImageLayout;
    format::HandleId dstBuffer;
    uint32_t regionCount;
    StructPointerDecoder<Decoded_VkBufferImageCopy> pRegions;
};


struct CmdUpdateBuffer
{
    format::HandleId commandBuffer;
    format::HandleId dstBuffer;
    VkDeviceSize dstOffset;
    VkDeviceSize dataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdFillBuffer
{
    format::HandleId commandBuffer;
    format::HandleId dstBuffer;
    VkDeviceSize dstOffset;
    VkDeviceSize size;
    uint32_t data;
};


struct CmdPipelineBarrier
{
    format::HandleId commandBuffer;
    VkPipelineStageFlags srcStageMask;
    VkPipelineStageFlags dstStageMask;
    VkDependencyFlags dependencyFlags;
    uint32_t memoryBarrierCount;
    StructPointerDecoder<Decoded_VkMemoryBarrier> pMemoryBarriers;
    uint32_t bufferMemoryBarrierCount;
    StructPointerDecoder<Decoded_VkBufferMemoryBarrier> pBufferMemoryBarriers;
    uint32_t imageMemoryBarrierCount;
    StructPointerDecoder<Decoded_VkImageMemoryBarrier> pImageMemoryBarriers;
};


struct CmdBeginQuery
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t query;
    VkQueryControlFlags flags;
};


struct CmdEndQuery
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t query;
};


struct CmdResetQueryPool
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
};


struct CmdWriteTimestamp
{
    format::HandleId commandBuffer;
    VkPipelineStageFlagBits pipelineStage;
    format::HandleId queryPool;
    uint32_t query;
};


struct CmdCopyQueryPoolResults
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
    format::HandleId dstBuffer;
    VkDeviceSize dstOffset;
    VkDeviceSize stride;
    VkQueryResultFlags flags;
};


struct CmdExecuteCommands
{
    format::HandleId commandBuffer;
    uint32_t commandBufferCount;
    HandlePointerDecoder<VkCommandBuffer> pCommandBuffers;
};


struct CreateEvent
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkEventCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkEvent> pEvent;
};


struct DestroyEvent
{
    format::HandleId device;
    format::HandleId event;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetEventStatus
{
    VkResult result;
    format::HandleId device;
    format::HandleId event;
};


struct SetEvent
{
    VkResult result;
    format::HandleId device;
    format::HandleId event;
};


struct ResetEvent
{
    VkResult result;
    format::HandleId device;
    format::HandleId event;
};


struct CreateBufferView
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferViewCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkBufferView> pView;
};


struct DestroyBufferView
{
    format::HandleId device;
    format::HandleId bufferView;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateShaderModule
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkShaderModule> pShaderModule;
};


struct DestroyShaderModule
{
    format::HandleId device;
    format::HandleId shaderModule;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreatePipelineCache
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPipelineCache> pPipelineCache;
};


struct DestroyPipelineCache
{
    format::HandleId device;
    format::HandleId pipelineCache;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetPipelineCacheData
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipelineCache;
    PointerDecoder<size_t> pDataSize;
    PointerDecoder<uint8_t> pData;
};


struct MergePipelineCaches
{
    VkResult result;
    format::HandleId device;
    format::HandleId dstCache;
    uint32_t srcCacheCount;
    HandlePointerDecoder<VkPipelineCache> pSrcCaches;
};


struct CreateComputePipelines
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipelineCache;
    uint32_t createInfoCount;
    StructPointerDecoder<Decoded_VkComputePipelineCreateInfo> pCreateInfos;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPipeline> pPipelines;
};


struct DestroyPipeline
{
    format::HandleId device;
    format::HandleId pipeline;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreatePipelineLayout
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPipelineLayout> pPipelineLayout;
};


struct DestroyPipelineLayout
{
    format::HandleId device;
    format::HandleId pipelineLayout;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateSampler
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSamplerCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSampler> pSampler;
};


struct DestroySampler
{
    format::HandleId device;
    format::HandleId sampler;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateDescriptorSetLayout
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDescriptorSetLayout> pSetLayout;
};


struct DestroyDescriptorSetLayout
{
    format::HandleId device;
    format::HandleId descriptorSetLayout;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateDescriptorPool
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDescriptorPool> pDescriptorPool;
};


struct DestroyDescriptorPool
{
    format::HandleId device;
    format::HandleId descriptorPool;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct ResetDescriptorPool
{
    VkResult result;
    format::HandleId device;
    format::HandleId descriptorPool;
    VkDescriptorPoolResetFlags flags;
};


struct AllocateDescriptorSets
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo> pAllocateInfo;
    HandlePointerDecoder<VkDescriptorSet> pDescriptorSets;
};


struct FreeDescriptorSets
{
    VkResult result;
    format::HandleId device;
    format::HandleId descriptorPool;
    uint32_t descriptorSetCount;
    HandlePointerDecoder<VkDescriptorSet> pDescriptorSets;
};


struct UpdateDescriptorSets
{
    format::HandleId device;
    uint32_t descriptorWriteCount;
    StructPointerDecoder<Decoded_VkWriteDescriptorSet> pDescriptorWrites;
    uint32_t descriptorCopyCount;
    StructPointerDecoder<Decoded_VkCopyDescriptorSet> pDescriptorCopies;
};


struct CmdBindPipeline
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId pipeline;
};


struct CmdBindDescriptorSets
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId layout;
    uint32_t firstSet;
    uint32_t descriptorSetCount;
    HandlePointerDecoder<VkDescriptorSet> pDescriptorSets;
    uint32_t dynamicOffsetCount;
    PointerDecoder<uint32_t> pDynamicOffsets;
};


struct CmdClearColorImage
{
    format::HandleId commandBuffer;
    format::HandleId image;
    VkImageLayout imageLayout;
    StructPointerDecoder<Decoded_VkClearColorValue> pColor;
    uint32_t rangeCount;
    StructPointerDecoder<Decoded_VkImageSubresourceRange> pRanges;
};


struct CmdDispatch
{
    format::HandleId commandBuffer;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};


struct CmdDispatchIndirect
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
};


struct CmdSetEvent
{
    format::HandleId commandBuffer;
    format::HandleId event;
    VkPipelineStageFlags stageMask;
};


struct CmdResetEvent
{
    format::HandleId commandBuffer;
    format::HandleId event;
    VkPipelineStageFlags stageMask;
};


struct CmdWaitEvents
{
    format::HandleId commandBuffer;
    uint32_t eventCount;
    HandlePointerDecoder<VkEvent> pEvents;
    VkPipelineStageFlags srcStageMask;
    VkPipelineStageFlags dstStageMask;
    uint32_t memoryBarrierCount;
    StructPointerDecoder<Decoded_VkMemoryBarrier> pMemoryBarriers;
    uint32_t bufferMemoryBarrierCount;
    StructPointerDecoder<Decoded_VkBufferMemoryBarrier> pBufferMemoryBarriers;
    uint32_t imageMemoryBarrierCount;
    StructPointerDecoder<Decoded_VkImageMemoryBarrier> pImageMemoryBarriers;
};


struct CmdPushConstants
{
    format::HandleId commandBuffer;
    format::HandleId layout;
    VkShaderStageFlags stageFlags;
    uint32_t offset;
    uint32_t size;
    PointerDecoder<uint8_t> pValues;
};


struct CreateGraphicsPipelines
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipelineCache;
    uint32_t createInfoCount;
    StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo> pCreateInfos;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPipeline> pPipelines;
};


struct CreateFramebuffer
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkFramebufferCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkFramebuffer> pFramebuffer;
};


struct DestroyFramebuffer
{
    format::HandleId device;
    format::HandleId framebuffer;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateRenderPass
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkRenderPass> pRenderPass;
};


struct DestroyRenderPass
{
    format::HandleId device;
    format::HandleId renderPass;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetRenderAreaGranularity
{
    format::HandleId device;
    format::HandleId renderPass;
    StructPointerDecoder<Decoded_VkExtent2D> pGranularity;
};


struct CmdSetViewport
{
    format::HandleId commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    StructPointerDecoder<Decoded_VkViewport> pViewports;
};


struct CmdSetScissor
{
    format::HandleId commandBuffer;
    uint32_t firstScissor;
    uint32_t scissorCount;
    StructPointerDecoder<Decoded_VkRect2D> pScissors;
};


struct CmdSetLineWidth
{
    format::HandleId commandBuffer;
    float lineWidth;
};


struct CmdSetDepthBias
{
    format::HandleId commandBuffer;
    float depthBiasConstantFactor;
    float depthBiasClamp;
    float depthBiasSlopeFactor;
};


struct CmdSetBlendConstants
{
    format::HandleId commandBuffer;
    PointerDecoder<float> blendConstants;
};


struct CmdSetDepthBounds
{
    format::HandleId commandBuffer;
    float minDepthBounds;
    float maxDepthBounds;
};


struct CmdSetStencilCompareMask
{
    format::HandleId commandBuffer;
    VkStencilFaceFlags faceMask;
    uint32_t compareMask;
};


struct CmdSetStencilWriteMask
{
    format::HandleId commandBuffer;
    VkStencilFaceFlags faceMask;
    uint32_t writeMask;
};


struct CmdSetStencilReference
{
    format::HandleId commandBuffer;
    VkStencilFaceFlags faceMask;
    uint32_t reference;
};


struct CmdBindIndexBuffer
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    VkIndexType indexType;
};


struct CmdBindVertexBuffers
{
    format::HandleId commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    HandlePointerDecoder<VkBuffer> pBuffers;
    PointerDecoder<VkDeviceSize> pOffsets;
};


struct CmdDraw
{
    format::HandleId commandBuffer;
    uint32_t vertexCount;
    uint32_t instanceCount;
    uint32_t firstVertex;
    uint32_t firstInstance;
};


struct CmdDrawIndexed
{
    format::HandleId commandBuffer;
    uint32_t indexCount;
    uint32_t instanceCount;
    uint32_t firstIndex;
    int32_t vertexOffset;
    uint32_t firstInstance;
};


struct CmdDrawIndirect
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};


struct CmdDrawIndexedIndirect
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};


struct CmdBlitImage
{
    format::HandleId commandBuffer;
    format::HandleId srcImage;
    VkImageLayout srcImageLayout;
    format::HandleId dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    StructPointerDecoder<Decoded_VkImageBlit> pRegions;
    VkFilter filter;
};


struct CmdClearDepthStencilImage
{
    format::HandleId commandBuffer;
    format::HandleId image;
    VkImageLayout imageLayout;
    StructPointerDecoder<Decoded_VkClearDepthStencilValue> pDepthStencil;
    uint32_t rangeCount;
    StructPointerDecoder<Decoded_VkImageSubresourceRange> pRanges;
};


struct CmdClearAttachments
{
    format::HandleId commandBuffer;
    uint32_t attachmentCount;
    StructPointerDecoder<Decoded_VkClearAttachment> pAttachments;
    uint32_t rectCount;
    StructPointerDecoder<Decoded_VkClearRect> pRects;
};


struct CmdResolveImage
{
    format::HandleId commandBuffer;
    format::HandleId srcImage;
    VkImageLayout srcImageLayout;
    format::HandleId dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    StructPointerDecoder<Decoded_VkImageResolve> pRegions;
};


struct CmdBeginRenderPass
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo> pRenderPassBegin;
    VkSubpassContents contents;
};


struct CmdNextSubpass
{
    format::HandleId commandBuffer;
    VkSubpassContents contents;
};


struct CmdEndRenderPass
{
    format::HandleId commandBuffer;
};


struct BindBufferMemory2
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo> pBindInfos;
};


struct BindImageMemory2
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo> pBindInfos;
};


struct GetDeviceGroupPeerMemoryFeatures
{
    format::HandleId device;
    uint32_t heapIndex;
    uint32_t localDeviceIndex;
    uint32_t remoteDeviceIndex;
    PointerDecoder<VkPeerMemoryFeatureFlags> pPeerMemoryFeatures;
};


struct CmdSetDeviceMask
{
    format::HandleId commandBuffer;
    uint32_t deviceMask;
};


struct EnumeratePhysicalDeviceGroups
{
    VkResult result;
    format::HandleId instance;
    PointerDecoder<uint32_t> pPhysicalDeviceGroupCount;
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties> pPhysicalDeviceGroupProperties;
};


struct GetImageMemoryRequirements2
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetBufferMemoryRequirements2
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetImageSparseMemoryRequirements2
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2> pInfo;
    PointerDecoder<uint32_t> pSparseMemoryRequirementCount;
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2> pSparseMemoryRequirements;
};


struct GetPhysicalDeviceFeatures2
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2> pFeatures;
};


struct GetPhysicalDeviceProperties2
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2> pProperties;
};


struct GetPhysicalDeviceFormatProperties2
{
    format::HandleId physicalDevice;
    VkFormat format;
    StructPointerDecoder<Decoded_VkFormatProperties2> pFormatProperties;
};


struct GetPhysicalDeviceImageFormatProperties2
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2> pImageFormatInfo;
    StructPointerDecoder<Decoded_VkImageFormatProperties2> pImageFormatProperties;
};


struct GetPhysicalDeviceQueueFamilyProperties2
{
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pQueueFamilyPropertyCount;
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2> pQueueFamilyProperties;
};


struct GetPhysicalDeviceMemoryProperties2
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2> pMemoryProperties;
};


struct GetPhysicalDeviceSparseImageFormatProperties2
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2> pFormatInfo;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2> pProperties;
};


struct TrimCommandPool
{
    format::HandleId device;
    format::HandleId commandPool;
    VkCommandPoolTrimFlags flags;
};


struct GetDeviceQueue2
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceQueueInfo2> pQueueInfo;
    HandlePointerDecoder<VkQueue> pQueue;
};


struct GetPhysicalDeviceExternalBufferProperties
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo> pExternalBufferInfo;
    StructPointerDecoder<Decoded_VkExternalBufferProperties> pExternalBufferProperties;
};


struct GetPhysicalDeviceExternalFenceProperties
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo> pExternalFenceInfo;
    StructPointerDecoder<Decoded_VkExternalFenceProperties> pExternalFenceProperties;
};


struct GetPhysicalDeviceExternalSemaphoreProperties
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo> pExternalSemaphoreInfo;
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties> pExternalSemaphoreProperties;
};


struct CmdDispatchBase
{
    format::HandleId commandBuffer;
    uint32_t baseGroupX;
    uint32_t baseGroupY;
    uint32_t baseGroupZ;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};


struct CreateDescriptorUpdateTemplate
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDescriptorUpdateTemplate> pDescriptorUpdateTemplate;
};


struct DestroyDescriptorUpdateTemplate
{
    format::HandleId device;
    format::HandleId descriptorUpdateTemplate;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetDescriptorSetLayoutSupport
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport> pSupport;
};


struct CreateSamplerYcbcrConversion
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSamplerYcbcrConversion> pYcbcrConversion;
};


struct DestroySamplerYcbcrConversion
{
    format::HandleId device;
    format::HandleId ycbcrConversion;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct ResetQueryPool
{
    format::HandleId device;
    format::HandleId queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
};


struct GetSemaphoreCounterValue
{
    VkResult result;
    format::HandleId device;
    format::HandleId semaphore;
    PointerDecoder<uint64_t> pValue;
};


struct WaitSemaphores
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreWaitInfo> pWaitInfo;
    uint64_t timeout;
};


struct SignalSemaphore
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreSignalInfo> pSignalInfo;
};


struct GetBufferDeviceAddress
{
    VkDeviceAddress result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo> pInfo;
};


struct GetBufferOpaqueCaptureAddress
{
    uint64_t result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo> pInfo;
};


struct GetDeviceMemoryOpaqueCaptureAddress
{
    uint64_t result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo> pInfo;
};


struct CmdDrawIndirectCount
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct CmdDrawIndexedIndirectCount
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct CreateRenderPass2
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkRenderPass> pRenderPass;
};


struct CmdBeginRenderPass2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo> pRenderPassBegin;
    StructPointerDecoder<Decoded_VkSubpassBeginInfo> pSubpassBeginInfo;
};


struct CmdNextSubpass2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkSubpassBeginInfo> pSubpassBeginInfo;
    StructPointerDecoder<Decoded_VkSubpassEndInfo> pSubpassEndInfo;
};


struct CmdEndRenderPass2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkSubpassEndInfo> pSubpassEndInfo;
};


struct GetPhysicalDeviceToolProperties
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pToolCount;
    StructPointerDecoder<Decoded_VkPhysicalDeviceToolProperties> pToolProperties;
};


struct CreatePrivateDataSlot
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPrivateDataSlot> pPrivateDataSlot;
};


struct DestroyPrivateDataSlot
{
    format::HandleId device;
    format::HandleId privateDataSlot;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct SetPrivateData
{
    VkResult result;
    format::HandleId device;
    VkObjectType objectType;
    uint64_t objectHandle;
    format::HandleId privateDataSlot;
    uint64_t data;
};


struct GetPrivateData
{
    format::HandleId device;
    VkObjectType objectType;
    uint64_t objectHandle;
    format::HandleId privateDataSlot;
    PointerDecoder<uint64_t> pData;
};


struct CmdPipelineBarrier2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDependencyInfo> pDependencyInfo;
};


struct CmdWriteTimestamp2
{
    format::HandleId commandBuffer;
    VkPipelineStageFlags2 stage;
    format::HandleId queryPool;
    uint32_t query;
};


struct QueueSubmit2
{
    VkResult result;
    format::HandleId queue;
    uint32_t submitCount;
    StructPointerDecoder<Decoded_VkSubmitInfo2> pSubmits;
    format::HandleId fence;
};


struct CmdCopyBuffer2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyBufferInfo2> pCopyBufferInfo;
};


struct CmdCopyImage2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyImageInfo2> pCopyImageInfo;
};


struct CmdCopyBufferToImage2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyBufferToImageInfo2> pCopyBufferToImageInfo;
};


struct CmdCopyImageToBuffer2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyImageToBufferInfo2> pCopyImageToBufferInfo;
};


struct GetDeviceBufferMemoryRequirements
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceBufferMemoryRequirements> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetDeviceImageMemoryRequirements
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetDeviceImageSparseMemoryRequirements
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements> pInfo;
    PointerDecoder<uint32_t> pSparseMemoryRequirementCount;
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2> pSparseMemoryRequirements;
};


struct CmdSetEvent2
{
    format::HandleId commandBuffer;
    format::HandleId event;
    StructPointerDecoder<Decoded_VkDependencyInfo> pDependencyInfo;
};


struct CmdResetEvent2
{
    format::HandleId commandBuffer;
    format::HandleId event;
    VkPipelineStageFlags2 stageMask;
};


struct CmdWaitEvents2
{
    format::HandleId commandBuffer;
    uint32_t eventCount;
    HandlePointerDecoder<VkEvent> pEvents;
    StructPointerDecoder<Decoded_VkDependencyInfo> pDependencyInfos;
};


struct CmdBlitImage2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBlitImageInfo2> pBlitImageInfo;
};


struct CmdResolveImage2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkResolveImageInfo2> pResolveImageInfo;
};


struct CmdBeginRendering
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingInfo> pRenderingInfo;
};


struct CmdEndRendering
{
    format::HandleId commandBuffer;
};


struct CmdSetCullMode
{
    format::HandleId commandBuffer;
    VkCullModeFlags cullMode;
};


struct CmdSetFrontFace
{
    format::HandleId commandBuffer;
    VkFrontFace frontFace;
};


struct CmdSetPrimitiveTopology
{
    format::HandleId commandBuffer;
    VkPrimitiveTopology primitiveTopology;
};


struct CmdSetViewportWithCount
{
    format::HandleId commandBuffer;
    uint32_t viewportCount;
    StructPointerDecoder<Decoded_VkViewport> pViewports;
};


struct CmdSetScissorWithCount
{
    format::HandleId commandBuffer;
    uint32_t scissorCount;
    StructPointerDecoder<Decoded_VkRect2D> pScissors;
};


struct CmdBindVertexBuffers2
{
    format::HandleId commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    HandlePointerDecoder<VkBuffer> pBuffers;
    PointerDecoder<VkDeviceSize> pOffsets;
    PointerDecoder<VkDeviceSize> pSizes;
    PointerDecoder<VkDeviceSize> pStrides;
};


struct CmdSetDepthTestEnable
{
    format::HandleId commandBuffer;
    VkBool32 depthTestEnable;
};


struct CmdSetDepthWriteEnable
{
    format::HandleId commandBuffer;
    VkBool32 depthWriteEnable;
};


struct CmdSetDepthCompareOp
{
    format::HandleId commandBuffer;
    VkCompareOp depthCompareOp;
};


struct CmdSetDepthBoundsTestEnable
{
    format::HandleId commandBuffer;
    VkBool32 depthBoundsTestEnable;
};


struct CmdSetStencilTestEnable
{
    format::HandleId commandBuffer;
    VkBool32 stencilTestEnable;
};


struct CmdSetStencilOp
{
    format::HandleId commandBuffer;
    VkStencilFaceFlags faceMask;
    VkStencilOp failOp;
    VkStencilOp passOp;
    VkStencilOp depthFailOp;
    VkCompareOp compareOp;
};


struct CmdSetRasterizerDiscardEnable
{
    format::HandleId commandBuffer;
    VkBool32 rasterizerDiscardEnable;
};


struct CmdSetDepthBiasEnable
{
    format::HandleId commandBuffer;
    VkBool32 depthBiasEnable;
};


struct CmdSetPrimitiveRestartEnable
{
    format::HandleId commandBuffer;
    VkBool32 primitiveRestartEnable;
};


struct MapMemory2
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryMapInfo> pMemoryMapInfo;
    PointerDecoder<uint64_t, void*> ppData;
};


struct UnmapMemory2
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryUnmapInfo> pMemoryUnmapInfo;
};


struct GetDeviceImageSubresourceLayout
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceImageSubresourceInfo> pInfo;
    StructPointerDecoder<Decoded_VkSubresourceLayout2> pLayout;
};


struct GetImageSubresourceLayout2
{
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkImageSubresource2> pSubresource;
    StructPointerDecoder<Decoded_VkSubresourceLayout2> pLayout;
};


struct CopyMemoryToImage
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCopyMemoryToImageInfo> pCopyMemoryToImageInfo;
};


struct CopyImageToMemory
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCopyImageToMemoryInfo> pCopyImageToMemoryInfo;
};


struct CopyImageToImage
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCopyImageToImageInfo> pCopyImageToImageInfo;
};


struct TransitionImageLayout
{
    VkResult result;
    format::HandleId device;
    uint32_t transitionCount;
    StructPointerDecoder<Decoded_VkHostImageLayoutTransitionInfo> pTransitions;
};


struct CmdPushDescriptorSet
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId layout;
    uint32_t set;
    uint32_t descriptorWriteCount;
    StructPointerDecoder<Decoded_VkWriteDescriptorSet> pDescriptorWrites;
};


struct CmdBindDescriptorSets2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBindDescriptorSetsInfo> pBindDescriptorSetsInfo;
};


struct CmdPushConstants2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPushConstantsInfo> pPushConstantsInfo;
};


struct CmdPushDescriptorSet2
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPushDescriptorSetInfo> pPushDescriptorSetInfo;
};


struct CmdSetLineStipple
{
    format::HandleId commandBuffer;
    uint32_t lineStippleFactor;
    uint16_t lineStipplePattern;
};


struct CmdBindIndexBuffer2
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
    VkIndexType indexType;
};


struct GetRenderingAreaGranularity
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkRenderingAreaInfo> pRenderingAreaInfo;
    StructPointerDecoder<Decoded_VkExtent2D> pGranularity;
};


struct CmdSetRenderingAttachmentLocations
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingAttachmentLocationInfo> pLocationInfo;
};


struct CmdSetRenderingInputAttachmentIndices
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingInputAttachmentIndexInfo> pInputAttachmentIndexInfo;
};


struct DestroySurfaceKHR
{
    format::HandleId instance;
    format::HandleId surface;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetPhysicalDeviceSurfaceSupportKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    format::HandleId surface;
    PointerDecoder<VkBool32> pSupported;
};


struct GetPhysicalDeviceSurfaceCapabilitiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId surface;
    StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR> pSurfaceCapabilities;
};


struct GetPhysicalDeviceSurfaceFormatsKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId surface;
    PointerDecoder<uint32_t> pSurfaceFormatCount;
    StructPointerDecoder<Decoded_VkSurfaceFormatKHR> pSurfaceFormats;
};


struct GetPhysicalDeviceSurfacePresentModesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId surface;
    PointerDecoder<uint32_t> pPresentModeCount;
    PointerDecoder<VkPresentModeKHR> pPresentModes;
};


struct CreateSwapchainKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSwapchainKHR> pSwapchain;
};


struct DestroySwapchainKHR
{
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetSwapchainImagesKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    PointerDecoder<uint32_t> pSwapchainImageCount;
    HandlePointerDecoder<VkImage> pSwapchainImages;
};


struct AcquireNextImageKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    uint64_t timeout;
    format::HandleId semaphore;
    format::HandleId fence;
    PointerDecoder<uint32_t> pImageIndex;
};


struct QueuePresentKHR
{
    VkResult result;
    format::HandleId queue;
    StructPointerDecoder<Decoded_VkPresentInfoKHR> pPresentInfo;
};


struct GetDeviceGroupPresentCapabilitiesKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR> pDeviceGroupPresentCapabilities;
};


struct GetDeviceGroupSurfacePresentModesKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId surface;
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR> pModes;
};


struct GetPhysicalDevicePresentRectanglesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId surface;
    PointerDecoder<uint32_t> pRectCount;
    StructPointerDecoder<Decoded_VkRect2D> pRects;
};


struct AcquireNextImage2KHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR> pAcquireInfo;
    PointerDecoder<uint32_t> pImageIndex;
};


struct GetPhysicalDeviceDisplayPropertiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkDisplayPropertiesKHR> pProperties;
};


struct GetPhysicalDeviceDisplayPlanePropertiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR> pProperties;
};


struct GetDisplayPlaneSupportedDisplaysKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t planeIndex;
    PointerDecoder<uint32_t> pDisplayCount;
    HandlePointerDecoder<VkDisplayKHR> pDisplays;
};


struct GetDisplayModePropertiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId display;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR> pProperties;
};


struct CreateDisplayModeKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId display;
    StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDisplayModeKHR> pMode;
};


struct GetDisplayPlaneCapabilitiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId mode;
    uint32_t planeIndex;
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR> pCapabilities;
};


struct CreateDisplayPlaneSurfaceKHR
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct CreateSharedSwapchainsKHR
{
    VkResult result;
    format::HandleId device;
    uint32_t swapchainCount;
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR> pCreateInfos;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSwapchainKHR> pSwapchains;
};


struct CreateXlibSurfaceKHR
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceXlibPresentationSupportKHR
{
    VkBool32 result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    uint64_t dpy;
    size_t visualID;
};


struct CreateXcbSurfaceKHR
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceXcbPresentationSupportKHR
{
    VkBool32 result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    uint64_t connection;
    uint32_t visual_id;
};


struct CreateWaylandSurfaceKHR
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceWaylandPresentationSupportKHR
{
    VkBool32 result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    uint64_t display;
};


struct CreateAndroidSurfaceKHR
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct CreateWin32SurfaceKHR
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceWin32PresentationSupportKHR
{
    VkBool32 result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
};


struct GetPhysicalDeviceVideoCapabilitiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkVideoProfileInfoKHR> pVideoProfile;
    StructPointerDecoder<Decoded_VkVideoCapabilitiesKHR> pCapabilities;
};


struct GetPhysicalDeviceVideoFormatPropertiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceVideoFormatInfoKHR> pVideoFormatInfo;
    PointerDecoder<uint32_t> pVideoFormatPropertyCount;
    StructPointerDecoder<Decoded_VkVideoFormatPropertiesKHR> pVideoFormatProperties;
};


struct CreateVideoSessionKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkVideoSessionCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkVideoSessionKHR> pVideoSession;
};


struct DestroyVideoSessionKHR
{
    format::HandleId device;
    format::HandleId videoSession;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetVideoSessionMemoryRequirementsKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId videoSession;
    PointerDecoder<uint32_t> pMemoryRequirementsCount;
    StructPointerDecoder<Decoded_VkVideoSessionMemoryRequirementsKHR> pMemoryRequirements;
};


struct BindVideoSessionMemoryKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId videoSession;
    uint32_t bindSessionMemoryInfoCount;
    StructPointerDecoder<Decoded_VkBindVideoSessionMemoryInfoKHR> pBindSessionMemoryInfos;
};


struct CreateVideoSessionParametersKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkVideoSessionParametersCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkVideoSessionParametersKHR> pVideoSessionParameters;
};


struct UpdateVideoSessionParametersKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId videoSessionParameters;
    StructPointerDecoder<Decoded_VkVideoSessionParametersUpdateInfoKHR> pUpdateInfo;
};


struct DestroyVideoSessionParametersKHR
{
    format::HandleId device;
    format::HandleId videoSessionParameters;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CmdBeginVideoCodingKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkVideoBeginCodingInfoKHR> pBeginInfo;
};


struct CmdEndVideoCodingKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkVideoEndCodingInfoKHR> pEndCodingInfo;
};


struct CmdControlVideoCodingKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkVideoCodingControlInfoKHR> pCodingControlInfo;
};


struct CmdDecodeVideoKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkVideoDecodeInfoKHR> pDecodeInfo;
};


struct CmdBeginRenderingKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingInfo> pRenderingInfo;
};


struct CmdEndRenderingKHR
{
    format::HandleId commandBuffer;
};


struct GetPhysicalDeviceFeatures2KHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2> pFeatures;
};


struct GetPhysicalDeviceProperties2KHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2> pProperties;
};


struct GetPhysicalDeviceFormatProperties2KHR
{
    format::HandleId physicalDevice;
    VkFormat format;
    StructPointerDecoder<Decoded_VkFormatProperties2> pFormatProperties;
};


struct GetPhysicalDeviceImageFormatProperties2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2> pImageFormatInfo;
    StructPointerDecoder<Decoded_VkImageFormatProperties2> pImageFormatProperties;
};


struct GetPhysicalDeviceQueueFamilyProperties2KHR
{
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pQueueFamilyPropertyCount;
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2> pQueueFamilyProperties;
};


struct GetPhysicalDeviceMemoryProperties2KHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2> pMemoryProperties;
};


struct GetPhysicalDeviceSparseImageFormatProperties2KHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2> pFormatInfo;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2> pProperties;
};


struct GetDeviceGroupPeerMemoryFeaturesKHR
{
    format::HandleId device;
    uint32_t heapIndex;
    uint32_t localDeviceIndex;
    uint32_t remoteDeviceIndex;
    PointerDecoder<VkPeerMemoryFeatureFlags> pPeerMemoryFeatures;
};


struct CmdSetDeviceMaskKHR
{
    format::HandleId commandBuffer;
    uint32_t deviceMask;
};


struct CmdDispatchBaseKHR
{
    format::HandleId commandBuffer;
    uint32_t baseGroupX;
    uint32_t baseGroupY;
    uint32_t baseGroupZ;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};


struct TrimCommandPoolKHR
{
    format::HandleId device;
    format::HandleId commandPool;
    VkCommandPoolTrimFlags flags;
};


struct EnumeratePhysicalDeviceGroupsKHR
{
    VkResult result;
    format::HandleId instance;
    PointerDecoder<uint32_t> pPhysicalDeviceGroupCount;
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties> pPhysicalDeviceGroupProperties;
};


struct GetPhysicalDeviceExternalBufferPropertiesKHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo> pExternalBufferInfo;
    StructPointerDecoder<Decoded_VkExternalBufferProperties> pExternalBufferProperties;
};


struct GetMemoryWin32HandleKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR> pGetWin32HandleInfo;
    PointerDecoder<uint64_t, void*> pHandle;
};


struct GetMemoryWin32HandlePropertiesKHR
{
    VkResult result;
    format::HandleId device;
    VkExternalMemoryHandleTypeFlagBits handleType;
    uint64_t handle;
    StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR> pMemoryWin32HandleProperties;
};


struct GetMemoryFdKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR> pGetFdInfo;
    PointerDecoder<int> pFd;
};


struct GetMemoryFdPropertiesKHR
{
    VkResult result;
    format::HandleId device;
    VkExternalMemoryHandleTypeFlagBits handleType;
    int fd;
    StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR> pMemoryFdProperties;
};


struct GetPhysicalDeviceExternalSemaphorePropertiesKHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo> pExternalSemaphoreInfo;
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties> pExternalSemaphoreProperties;
};


struct ImportSemaphoreWin32HandleKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR> pImportSemaphoreWin32HandleInfo;
};


struct GetSemaphoreWin32HandleKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR> pGetWin32HandleInfo;
    PointerDecoder<uint64_t, void*> pHandle;
};


struct ImportSemaphoreFdKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR> pImportSemaphoreFdInfo;
};


struct GetSemaphoreFdKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR> pGetFdInfo;
    PointerDecoder<int> pFd;
};


struct CmdPushDescriptorSetKHR
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId layout;
    uint32_t set;
    uint32_t descriptorWriteCount;
    StructPointerDecoder<Decoded_VkWriteDescriptorSet> pDescriptorWrites;
};


struct CreateDescriptorUpdateTemplateKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDescriptorUpdateTemplate> pDescriptorUpdateTemplate;
};


struct DestroyDescriptorUpdateTemplateKHR
{
    format::HandleId device;
    format::HandleId descriptorUpdateTemplate;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateRenderPass2KHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkRenderPass> pRenderPass;
};


struct CmdBeginRenderPass2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo> pRenderPassBegin;
    StructPointerDecoder<Decoded_VkSubpassBeginInfo> pSubpassBeginInfo;
};


struct CmdNextSubpass2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkSubpassBeginInfo> pSubpassBeginInfo;
    StructPointerDecoder<Decoded_VkSubpassEndInfo> pSubpassEndInfo;
};


struct CmdEndRenderPass2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkSubpassEndInfo> pSubpassEndInfo;
};


struct GetSwapchainStatusKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
};


struct GetPhysicalDeviceExternalFencePropertiesKHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo> pExternalFenceInfo;
    StructPointerDecoder<Decoded_VkExternalFenceProperties> pExternalFenceProperties;
};


struct ImportFenceWin32HandleKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR> pImportFenceWin32HandleInfo;
};


struct GetFenceWin32HandleKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR> pGetWin32HandleInfo;
    PointerDecoder<uint64_t, void*> pHandle;
};


struct ImportFenceFdKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR> pImportFenceFdInfo;
};


struct GetFenceFdKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR> pGetFdInfo;
    PointerDecoder<int> pFd;
};


struct EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    PointerDecoder<uint32_t> pCounterCount;
    StructPointerDecoder<Decoded_VkPerformanceCounterKHR> pCounters;
    StructPointerDecoder<Decoded_VkPerformanceCounterDescriptionKHR> pCounterDescriptions;
};


struct GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkQueryPoolPerformanceCreateInfoKHR> pPerformanceQueryCreateInfo;
    PointerDecoder<uint32_t> pNumPasses;
};


struct AcquireProfilingLockKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAcquireProfilingLockInfoKHR> pInfo;
};


struct ReleaseProfilingLockKHR
{
    format::HandleId device;
};


struct GetPhysicalDeviceSurfaceCapabilities2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR> pSurfaceInfo;
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR> pSurfaceCapabilities;
};


struct GetPhysicalDeviceSurfaceFormats2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR> pSurfaceInfo;
    PointerDecoder<uint32_t> pSurfaceFormatCount;
    StructPointerDecoder<Decoded_VkSurfaceFormat2KHR> pSurfaceFormats;
};


struct GetPhysicalDeviceDisplayProperties2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkDisplayProperties2KHR> pProperties;
};


struct GetPhysicalDeviceDisplayPlaneProperties2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR> pProperties;
};


struct GetDisplayModeProperties2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId display;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR> pProperties;
};


struct GetDisplayPlaneCapabilities2KHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR> pDisplayPlaneInfo;
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR> pCapabilities;
};


struct GetImageMemoryRequirements2KHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetBufferMemoryRequirements2KHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetImageSparseMemoryRequirements2KHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2> pInfo;
    PointerDecoder<uint32_t> pSparseMemoryRequirementCount;
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2> pSparseMemoryRequirements;
};


struct CreateSamplerYcbcrConversionKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSamplerYcbcrConversion> pYcbcrConversion;
};


struct DestroySamplerYcbcrConversionKHR
{
    format::HandleId device;
    format::HandleId ycbcrConversion;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct BindBufferMemory2KHR
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo> pBindInfos;
};


struct BindImageMemory2KHR
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo> pBindInfos;
};


struct GetDescriptorSetLayoutSupportKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport> pSupport;
};


struct CmdDrawIndirectCountKHR
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct CmdDrawIndexedIndirectCountKHR
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct GetSemaphoreCounterValueKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId semaphore;
    PointerDecoder<uint64_t> pValue;
};


struct WaitSemaphoresKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreWaitInfo> pWaitInfo;
    uint64_t timeout;
};


struct SignalSemaphoreKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreSignalInfo> pSignalInfo;
};


struct GetPhysicalDeviceFragmentShadingRatesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pFragmentShadingRateCount;
    StructPointerDecoder<Decoded_VkPhysicalDeviceFragmentShadingRateKHR> pFragmentShadingRates;
};


struct CmdSetFragmentShadingRateKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkExtent2D> pFragmentSize;
    PointerDecoder<VkFragmentShadingRateCombinerOpKHR> combinerOps;
};


struct CmdSetRenderingAttachmentLocationsKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingAttachmentLocationInfo> pLocationInfo;
};


struct CmdSetRenderingInputAttachmentIndicesKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingInputAttachmentIndexInfo> pInputAttachmentIndexInfo;
};


struct WaitForPresentKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    uint64_t presentId;
    uint64_t timeout;
};


struct GetBufferDeviceAddressKHR
{
    VkDeviceAddress result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo> pInfo;
};


struct GetBufferOpaqueCaptureAddressKHR
{
    uint64_t result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo> pInfo;
};


struct GetDeviceMemoryOpaqueCaptureAddressKHR
{
    uint64_t result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo> pInfo;
};


struct CreateDeferredOperationKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDeferredOperationKHR> pDeferredOperation;
};


struct DestroyDeferredOperationKHR
{
    format::HandleId device;
    format::HandleId operation;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetDeferredOperationMaxConcurrencyKHR
{
    uint32_t result;
    format::HandleId device;
    format::HandleId operation;
};


struct GetDeferredOperationResultKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId operation;
};


struct GetPipelineExecutablePropertiesKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineInfoKHR> pPipelineInfo;
    PointerDecoder<uint32_t> pExecutableCount;
    StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR> pProperties;
};


struct GetPipelineExecutableStatisticsKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR> pExecutableInfo;
    PointerDecoder<uint32_t> pStatisticCount;
    StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR> pStatistics;
};


struct GetPipelineExecutableInternalRepresentationsKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR> pExecutableInfo;
    PointerDecoder<uint32_t> pInternalRepresentationCount;
    StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR> pInternalRepresentations;
};


struct MapMemory2KHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryMapInfo> pMemoryMapInfo;
    PointerDecoder<uint64_t, void*> ppData;
};


struct UnmapMemory2KHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryUnmapInfo> pMemoryUnmapInfo;
};


struct GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR> pQualityLevelInfo;
    StructPointerDecoder<Decoded_VkVideoEncodeQualityLevelPropertiesKHR> pQualityLevelProperties;
};


struct GetEncodedVideoSessionParametersKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkVideoEncodeSessionParametersGetInfoKHR> pVideoSessionParametersInfo;
    StructPointerDecoder<Decoded_VkVideoEncodeSessionParametersFeedbackInfoKHR> pFeedbackInfo;
    PointerDecoder<size_t> pDataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdEncodeVideoKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkVideoEncodeInfoKHR> pEncodeInfo;
};


struct CmdSetEvent2KHR
{
    format::HandleId commandBuffer;
    format::HandleId event;
    StructPointerDecoder<Decoded_VkDependencyInfo> pDependencyInfo;
};


struct CmdResetEvent2KHR
{
    format::HandleId commandBuffer;
    format::HandleId event;
    VkPipelineStageFlags2 stageMask;
};


struct CmdWaitEvents2KHR
{
    format::HandleId commandBuffer;
    uint32_t eventCount;
    HandlePointerDecoder<VkEvent> pEvents;
    StructPointerDecoder<Decoded_VkDependencyInfo> pDependencyInfos;
};


struct CmdPipelineBarrier2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDependencyInfo> pDependencyInfo;
};


struct CmdWriteTimestamp2KHR
{
    format::HandleId commandBuffer;
    VkPipelineStageFlags2 stage;
    format::HandleId queryPool;
    uint32_t query;
};


struct QueueSubmit2KHR
{
    VkResult result;
    format::HandleId queue;
    uint32_t submitCount;
    StructPointerDecoder<Decoded_VkSubmitInfo2> pSubmits;
    format::HandleId fence;
};


struct CmdBindIndexBuffer3KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBindIndexBuffer3InfoKHR> pInfo;
};


struct CmdBindVertexBuffers3KHR
{
    format::HandleId commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    StructPointerDecoder<Decoded_VkBindVertexBuffer3InfoKHR> pBindingInfos;
};


struct CmdDrawIndirect2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDrawIndirect2InfoKHR> pInfo;
};


struct CmdDrawIndexedIndirect2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDrawIndirect2InfoKHR> pInfo;
};


struct CmdDispatchIndirect2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDispatchIndirect2InfoKHR> pInfo;
};


struct CmdCopyMemoryKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyDeviceMemoryInfoKHR> pCopyMemoryInfo;
};


struct CmdCopyMemoryToImageKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyDeviceMemoryImageInfoKHR> pCopyMemoryInfo;
};


struct CmdCopyImageToMemoryKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyDeviceMemoryImageInfoKHR> pCopyMemoryInfo;
};


struct CmdUpdateMemoryKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDeviceAddressRangeKHR> pDstRange;
    VkAddressCommandFlagsKHR dstFlags;
    VkDeviceSize dataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdFillMemoryKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDeviceAddressRangeKHR> pDstRange;
    VkAddressCommandFlagsKHR dstFlags;
    uint32_t data;
};


struct CmdCopyQueryPoolResultsToMemoryKHR
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRangeKHR> pDstRange;
    VkAddressCommandFlagsKHR dstFlags;
    VkQueryResultFlags queryResultFlags;
};


struct CmdDrawIndirectCount2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDrawIndirectCount2InfoKHR> pInfo;
};


struct CmdDrawIndexedIndirectCount2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDrawIndirectCount2InfoKHR> pInfo;
};


struct CmdBeginConditionalRendering2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfo2EXT> pConditionalRenderingBegin;
};


struct CmdBindTransformFeedbackBuffers2EXT
{
    format::HandleId commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    StructPointerDecoder<Decoded_VkBindTransformFeedbackBuffer2InfoEXT> pBindingInfos;
};


struct CmdBeginTransformFeedback2EXT
{
    format::HandleId commandBuffer;
    uint32_t firstCounterRange;
    uint32_t counterRangeCount;
    StructPointerDecoder<Decoded_VkBindTransformFeedbackBuffer2InfoEXT> pCounterInfos;
};


struct CmdEndTransformFeedback2EXT
{
    format::HandleId commandBuffer;
    uint32_t firstCounterRange;
    uint32_t counterRangeCount;
    StructPointerDecoder<Decoded_VkBindTransformFeedbackBuffer2InfoEXT> pCounterInfos;
};


struct CmdDrawIndirectByteCount2EXT
{
    format::HandleId commandBuffer;
    uint32_t instanceCount;
    uint32_t firstInstance;
    StructPointerDecoder<Decoded_VkBindTransformFeedbackBuffer2InfoEXT> pCounterInfo;
    uint32_t counterOffset;
    uint32_t vertexStride;
};


struct CmdDrawMeshTasksIndirect2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDrawIndirect2InfoKHR> pInfo;
};


struct CmdDrawMeshTasksIndirectCount2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDrawIndirectCount2InfoKHR> pInfo;
};


struct CmdWriteMarkerToMemoryAMD
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkMemoryMarkerInfoAMD> pInfo;
};


struct CreateAccelerationStructure2KHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfo2KHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkAccelerationStructureKHR> pAccelerationStructure;
};


struct CmdCopyBuffer2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyBufferInfo2> pCopyBufferInfo;
};


struct CmdCopyImage2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyImageInfo2> pCopyImageInfo;
};


struct CmdCopyBufferToImage2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyBufferToImageInfo2> pCopyBufferToImageInfo;
};


struct CmdCopyImageToBuffer2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyImageToBufferInfo2> pCopyImageToBufferInfo;
};


struct CmdBlitImage2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBlitImageInfo2> pBlitImageInfo;
};


struct CmdResolveImage2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkResolveImageInfo2> pResolveImageInfo;
};


struct CmdTraceRaysIndirect2KHR
{
    format::HandleId commandBuffer;
    VkDeviceAddress indirectDeviceAddress;
};


struct GetDeviceBufferMemoryRequirementsKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceBufferMemoryRequirements> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetDeviceImageMemoryRequirementsKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct GetDeviceImageSparseMemoryRequirementsKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements> pInfo;
    PointerDecoder<uint32_t> pSparseMemoryRequirementCount;
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2> pSparseMemoryRequirements;
};


struct CmdBindIndexBuffer2KHR
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
    VkIndexType indexType;
};


struct GetRenderingAreaGranularityKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkRenderingAreaInfo> pRenderingAreaInfo;
    StructPointerDecoder<Decoded_VkExtent2D> pGranularity;
};


struct GetDeviceImageSubresourceLayoutKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceImageSubresourceInfo> pInfo;
    StructPointerDecoder<Decoded_VkSubresourceLayout2> pLayout;
};


struct GetImageSubresourceLayout2KHR
{
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkImageSubresource2> pSubresource;
    StructPointerDecoder<Decoded_VkSubresourceLayout2> pLayout;
};


struct WaitForPresent2KHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkPresentWait2InfoKHR> pPresentWait2Info;
};


struct CreatePipelineBinariesKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineBinaryCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    StructPointerDecoder<Decoded_VkPipelineBinaryHandlesInfoKHR> pBinaries;
};


struct DestroyPipelineBinaryKHR
{
    format::HandleId device;
    format::HandleId pipelineBinary;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetPipelineKeyKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineCreateInfoKHR> pPipelineCreateInfo;
    StructPointerDecoder<Decoded_VkPipelineBinaryKeyKHR> pPipelineKey;
};


struct GetPipelineBinaryDataKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineBinaryDataInfoKHR> pInfo;
    StructPointerDecoder<Decoded_VkPipelineBinaryKeyKHR> pPipelineBinaryKey;
    PointerDecoder<size_t> pPipelineBinaryDataSize;
    PointerDecoder<uint8_t> pPipelineBinaryData;
};


struct ReleaseCapturedPipelineDataKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkReleaseCapturedPipelineDataInfoKHR> pInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct ReleaseSwapchainImagesKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkReleaseSwapchainImagesInfoKHR> pReleaseInfo;
};


struct GetPhysicalDeviceCooperativeMatrixPropertiesKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesKHR> pProperties;
};


struct CmdSetLineStippleKHR
{
    format::HandleId commandBuffer;
    uint32_t lineStippleFactor;
    uint16_t lineStipplePattern;
};


struct GetPhysicalDeviceCalibrateableTimeDomainsKHR
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pTimeDomainCount;
    PointerDecoder<VkTimeDomainKHR> pTimeDomains;
};


struct GetCalibratedTimestampsKHR
{
    VkResult result;
    format::HandleId device;
    uint32_t timestampCount;
    StructPointerDecoder<Decoded_VkCalibratedTimestampInfoKHR> pTimestampInfos;
    PointerDecoder<uint64_t> pTimestamps;
    PointerDecoder<uint64_t> pMaxDeviation;
};


struct CmdBindDescriptorSets2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBindDescriptorSetsInfo> pBindDescriptorSetsInfo;
};


struct CmdPushConstants2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPushConstantsInfo> pPushConstantsInfo;
};


struct CmdPushDescriptorSet2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPushDescriptorSetInfo> pPushDescriptorSetInfo;
};


struct CmdSetDescriptorBufferOffsets2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkSetDescriptorBufferOffsetsInfoEXT> pSetDescriptorBufferOffsetsInfo;
};


struct CmdBindDescriptorBufferEmbeddedSamplers2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBindDescriptorBufferEmbeddedSamplersInfoEXT> pBindDescriptorBufferEmbeddedSamplersInfo;
};


struct CmdCopyMemoryIndirectKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyMemoryIndirectInfoKHR> pCopyMemoryIndirectInfo;
};


struct CmdCopyMemoryToImageIndirectKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyMemoryToImageIndirectInfoKHR> pCopyMemoryToImageIndirectInfo;
};


struct GetDeviceFaultReportsKHR
{
    VkResult result;
    format::HandleId device;
    uint64_t timeout;
    PointerDecoder<uint32_t> pFaultCounts;
    StructPointerDecoder<Decoded_VkDeviceFaultInfoKHR> pFaultInfo;
};


struct GetDeviceFaultDebugInfoKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceFaultDebugInfoKHR> pDebugInfo;
};


struct CmdEndRendering2KHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingEndInfoKHR> pRenderingEndInfo;
};


struct FrameBoundaryANDROID
{
    format::HandleId device;
    format::HandleId semaphore;
    format::HandleId image;
};


struct CreateDebugReportCallbackEXT
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDebugReportCallbackEXT> pCallback;
};


struct DestroyDebugReportCallbackEXT
{
    format::HandleId instance;
    format::HandleId callback;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct DebugReportMessageEXT
{
    format::HandleId instance;
    VkDebugReportFlagsEXT flags;
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    size_t location;
    int32_t messageCode;
    StringDecoder pLayerPrefix;
    StringDecoder pMessage;
};


struct DebugMarkerSetObjectTagEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT> pTagInfo;
};


struct DebugMarkerSetObjectNameEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT> pNameInfo;
};


struct CmdDebugMarkerBeginEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT> pMarkerInfo;
};


struct CmdDebugMarkerEndEXT
{
    format::HandleId commandBuffer;
};


struct CmdDebugMarkerInsertEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT> pMarkerInfo;
};


struct CmdBindTransformFeedbackBuffersEXT
{
    format::HandleId commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    HandlePointerDecoder<VkBuffer> pBuffers;
    PointerDecoder<VkDeviceSize> pOffsets;
    PointerDecoder<VkDeviceSize> pSizes;
};


struct CmdBeginTransformFeedbackEXT
{
    format::HandleId commandBuffer;
    uint32_t firstCounterBuffer;
    uint32_t counterBufferCount;
    HandlePointerDecoder<VkBuffer> pCounterBuffers;
    PointerDecoder<VkDeviceSize> pCounterBufferOffsets;
};


struct CmdEndTransformFeedbackEXT
{
    format::HandleId commandBuffer;
    uint32_t firstCounterBuffer;
    uint32_t counterBufferCount;
    HandlePointerDecoder<VkBuffer> pCounterBuffers;
    PointerDecoder<VkDeviceSize> pCounterBufferOffsets;
};


struct CmdBeginQueryIndexedEXT
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t query;
    VkQueryControlFlags flags;
    uint32_t index;
};


struct CmdEndQueryIndexedEXT
{
    format::HandleId commandBuffer;
    format::HandleId queryPool;
    uint32_t query;
    uint32_t index;
};


struct CmdDrawIndirectByteCountEXT
{
    format::HandleId commandBuffer;
    uint32_t instanceCount;
    uint32_t firstInstance;
    format::HandleId counterBuffer;
    VkDeviceSize counterBufferOffset;
    uint32_t counterOffset;
    uint32_t vertexStride;
};


struct GetImageViewHandleNVX
{
    uint32_t result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX> pInfo;
};


struct GetImageViewHandle64NVX
{
    uint64_t result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX> pInfo;
};


struct GetImageViewAddressNVX
{
    VkResult result;
    format::HandleId device;
    format::HandleId imageView;
    StructPointerDecoder<Decoded_VkImageViewAddressPropertiesNVX> pProperties;
};


struct GetDeviceCombinedImageSamplerIndexNVX
{
    uint64_t result;
    format::HandleId device;
    uint64_t imageViewIndex;
    uint64_t samplerIndex;
};


struct CmdDrawIndirectCountAMD
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct CmdDrawIndexedIndirectCountAMD
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct GetShaderInfoAMD
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipeline;
    VkShaderStageFlagBits shaderStage;
    VkShaderInfoTypeAMD infoType;
    PointerDecoder<size_t> pInfoSize;
    PointerDecoder<uint8_t> pInfo;
};


struct CreateStreamDescriptorSurfaceGGP
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceExternalImageFormatPropertiesNV
{
    VkResult result;
    format::HandleId physicalDevice;
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;
    VkExternalMemoryHandleTypeFlagsNV externalHandleType;
    StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV> pExternalImageFormatProperties;
};


struct GetMemoryWin32HandleNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId memory;
    VkExternalMemoryHandleTypeFlagsNV handleType;
    PointerDecoder<uint64_t, void*> pHandle;
};


struct CreateViSurfaceNN
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct CmdBeginConditionalRenderingEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT> pConditionalRenderingBegin;
};


struct CmdEndConditionalRenderingEXT
{
    format::HandleId commandBuffer;
};


struct CmdSetViewportWScalingNV
{
    format::HandleId commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    StructPointerDecoder<Decoded_VkViewportWScalingNV> pViewportWScalings;
};


struct ReleaseDisplayEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId display;
};


struct AcquireXlibDisplayEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    uint64_t dpy;
    format::HandleId display;
};


struct GetRandROutputDisplayEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    uint64_t dpy;
    size_t rrOutput;
    HandlePointerDecoder<VkDisplayKHR> pDisplay;
};


struct GetPhysicalDeviceSurfaceCapabilities2EXT
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId surface;
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT> pSurfaceCapabilities;
};


struct DisplayPowerControlEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId display;
    StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT> pDisplayPowerInfo;
};


struct RegisterDeviceEventEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceEventInfoEXT> pDeviceEventInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkFence> pFence;
};


struct RegisterDisplayEventEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId display;
    StructPointerDecoder<Decoded_VkDisplayEventInfoEXT> pDisplayEventInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkFence> pFence;
};


struct GetSwapchainCounterEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    VkSurfaceCounterFlagBitsEXT counter;
    PointerDecoder<uint64_t> pCounterValue;
};


struct GetRefreshCycleDurationGOOGLE
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE> pDisplayTimingProperties;
};


struct GetPastPresentationTimingGOOGLE
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    PointerDecoder<uint32_t> pPresentationTimingCount;
    StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE> pPresentationTimings;
};


struct CmdSetDiscardRectangleEXT
{
    format::HandleId commandBuffer;
    uint32_t firstDiscardRectangle;
    uint32_t discardRectangleCount;
    StructPointerDecoder<Decoded_VkRect2D> pDiscardRectangles;
};


struct CmdSetDiscardRectangleEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 discardRectangleEnable;
};


struct CmdSetDiscardRectangleModeEXT
{
    format::HandleId commandBuffer;
    VkDiscardRectangleModeEXT discardRectangleMode;
};


struct SetHdrMetadataEXT
{
    format::HandleId device;
    uint32_t swapchainCount;
    HandlePointerDecoder<VkSwapchainKHR> pSwapchains;
    StructPointerDecoder<Decoded_VkHdrMetadataEXT> pMetadata;
};


struct CreateIOSSurfaceMVK
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct CreateMacOSSurfaceMVK
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct SetDebugUtilsObjectNameEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT> pNameInfo;
};


struct SetDebugUtilsObjectTagEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT> pTagInfo;
};


struct QueueBeginDebugUtilsLabelEXT
{
    format::HandleId queue;
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT> pLabelInfo;
};


struct QueueEndDebugUtilsLabelEXT
{
    format::HandleId queue;
};


struct QueueInsertDebugUtilsLabelEXT
{
    format::HandleId queue;
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT> pLabelInfo;
};


struct CmdBeginDebugUtilsLabelEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT> pLabelInfo;
};


struct CmdEndDebugUtilsLabelEXT
{
    format::HandleId commandBuffer;
};


struct CmdInsertDebugUtilsLabelEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT> pLabelInfo;
};


struct CreateDebugUtilsMessengerEXT
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDebugUtilsMessengerEXT> pMessenger;
};


struct DestroyDebugUtilsMessengerEXT
{
    format::HandleId instance;
    format::HandleId messenger;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct SubmitDebugUtilsMessageEXT
{
    format::HandleId instance;
    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity;
    VkDebugUtilsMessageTypeFlagsEXT messageTypes;
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT> pCallbackData;
};


struct GetAndroidHardwareBufferPropertiesANDROID
{
    VkResult result;
    format::HandleId device;
    uint64_t buffer;
    StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID> pProperties;
};


struct GetMemoryAndroidHardwareBufferANDROID
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID> pInfo;
    PointerDecoder<uint64_t, void*> pBuffer;
};


struct CreateGpaSessionAMD
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkGpaSessionCreateInfoAMD> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkGpaSessionAMD> pGpaSession;
};


struct DestroyGpaSessionAMD
{
    format::HandleId device;
    format::HandleId gpaSession;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct SetGpaDeviceClockModeAMD
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkGpaDeviceClockModeInfoAMD> pInfo;
};


struct GetGpaDeviceClockInfoAMD
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkGpaDeviceGetClockInfoAMD> pInfo;
};


struct CmdBeginGpaSessionAMD
{
    VkResult result;
    format::HandleId commandBuffer;
    format::HandleId gpaSession;
};


struct CmdEndGpaSessionAMD
{
    VkResult result;
    format::HandleId commandBuffer;
    format::HandleId gpaSession;
};


struct CmdBeginGpaSampleAMD
{
    VkResult result;
    format::HandleId commandBuffer;
    format::HandleId gpaSession;
    StructPointerDecoder<Decoded_VkGpaSampleBeginInfoAMD> pGpaSampleBeginInfo;
    PointerDecoder<uint32_t> pSampleID;
};


struct CmdEndGpaSampleAMD
{
    format::HandleId commandBuffer;
    format::HandleId gpaSession;
    uint32_t sampleID;
};


struct GetGpaSessionStatusAMD
{
    VkResult result;
    format::HandleId device;
    format::HandleId gpaSession;
};


struct GetGpaSessionResultsAMD
{
    VkResult result;
    format::HandleId device;
    format::HandleId gpaSession;
    uint32_t sampleID;
    PointerDecoder<size_t> pSizeInBytes;
    PointerDecoder<uint8_t> pData;
};


struct ResetGpaSessionAMD
{
    VkResult result;
    format::HandleId device;
    format::HandleId gpaSession;
};


struct CmdCopyGpaSessionResultsAMD
{
    format::HandleId commandBuffer;
    format::HandleId gpaSession;
};


struct CmdSetSampleLocationsEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT> pSampleLocationsInfo;
};


struct GetPhysicalDeviceMultisamplePropertiesEXT
{
    format::HandleId physicalDevice;
    VkSampleCountFlagBits samples;
    StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT> pMultisampleProperties;
};


struct GetImageDrmFormatModifierPropertiesEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT> pProperties;
};


struct CreateValidationCacheEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkValidationCacheEXT> pValidationCache;
};


struct DestroyValidationCacheEXT
{
    format::HandleId device;
    format::HandleId validationCache;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct MergeValidationCachesEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId dstCache;
    uint32_t srcCacheCount;
    HandlePointerDecoder<VkValidationCacheEXT> pSrcCaches;
};


struct GetValidationCacheDataEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId validationCache;
    PointerDecoder<size_t> pDataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdBindShadingRateImageNV
{
    format::HandleId commandBuffer;
    format::HandleId imageView;
    VkImageLayout imageLayout;
};


struct CmdSetViewportShadingRatePaletteNV
{
    format::HandleId commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    StructPointerDecoder<Decoded_VkShadingRatePaletteNV> pShadingRatePalettes;
};


struct CmdSetCoarseSampleOrderNV
{
    format::HandleId commandBuffer;
    VkCoarseSampleOrderTypeNV sampleOrderType;
    uint32_t customSampleOrderCount;
    StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV> pCustomSampleOrders;
};


struct CreateAccelerationStructureNV
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkAccelerationStructureNV> pAccelerationStructure;
};


struct DestroyAccelerationStructureNV
{
    format::HandleId device;
    format::HandleId accelerationStructure;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetAccelerationStructureMemoryRequirementsNV
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct BindAccelerationStructureMemoryNV
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV> pBindInfos;
};


struct CmdBuildAccelerationStructureNV
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkAccelerationStructureInfoNV> pInfo;
    format::HandleId instanceData;
    VkDeviceSize instanceOffset;
    VkBool32 update;
    format::HandleId dst;
    format::HandleId src;
    format::HandleId scratch;
    VkDeviceSize scratchOffset;
};


struct CmdCopyAccelerationStructureNV
{
    format::HandleId commandBuffer;
    format::HandleId dst;
    format::HandleId src;
    VkCopyAccelerationStructureModeKHR mode;
};


struct CmdTraceRaysNV
{
    format::HandleId commandBuffer;
    format::HandleId raygenShaderBindingTableBuffer;
    VkDeviceSize raygenShaderBindingOffset;
    format::HandleId missShaderBindingTableBuffer;
    VkDeviceSize missShaderBindingOffset;
    VkDeviceSize missShaderBindingStride;
    format::HandleId hitShaderBindingTableBuffer;
    VkDeviceSize hitShaderBindingOffset;
    VkDeviceSize hitShaderBindingStride;
    format::HandleId callableShaderBindingTableBuffer;
    VkDeviceSize callableShaderBindingOffset;
    VkDeviceSize callableShaderBindingStride;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
};


struct CreateRayTracingPipelinesNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipelineCache;
    uint32_t createInfoCount;
    StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV> pCreateInfos;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPipeline> pPipelines;
};


struct GetRayTracingShaderGroupHandlesKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipeline;
    uint32_t firstGroup;
    uint32_t groupCount;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
};


struct GetRayTracingShaderGroupHandlesNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipeline;
    uint32_t firstGroup;
    uint32_t groupCount;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
};


struct GetAccelerationStructureHandleNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId accelerationStructure;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdWriteAccelerationStructuresPropertiesNV
{
    format::HandleId commandBuffer;
    uint32_t accelerationStructureCount;
    HandlePointerDecoder<VkAccelerationStructureNV> pAccelerationStructures;
    VkQueryType queryType;
    format::HandleId queryPool;
    uint32_t firstQuery;
};


struct CompileDeferredNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipeline;
    uint32_t shader;
};


struct GetMemoryHostPointerPropertiesEXT
{
    VkResult result;
    format::HandleId device;
    VkExternalMemoryHandleTypeFlagBits handleType;
    uint64_t pHostPointer;
    StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT> pMemoryHostPointerProperties;
};


struct CmdWriteBufferMarkerAMD
{
    format::HandleId commandBuffer;
    VkPipelineStageFlagBits pipelineStage;
    format::HandleId dstBuffer;
    VkDeviceSize dstOffset;
    uint32_t marker;
};


struct CmdWriteBufferMarker2AMD
{
    format::HandleId commandBuffer;
    VkPipelineStageFlags2 stage;
    format::HandleId dstBuffer;
    VkDeviceSize dstOffset;
    uint32_t marker;
};


struct GetPhysicalDeviceCalibrateableTimeDomainsEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pTimeDomainCount;
    PointerDecoder<VkTimeDomainKHR> pTimeDomains;
};


struct GetCalibratedTimestampsEXT
{
    VkResult result;
    format::HandleId device;
    uint32_t timestampCount;
    StructPointerDecoder<Decoded_VkCalibratedTimestampInfoKHR> pTimestampInfos;
    PointerDecoder<uint64_t> pTimestamps;
    PointerDecoder<uint64_t> pMaxDeviation;
};


struct CmdDrawMeshTasksNV
{
    format::HandleId commandBuffer;
    uint32_t taskCount;
    uint32_t firstTask;
};


struct CmdDrawMeshTasksIndirectNV
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};


struct CmdDrawMeshTasksIndirectCountNV
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


struct CmdSetExclusiveScissorEnableNV
{
    format::HandleId commandBuffer;
    uint32_t firstExclusiveScissor;
    uint32_t exclusiveScissorCount;
    PointerDecoder<VkBool32> pExclusiveScissorEnables;
};


struct CmdSetExclusiveScissorNV
{
    format::HandleId commandBuffer;
    uint32_t firstExclusiveScissor;
    uint32_t exclusiveScissorCount;
    StructPointerDecoder<Decoded_VkRect2D> pExclusiveScissors;
};


struct CmdSetCheckpointNV
{
    format::HandleId commandBuffer;
    uint64_t pCheckpointMarker;
};


struct GetQueueCheckpointDataNV
{
    format::HandleId queue;
    PointerDecoder<uint32_t> pCheckpointDataCount;
    StructPointerDecoder<Decoded_VkCheckpointDataNV> pCheckpointData;
};


struct GetQueueCheckpointData2NV
{
    format::HandleId queue;
    PointerDecoder<uint32_t> pCheckpointDataCount;
    StructPointerDecoder<Decoded_VkCheckpointData2NV> pCheckpointData;
};


struct SetSwapchainPresentTimingQueueSizeEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    uint32_t size;
};


struct GetSwapchainTimingPropertiesEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkSwapchainTimingPropertiesEXT> pSwapchainTimingProperties;
    PointerDecoder<uint64_t> pSwapchainTimingPropertiesCounter;
};


struct GetSwapchainTimeDomainPropertiesEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkSwapchainTimeDomainPropertiesEXT> pSwapchainTimeDomainProperties;
    PointerDecoder<uint64_t> pTimeDomainsCounter;
};


struct GetPastPresentationTimingEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPastPresentationTimingInfoEXT> pPastPresentationTimingInfo;
    StructPointerDecoder<Decoded_VkPastPresentationTimingPropertiesEXT> pPastPresentationTimingProperties;
};


struct InitializePerformanceApiINTEL
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL> pInitializeInfo;
};


struct UninitializePerformanceApiINTEL
{
    format::HandleId device;
};


struct CmdSetPerformanceMarkerINTEL
{
    VkResult result;
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL> pMarkerInfo;
};


struct CmdSetPerformanceStreamMarkerINTEL
{
    VkResult result;
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL> pMarkerInfo;
};


struct CmdSetPerformanceOverrideINTEL
{
    VkResult result;
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL> pOverrideInfo;
};


struct AcquirePerformanceConfigurationINTEL
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL> pAcquireInfo;
    HandlePointerDecoder<VkPerformanceConfigurationINTEL> pConfiguration;
};


struct ReleasePerformanceConfigurationINTEL
{
    VkResult result;
    format::HandleId device;
    format::HandleId configuration;
};


struct QueueSetPerformanceConfigurationINTEL
{
    VkResult result;
    format::HandleId queue;
    format::HandleId configuration;
};


struct GetPerformanceParameterINTEL
{
    VkResult result;
    format::HandleId device;
    VkPerformanceParameterTypeINTEL parameter;
    StructPointerDecoder<Decoded_VkPerformanceValueINTEL> pValue;
};


struct SetLocalDimmingAMD
{
    format::HandleId device;
    format::HandleId swapChain;
    VkBool32 localDimmingEnable;
};


struct CreateImagePipeSurfaceFUCHSIA
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct CreateMetalSurfaceEXT
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetBufferDeviceAddressEXT
{
    VkDeviceAddress result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo> pInfo;
};


struct GetPhysicalDeviceToolPropertiesEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pToolCount;
    StructPointerDecoder<Decoded_VkPhysicalDeviceToolProperties> pToolProperties;
};


struct GetPhysicalDeviceCooperativeMatrixPropertiesNV
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV> pProperties;
};


struct GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pCombinationCount;
    StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV> pCombinations;
};


struct GetPhysicalDeviceSurfacePresentModes2EXT
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR> pSurfaceInfo;
    PointerDecoder<uint32_t> pPresentModeCount;
    PointerDecoder<VkPresentModeKHR> pPresentModes;
};


struct AcquireFullScreenExclusiveModeEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
};


struct ReleaseFullScreenExclusiveModeEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
};


struct GetDeviceGroupSurfacePresentModes2EXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR> pSurfaceInfo;
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR> pModes;
};


struct CreateHeadlessSurfaceEXT
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct CmdSetLineStippleEXT
{
    format::HandleId commandBuffer;
    uint32_t lineStippleFactor;
    uint16_t lineStipplePattern;
};


struct ResetQueryPoolEXT
{
    format::HandleId device;
    format::HandleId queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
};


struct CmdSetCullModeEXT
{
    format::HandleId commandBuffer;
    VkCullModeFlags cullMode;
};


struct CmdSetFrontFaceEXT
{
    format::HandleId commandBuffer;
    VkFrontFace frontFace;
};


struct CmdSetPrimitiveTopologyEXT
{
    format::HandleId commandBuffer;
    VkPrimitiveTopology primitiveTopology;
};


struct CmdSetViewportWithCountEXT
{
    format::HandleId commandBuffer;
    uint32_t viewportCount;
    StructPointerDecoder<Decoded_VkViewport> pViewports;
};


struct CmdSetScissorWithCountEXT
{
    format::HandleId commandBuffer;
    uint32_t scissorCount;
    StructPointerDecoder<Decoded_VkRect2D> pScissors;
};


struct CmdBindVertexBuffers2EXT
{
    format::HandleId commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    HandlePointerDecoder<VkBuffer> pBuffers;
    PointerDecoder<VkDeviceSize> pOffsets;
    PointerDecoder<VkDeviceSize> pSizes;
    PointerDecoder<VkDeviceSize> pStrides;
};


struct CmdSetDepthTestEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 depthTestEnable;
};


struct CmdSetDepthWriteEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 depthWriteEnable;
};


struct CmdSetDepthCompareOpEXT
{
    format::HandleId commandBuffer;
    VkCompareOp depthCompareOp;
};


struct CmdSetDepthBoundsTestEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 depthBoundsTestEnable;
};


struct CmdSetStencilTestEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 stencilTestEnable;
};


struct CmdSetStencilOpEXT
{
    format::HandleId commandBuffer;
    VkStencilFaceFlags faceMask;
    VkStencilOp failOp;
    VkStencilOp passOp;
    VkStencilOp depthFailOp;
    VkCompareOp compareOp;
};


struct CopyMemoryToImageEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCopyMemoryToImageInfo> pCopyMemoryToImageInfo;
};


struct CopyImageToMemoryEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCopyImageToMemoryInfo> pCopyImageToMemoryInfo;
};


struct CopyImageToImageEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkCopyImageToImageInfo> pCopyImageToImageInfo;
};


struct TransitionImageLayoutEXT
{
    VkResult result;
    format::HandleId device;
    uint32_t transitionCount;
    StructPointerDecoder<Decoded_VkHostImageLayoutTransitionInfo> pTransitions;
};


struct GetImageSubresourceLayout2EXT
{
    format::HandleId device;
    format::HandleId image;
    StructPointerDecoder<Decoded_VkImageSubresource2> pSubresource;
    StructPointerDecoder<Decoded_VkSubresourceLayout2> pLayout;
};


struct ReleaseSwapchainImagesEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkReleaseSwapchainImagesInfoKHR> pReleaseInfo;
};


struct GetGeneratedCommandsMemoryRequirementsNV
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct CmdPreprocessGeneratedCommandsNV
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoNV> pGeneratedCommandsInfo;
};


struct CmdExecuteGeneratedCommandsNV
{
    format::HandleId commandBuffer;
    VkBool32 isPreprocessed;
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoNV> pGeneratedCommandsInfo;
};


struct CmdBindPipelineShaderGroupNV
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId pipeline;
    uint32_t groupIndex;
};


struct CreateIndirectCommandsLayoutNV
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNV> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkIndirectCommandsLayoutNV> pIndirectCommandsLayout;
};


struct DestroyIndirectCommandsLayoutNV
{
    format::HandleId device;
    format::HandleId indirectCommandsLayout;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CmdSetDepthBias2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDepthBiasInfoEXT> pDepthBiasInfo;
};


struct AcquireDrmDisplayEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    int32_t drmFd;
    format::HandleId display;
};


struct GetDrmDisplayEXT
{
    VkResult result;
    format::HandleId physicalDevice;
    int32_t drmFd;
    uint32_t connectorId;
    HandlePointerDecoder<VkDisplayKHR> display;
};


struct CreatePrivateDataSlotEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPrivateDataSlot> pPrivateDataSlot;
};


struct DestroyPrivateDataSlotEXT
{
    format::HandleId device;
    format::HandleId privateDataSlot;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct SetPrivateDataEXT
{
    VkResult result;
    format::HandleId device;
    VkObjectType objectType;
    uint64_t objectHandle;
    format::HandleId privateDataSlot;
    uint64_t data;
};


struct GetPrivateDataEXT
{
    format::HandleId device;
    VkObjectType objectType;
    uint64_t objectHandle;
    format::HandleId privateDataSlot;
    PointerDecoder<uint64_t> pData;
};


struct QueueSetPerfHintQCOM
{
    VkResult result;
    format::HandleId queue;
    StructPointerDecoder<Decoded_VkPerfHintInfoQCOM> pPerfHintInfo;
};


struct CmdDispatchTileQCOM
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDispatchTileInfoQCOM> pDispatchTileInfo;
};


struct CmdBeginPerTileExecutionQCOM
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPerTileBeginInfoQCOM> pPerTileBeginInfo;
};


struct CmdEndPerTileExecutionQCOM
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkPerTileEndInfoQCOM> pPerTileEndInfo;
};


struct GetDescriptorSetLayoutSizeEXT
{
    format::HandleId device;
    format::HandleId layout;
    PointerDecoder<VkDeviceSize> pLayoutSizeInBytes;
};


struct GetDescriptorSetLayoutBindingOffsetEXT
{
    format::HandleId device;
    format::HandleId layout;
    uint32_t binding;
    PointerDecoder<VkDeviceSize> pOffset;
};


struct GetDescriptorEXT
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorGetInfoEXT> pDescriptorInfo;
    size_t dataSize;
    PointerDecoder<uint8_t> pDescriptor;
};


struct CmdBindDescriptorBuffersEXT
{
    format::HandleId commandBuffer;
    uint32_t bufferCount;
    StructPointerDecoder<Decoded_VkDescriptorBufferBindingInfoEXT> pBindingInfos;
};


struct CmdSetDescriptorBufferOffsetsEXT
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId layout;
    uint32_t firstSet;
    uint32_t setCount;
    PointerDecoder<uint32_t> pBufferIndices;
    PointerDecoder<VkDeviceSize> pOffsets;
};


struct CmdBindDescriptorBufferEmbeddedSamplersEXT
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId layout;
    uint32_t set;
};


struct CmdSetFragmentShadingRateEnumNV
{
    format::HandleId commandBuffer;
    VkFragmentShadingRateNV shadingRate;
    PointerDecoder<VkFragmentShadingRateCombinerOpKHR> combinerOps;
};


struct GetDeviceFaultInfoEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceFaultCountsEXT> pFaultCounts;
    StructPointerDecoder<Decoded_VkDeviceFaultInfoEXT> pFaultInfo;
};


struct AcquireWinrtDisplayNV
{
    VkResult result;
    format::HandleId physicalDevice;
    format::HandleId display;
};


struct GetWinrtDisplayNV
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t deviceRelativeId;
    HandlePointerDecoder<VkDisplayKHR> pDisplay;
};


struct CreateDirectFBSurfaceEXT
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkDirectFBSurfaceCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceDirectFBPresentationSupportEXT
{
    VkBool32 result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    uint64_t dfb;
};


struct CmdSetVertexInputEXT
{
    format::HandleId commandBuffer;
    uint32_t vertexBindingDescriptionCount;
    StructPointerDecoder<Decoded_VkVertexInputBindingDescription2EXT> pVertexBindingDescriptions;
    uint32_t vertexAttributeDescriptionCount;
    StructPointerDecoder<Decoded_VkVertexInputAttributeDescription2EXT> pVertexAttributeDescriptions;
};


struct GetMemoryZirconHandleFUCHSIA
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryGetZirconHandleInfoFUCHSIA> pGetZirconHandleInfo;
    PointerDecoder<uint32_t> pZirconHandle;
};


struct GetMemoryZirconHandlePropertiesFUCHSIA
{
    VkResult result;
    format::HandleId device;
    VkExternalMemoryHandleTypeFlagBits handleType;
    uint32_t zirconHandle;
    StructPointerDecoder<Decoded_VkMemoryZirconHandlePropertiesFUCHSIA> pMemoryZirconHandleProperties;
};


struct ImportSemaphoreZirconHandleFUCHSIA
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA> pImportSemaphoreZirconHandleInfo;
};


struct GetSemaphoreZirconHandleFUCHSIA
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA> pGetZirconHandleInfo;
    PointerDecoder<uint32_t> pZirconHandle;
};


struct CmdBindInvocationMaskHUAWEI
{
    format::HandleId commandBuffer;
    format::HandleId imageView;
    VkImageLayout imageLayout;
};


struct GetMemoryRemoteAddressNV
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryGetRemoteAddressInfoNV> pMemoryGetRemoteAddressInfo;
    PointerDecoder<uint64_t, void*> pAddress;
};


struct CmdSetPatchControlPointsEXT
{
    format::HandleId commandBuffer;
    uint32_t patchControlPoints;
};


struct CmdSetRasterizerDiscardEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 rasterizerDiscardEnable;
};


struct CmdSetDepthBiasEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 depthBiasEnable;
};


struct CmdSetLogicOpEXT
{
    format::HandleId commandBuffer;
    VkLogicOp logicOp;
};


struct CmdSetPrimitiveRestartEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 primitiveRestartEnable;
};


struct CreateScreenSurfaceQNX
{
    VkResult result;
    format::HandleId instance;
    StructPointerDecoder<Decoded_VkScreenSurfaceCreateInfoQNX> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkSurfaceKHR> pSurface;
};


struct GetPhysicalDeviceScreenPresentationSupportQNX
{
    VkBool32 result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    uint64_t window;
};


struct CmdSetColorWriteEnableEXT
{
    format::HandleId commandBuffer;
    uint32_t attachmentCount;
    PointerDecoder<VkBool32> pColorWriteEnables;
};


struct CmdDrawMultiEXT
{
    format::HandleId commandBuffer;
    uint32_t drawCount;
    StructPointerDecoder<Decoded_VkMultiDrawInfoEXT> pVertexInfo;
    uint32_t instanceCount;
    uint32_t firstInstance;
    uint32_t stride;
};


struct CmdDrawMultiIndexedEXT
{
    format::HandleId commandBuffer;
    uint32_t drawCount;
    StructPointerDecoder<Decoded_VkMultiDrawIndexedInfoEXT> pIndexInfo;
    uint32_t instanceCount;
    uint32_t firstInstance;
    uint32_t stride;
    PointerDecoder<int32_t> pVertexOffset;
};


struct CreateMicromapEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMicromapCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkMicromapEXT> pMicromap;
};


struct DestroyMicromapEXT
{
    format::HandleId device;
    format::HandleId micromap;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CmdBuildMicromapsEXT
{
    format::HandleId commandBuffer;
    uint32_t infoCount;
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT> pInfos;
};


struct BuildMicromapsEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    uint32_t infoCount;
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT> pInfos;
};


struct CopyMicromapEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    StructPointerDecoder<Decoded_VkCopyMicromapInfoEXT> pInfo;
};


struct CopyMicromapToMemoryEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    StructPointerDecoder<Decoded_VkCopyMicromapToMemoryInfoEXT> pInfo;
};


struct CopyMemoryToMicromapEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    StructPointerDecoder<Decoded_VkCopyMemoryToMicromapInfoEXT> pInfo;
};


struct WriteMicromapsPropertiesEXT
{
    VkResult result;
    format::HandleId device;
    uint32_t micromapCount;
    HandlePointerDecoder<VkMicromapEXT> pMicromaps;
    VkQueryType queryType;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
    size_t stride;
};


struct CmdCopyMicromapEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyMicromapInfoEXT> pInfo;
};


struct CmdCopyMicromapToMemoryEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyMicromapToMemoryInfoEXT> pInfo;
};


struct CmdCopyMemoryToMicromapEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyMemoryToMicromapInfoEXT> pInfo;
};


struct CmdWriteMicromapsPropertiesEXT
{
    format::HandleId commandBuffer;
    uint32_t micromapCount;
    HandlePointerDecoder<VkMicromapEXT> pMicromaps;
    VkQueryType queryType;
    format::HandleId queryPool;
    uint32_t firstQuery;
};


struct GetDeviceMicromapCompatibilityEXT
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMicromapVersionInfoEXT> pVersionInfo;
    PointerDecoder<VkAccelerationStructureCompatibilityKHR> pCompatibility;
};


struct GetMicromapBuildSizesEXT
{
    format::HandleId device;
    VkAccelerationStructureBuildTypeKHR buildType;
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT> pBuildInfo;
    StructPointerDecoder<Decoded_VkMicromapBuildSizesInfoEXT> pSizeInfo;
};


struct CmdDrawClusterHUAWEI
{
    format::HandleId commandBuffer;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};


struct CmdDrawClusterIndirectHUAWEI
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
};


struct SetDeviceMemoryPriorityEXT
{
    format::HandleId device;
    format::HandleId memory;
    float priority;
};


struct CmdSetDispatchParametersARM
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDispatchParametersARM> pDispatchParameters;
};


struct GetDescriptorSetLayoutHostMappingInfoVALVE
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDescriptorSetBindingReferenceVALVE> pBindingReference;
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE> pHostMapping;
};


struct GetDescriptorSetHostMappingVALVE
{
    format::HandleId device;
    format::HandleId descriptorSet;
    PointerDecoder<uint64_t, void*> ppData;
};


struct GetPipelineIndirectMemoryRequirementsNV
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkComputePipelineCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct CmdUpdatePipelineIndirectBufferNV
{
    format::HandleId commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    format::HandleId pipeline;
};


struct GetPipelineIndirectDeviceAddressNV
{
    VkDeviceAddress result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPipelineIndirectDeviceAddressInfoNV> pInfo;
};


struct CmdSetDepthClampEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 depthClampEnable;
};


struct CmdSetPolygonModeEXT
{
    format::HandleId commandBuffer;
    VkPolygonMode polygonMode;
};


struct CmdSetRasterizationSamplesEXT
{
    format::HandleId commandBuffer;
    VkSampleCountFlagBits rasterizationSamples;
};


struct CmdSetSampleMaskEXT
{
    format::HandleId commandBuffer;
    VkSampleCountFlagBits samples;
    PointerDecoder<VkSampleMask> pSampleMask;
};


struct CmdSetAlphaToCoverageEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 alphaToCoverageEnable;
};


struct CmdSetAlphaToOneEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 alphaToOneEnable;
};


struct CmdSetLogicOpEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 logicOpEnable;
};


struct CmdSetColorBlendEnableEXT
{
    format::HandleId commandBuffer;
    uint32_t firstAttachment;
    uint32_t attachmentCount;
    PointerDecoder<VkBool32> pColorBlendEnables;
};


struct CmdSetColorBlendEquationEXT
{
    format::HandleId commandBuffer;
    uint32_t firstAttachment;
    uint32_t attachmentCount;
    StructPointerDecoder<Decoded_VkColorBlendEquationEXT> pColorBlendEquations;
};


struct CmdSetColorWriteMaskEXT
{
    format::HandleId commandBuffer;
    uint32_t firstAttachment;
    uint32_t attachmentCount;
    PointerDecoder<VkColorComponentFlags> pColorWriteMasks;
};


struct CmdSetTessellationDomainOriginEXT
{
    format::HandleId commandBuffer;
    VkTessellationDomainOrigin domainOrigin;
};


struct CmdSetRasterizationStreamEXT
{
    format::HandleId commandBuffer;
    uint32_t rasterizationStream;
};


struct CmdSetConservativeRasterizationModeEXT
{
    format::HandleId commandBuffer;
    VkConservativeRasterizationModeEXT conservativeRasterizationMode;
};


struct CmdSetExtraPrimitiveOverestimationSizeEXT
{
    format::HandleId commandBuffer;
    float extraPrimitiveOverestimationSize;
};


struct CmdSetDepthClipEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 depthClipEnable;
};


struct CmdSetSampleLocationsEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 sampleLocationsEnable;
};


struct CmdSetColorBlendAdvancedEXT
{
    format::HandleId commandBuffer;
    uint32_t firstAttachment;
    uint32_t attachmentCount;
    StructPointerDecoder<Decoded_VkColorBlendAdvancedEXT> pColorBlendAdvanced;
};


struct CmdSetProvokingVertexModeEXT
{
    format::HandleId commandBuffer;
    VkProvokingVertexModeEXT provokingVertexMode;
};


struct CmdSetLineRasterizationModeEXT
{
    format::HandleId commandBuffer;
    VkLineRasterizationModeEXT lineRasterizationMode;
};


struct CmdSetLineStippleEnableEXT
{
    format::HandleId commandBuffer;
    VkBool32 stippledLineEnable;
};


struct CmdSetDepthClipNegativeOneToOneEXT
{
    format::HandleId commandBuffer;
    VkBool32 negativeOneToOne;
};


struct CmdSetViewportWScalingEnableNV
{
    format::HandleId commandBuffer;
    VkBool32 viewportWScalingEnable;
};


struct CmdSetViewportSwizzleNV
{
    format::HandleId commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    StructPointerDecoder<Decoded_VkViewportSwizzleNV> pViewportSwizzles;
};


struct CmdSetCoverageToColorEnableNV
{
    format::HandleId commandBuffer;
    VkBool32 coverageToColorEnable;
};


struct CmdSetCoverageToColorLocationNV
{
    format::HandleId commandBuffer;
    uint32_t coverageToColorLocation;
};


struct CmdSetCoverageModulationModeNV
{
    format::HandleId commandBuffer;
    VkCoverageModulationModeNV coverageModulationMode;
};


struct CmdSetCoverageModulationTableEnableNV
{
    format::HandleId commandBuffer;
    VkBool32 coverageModulationTableEnable;
};


struct CmdSetCoverageModulationTableNV
{
    format::HandleId commandBuffer;
    uint32_t coverageModulationTableCount;
    PointerDecoder<float> pCoverageModulationTable;
};


struct CmdSetShadingRateImageEnableNV
{
    format::HandleId commandBuffer;
    VkBool32 shadingRateImageEnable;
};


struct CmdSetRepresentativeFragmentTestEnableNV
{
    format::HandleId commandBuffer;
    VkBool32 representativeFragmentTestEnable;
};


struct CmdSetCoverageReductionModeNV
{
    format::HandleId commandBuffer;
    VkCoverageReductionModeNV coverageReductionMode;
};


struct CreateTensorARM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkTensorCreateInfoARM> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkTensorARM> pTensor;
};


struct DestroyTensorARM
{
    format::HandleId device;
    format::HandleId tensor;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateTensorViewARM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkTensorViewCreateInfoARM> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkTensorViewARM> pView;
};


struct DestroyTensorViewARM
{
    format::HandleId device;
    format::HandleId tensorView;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetTensorMemoryRequirementsARM
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkTensorMemoryRequirementsInfoARM> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct BindTensorMemoryARM
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindTensorMemoryInfoARM> pBindInfos;
};


struct GetDeviceTensorMemoryRequirementsARM
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDeviceTensorMemoryRequirementsARM> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct CmdCopyTensorARM
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyTensorInfoARM> pCopyTensorInfo;
};


struct GetPhysicalDeviceExternalTensorPropertiesARM
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalTensorInfoARM> pExternalTensorInfo;
    StructPointerDecoder<Decoded_VkExternalTensorPropertiesARM> pExternalTensorProperties;
};


struct GetShaderModuleIdentifierEXT
{
    format::HandleId device;
    format::HandleId shaderModule;
    StructPointerDecoder<Decoded_VkShaderModuleIdentifierEXT> pIdentifier;
};


struct GetShaderModuleCreateInfoIdentifierEXT
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo> pCreateInfo;
    StructPointerDecoder<Decoded_VkShaderModuleIdentifierEXT> pIdentifier;
};


struct GetPhysicalDeviceOpticalFlowImageFormatsNV
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkOpticalFlowImageFormatInfoNV> pOpticalFlowImageFormatInfo;
    PointerDecoder<uint32_t> pFormatCount;
    StructPointerDecoder<Decoded_VkOpticalFlowImageFormatPropertiesNV> pImageFormatProperties;
};


struct CreateOpticalFlowSessionNV
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkOpticalFlowSessionCreateInfoNV> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkOpticalFlowSessionNV> pSession;
};


struct DestroyOpticalFlowSessionNV
{
    format::HandleId device;
    format::HandleId session;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct BindOpticalFlowSessionImageNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId session;
    VkOpticalFlowSessionBindingPointNV bindingPoint;
    format::HandleId view;
    VkImageLayout layout;
};


struct CmdOpticalFlowExecuteNV
{
    format::HandleId commandBuffer;
    format::HandleId session;
    StructPointerDecoder<Decoded_VkOpticalFlowExecuteInfoNV> pExecuteInfo;
};


struct AntiLagUpdateAMD
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAntiLagDataAMD> pData;
};


struct CreateShadersEXT
{
    VkResult result;
    format::HandleId device;
    uint32_t createInfoCount;
    StructPointerDecoder<Decoded_VkShaderCreateInfoEXT> pCreateInfos;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkShaderEXT> pShaders;
};


struct DestroyShaderEXT
{
    format::HandleId device;
    format::HandleId shader;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct GetShaderBinaryDataEXT
{
    VkResult result;
    format::HandleId device;
    format::HandleId shader;
    PointerDecoder<size_t> pDataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdBindShadersEXT
{
    format::HandleId commandBuffer;
    uint32_t stageCount;
    PointerDecoder<VkShaderStageFlagBits> pStages;
    HandlePointerDecoder<VkShaderEXT> pShaders;
};


struct CmdSetDepthClampRangeEXT
{
    format::HandleId commandBuffer;
    VkDepthClampModeEXT depthClampMode;
    StructPointerDecoder<Decoded_VkDepthClampRangeEXT> pDepthClampRange;
};


struct GetFramebufferTilePropertiesQCOM
{
    VkResult result;
    format::HandleId device;
    format::HandleId framebuffer;
    PointerDecoder<uint32_t> pPropertiesCount;
    StructPointerDecoder<Decoded_VkTilePropertiesQCOM> pProperties;
};


struct GetDynamicRenderingTilePropertiesQCOM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkRenderingInfo> pRenderingInfo;
    StructPointerDecoder<Decoded_VkTilePropertiesQCOM> pProperties;
};


struct GetPhysicalDeviceCooperativeVectorPropertiesNV
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkCooperativeVectorPropertiesNV> pProperties;
};


struct ConvertCooperativeVectorMatrixNV
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkConvertCooperativeVectorMatrixInfoNV> pInfo;
};


struct CmdConvertCooperativeVectorMatrixNV
{
    format::HandleId commandBuffer;
    uint32_t infoCount;
    StructPointerDecoder<Decoded_VkConvertCooperativeVectorMatrixInfoNV> pInfos;
};


struct SetLatencySleepModeNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkLatencySleepModeInfoNV> pSleepModeInfo;
};


struct LatencySleepNV
{
    VkResult result;
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkLatencySleepInfoNV> pSleepInfo;
};


struct SetLatencyMarkerNV
{
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkSetLatencyMarkerInfoNV> pLatencyMarkerInfo;
};


struct GetLatencyTimingsNV
{
    format::HandleId device;
    format::HandleId swapchain;
    StructPointerDecoder<Decoded_VkGetLatencyMarkerInfoNV> pLatencyMarkerInfo;
};


struct QueueNotifyOutOfBandNV
{
    format::HandleId queue;
    StructPointerDecoder<Decoded_VkOutOfBandQueueTypeInfoNV> pQueueTypeInfo;
};


struct CreateDataGraphPipelinesARM
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    format::HandleId pipelineCache;
    uint32_t createInfoCount;
    StructPointerDecoder<Decoded_VkDataGraphPipelineCreateInfoARM> pCreateInfos;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkPipeline> pPipelines;
};


struct CreateDataGraphPipelineSessionARM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDataGraphPipelineSessionCreateInfoARM> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkDataGraphPipelineSessionARM> pSession;
};


struct GetDataGraphPipelineSessionBindPointRequirementsARM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDataGraphPipelineSessionBindPointRequirementsInfoARM> pInfo;
    PointerDecoder<uint32_t> pBindPointRequirementCount;
    StructPointerDecoder<Decoded_VkDataGraphPipelineSessionBindPointRequirementARM> pBindPointRequirements;
};


struct GetDataGraphPipelineSessionMemoryRequirementsARM
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDataGraphPipelineSessionMemoryRequirementsInfoARM> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct BindDataGraphPipelineSessionMemoryARM
{
    VkResult result;
    format::HandleId device;
    uint32_t bindInfoCount;
    StructPointerDecoder<Decoded_VkBindDataGraphPipelineSessionMemoryInfoARM> pBindInfos;
};


struct DestroyDataGraphPipelineSessionARM
{
    format::HandleId device;
    format::HandleId session;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CmdDispatchDataGraphARM
{
    format::HandleId commandBuffer;
    format::HandleId session;
    StructPointerDecoder<Decoded_VkDataGraphPipelineDispatchInfoARM> pInfo;
};


struct GetDataGraphPipelineAvailablePropertiesARM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDataGraphPipelineInfoARM> pPipelineInfo;
    PointerDecoder<uint32_t> pPropertiesCount;
    PointerDecoder<VkDataGraphPipelinePropertyARM> pProperties;
};


struct GetDataGraphPipelinePropertiesARM
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkDataGraphPipelineInfoARM> pPipelineInfo;
    uint32_t propertiesCount;
    StructPointerDecoder<Decoded_VkDataGraphPipelinePropertyQueryResultARM> pProperties;
};


struct GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    PointerDecoder<uint32_t> pQueueFamilyDataGraphPropertyCount;
    StructPointerDecoder<Decoded_VkQueueFamilyDataGraphPropertiesARM> pQueueFamilyDataGraphProperties;
};


struct GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM
{
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM> pQueueFamilyDataGraphProcessingEngineInfo;
    StructPointerDecoder<Decoded_VkQueueFamilyDataGraphProcessingEnginePropertiesARM> pQueueFamilyDataGraphProcessingEngineProperties;
};


struct CmdSetAttachmentFeedbackLoopEnableEXT
{
    format::HandleId commandBuffer;
    VkImageAspectFlags aspectMask;
};


struct CmdBindTileMemoryQCOM
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkTileMemoryBindInfoQCOM> pTileMemoryBindInfo;
};


struct CmdDecompressMemoryEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkDecompressMemoryInfoEXT> pDecompressMemoryInfoEXT;
};


struct CmdDecompressMemoryIndirectCountEXT
{
    format::HandleId commandBuffer;
    VkMemoryDecompressionMethodFlagsEXT decompressionMethod;
    VkDeviceAddress indirectCommandsAddress;
    VkDeviceAddress indirectCommandsCountAddress;
    uint32_t maxDecompressionCount;
    uint32_t stride;
};


struct GetPartitionedAccelerationStructuresBuildSizesNV
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkPartitionedAccelerationStructureInstancesInputNV> pInfo;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildSizesInfoKHR> pSizeInfo;
};


struct CmdBuildPartitionedAccelerationStructuresNV
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBuildPartitionedAccelerationStructureInfoNV> pBuildInfo;
};


struct GetGeneratedCommandsMemoryRequirementsEXT
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkGeneratedCommandsMemoryRequirementsInfoEXT> pInfo;
    StructPointerDecoder<Decoded_VkMemoryRequirements2> pMemoryRequirements;
};


struct CmdPreprocessGeneratedCommandsEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoEXT> pGeneratedCommandsInfo;
    format::HandleId stateCommandBuffer;
};


struct CmdExecuteGeneratedCommandsEXT
{
    format::HandleId commandBuffer;
    VkBool32 isPreprocessed;
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoEXT> pGeneratedCommandsInfo;
};


struct CreateIndirectCommandsLayoutEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkIndirectCommandsLayoutEXT> pIndirectCommandsLayout;
};


struct DestroyIndirectCommandsLayoutEXT
{
    format::HandleId device;
    format::HandleId indirectCommandsLayout;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CreateIndirectExecutionSetEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkIndirectExecutionSetCreateInfoEXT> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkIndirectExecutionSetEXT> pIndirectExecutionSet;
};


struct DestroyIndirectExecutionSetEXT
{
    format::HandleId device;
    format::HandleId indirectExecutionSet;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct UpdateIndirectExecutionSetPipelineEXT
{
    format::HandleId device;
    format::HandleId indirectExecutionSet;
    uint32_t executionSetWriteCount;
    StructPointerDecoder<Decoded_VkWriteIndirectExecutionSetPipelineEXT> pExecutionSetWrites;
};


struct UpdateIndirectExecutionSetShaderEXT
{
    format::HandleId device;
    format::HandleId indirectExecutionSet;
    uint32_t executionSetWriteCount;
    StructPointerDecoder<Decoded_VkWriteIndirectExecutionSetShaderEXT> pExecutionSetWrites;
};


struct GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV
{
    VkResult result;
    format::HandleId physicalDevice;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkCooperativeMatrixFlexibleDimensionsPropertiesNV> pProperties;
};


struct GetMemoryMetalHandleEXT
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkMemoryGetMetalHandleInfoEXT> pGetMetalHandleInfo;
    PointerDecoder<uint64_t, void*> pHandle;
};


struct GetMemoryMetalHandlePropertiesEXT
{
    VkResult result;
    format::HandleId device;
    VkExternalMemoryHandleTypeFlagBits handleType;
    uint64_t pHandle;
    StructPointerDecoder<Decoded_VkMemoryMetalHandlePropertiesEXT> pMemoryMetalHandleProperties;
};


struct EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    PointerDecoder<uint32_t> pCounterCount;
    StructPointerDecoder<Decoded_VkPerformanceCounterARM> pCounters;
    StructPointerDecoder<Decoded_VkPerformanceCounterDescriptionARM> pCounterDescriptions;
};


struct CmdEndRendering2EXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkRenderingEndInfoKHR> pRenderingEndInfo;
};


struct CmdBeginCustomResolveEXT
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkBeginCustomResolveInfoEXT> pBeginCustomResolveInfo;
};


struct GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    StructPointerDecoder<Decoded_VkQueueFamilyDataGraphPropertiesARM> pQueueFamilyDataGraphProperties;
    StructPointerDecoder<Decoded_VkDataGraphOpticalFlowImageFormatInfoARM> pOpticalFlowImageFormatInfo;
    PointerDecoder<uint32_t> pFormatCount;
    StructPointerDecoder<Decoded_VkDataGraphOpticalFlowImageFormatPropertiesARM> pImageFormatProperties;
};


struct GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM
{
    VkResult result;
    format::HandleId physicalDevice;
    uint32_t queueFamilyIndex;
    StructPointerDecoder<Decoded_VkQueueFamilyDataGraphPropertiesARM> pQueueFamilyDataGraphProperties;
    StructPointerDecoder<Decoded_VkBaseOutStructure> pProperties;
};


struct CmdSetComputeOccupancyPriorityNV
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkComputeOccupancyPriorityParametersNV> pParameters;
};


struct GetPhysicalDeviceCooperativeMatrixProperties2EXT
{
    VkResult result;
    format::HandleId physicalDevice;
    StructPointerDecoder<Decoded_VkPhysicalDeviceCooperativeMatrixInfo2EXT> pCooperativeMatrixInfo;
    PointerDecoder<uint32_t> pPropertyCount;
    StructPointerDecoder<Decoded_VkCooperativeMatrixProperties2EXT> pProperties;
};


struct CmdSetPrimitiveRestartIndexEXT
{
    format::HandleId commandBuffer;
    uint32_t primitiveRestartIndex;
};


struct CreateAccelerationStructureKHR
{
    VkResult result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoKHR> pCreateInfo;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
    HandlePointerDecoder<VkAccelerationStructureKHR> pAccelerationStructure;
};


struct DestroyAccelerationStructureKHR
{
    format::HandleId device;
    format::HandleId accelerationStructure;
    StructPointerDecoder<Decoded_VkAllocationCallbacks> pAllocator;
};


struct CmdBuildAccelerationStructuresKHR
{
    format::HandleId commandBuffer;
    uint32_t infoCount;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR> pInfos;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildRangeInfoKHR*> ppBuildRangeInfos;
};


struct CmdBuildAccelerationStructuresIndirectKHR
{
    format::HandleId commandBuffer;
    uint32_t infoCount;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR> pInfos;
    PointerDecoder<VkDeviceAddress> pIndirectDeviceAddresses;
    PointerDecoder<uint32_t> pIndirectStrides;
    PointerDecoder<uint32_t*> ppMaxPrimitiveCounts;
};


struct CopyAccelerationStructureToMemoryKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureToMemoryInfoKHR> pInfo;
};


struct CopyMemoryToAccelerationStructureKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId deferredOperation;
    StructPointerDecoder<Decoded_VkCopyMemoryToAccelerationStructureInfoKHR> pInfo;
};


struct WriteAccelerationStructuresPropertiesKHR
{
    VkResult result;
    format::HandleId device;
    uint32_t accelerationStructureCount;
    HandlePointerDecoder<VkAccelerationStructureKHR> pAccelerationStructures;
    VkQueryType queryType;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
    size_t stride;
};


struct CmdCopyAccelerationStructureKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureInfoKHR> pInfo;
};


struct CmdCopyAccelerationStructureToMemoryKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureToMemoryInfoKHR> pInfo;
};


struct CmdCopyMemoryToAccelerationStructureKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkCopyMemoryToAccelerationStructureInfoKHR> pInfo;
};


struct GetAccelerationStructureDeviceAddressKHR
{
    VkDeviceAddress result;
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAccelerationStructureDeviceAddressInfoKHR> pInfo;
};


struct CmdWriteAccelerationStructuresPropertiesKHR
{
    format::HandleId commandBuffer;
    uint32_t accelerationStructureCount;
    HandlePointerDecoder<VkAccelerationStructureKHR> pAccelerationStructures;
    VkQueryType queryType;
    format::HandleId queryPool;
    uint32_t firstQuery;
};


struct GetDeviceAccelerationStructureCompatibilityKHR
{
    format::HandleId device;
    StructPointerDecoder<Decoded_VkAccelerationStructureVersionInfoKHR> pVersionInfo;
    PointerDecoder<VkAccelerationStructureCompatibilityKHR> pCompatibility;
};


struct GetAccelerationStructureBuildSizesKHR
{
    format::HandleId device;
    VkAccelerationStructureBuildTypeKHR buildType;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR> pBuildInfo;
    PointerDecoder<uint32_t> pMaxPrimitiveCounts;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildSizesInfoKHR> pSizeInfo;
};


struct CmdTraceRaysKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pRaygenShaderBindingTable;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pMissShaderBindingTable;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pHitShaderBindingTable;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pCallableShaderBindingTable;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
};


struct GetRayTracingCaptureReplayShaderGroupHandlesKHR
{
    VkResult result;
    format::HandleId device;
    format::HandleId pipeline;
    uint32_t firstGroup;
    uint32_t groupCount;
    size_t dataSize;
    PointerDecoder<uint8_t> pData;
};


struct CmdTraceRaysIndirectKHR
{
    format::HandleId commandBuffer;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pRaygenShaderBindingTable;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pMissShaderBindingTable;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pHitShaderBindingTable;
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR> pCallableShaderBindingTable;
    VkDeviceAddress indirectDeviceAddress;
};


struct GetRayTracingShaderGroupStackSizeKHR
{
    VkDeviceSize result;
    format::HandleId device;
    format::HandleId pipeline;
    uint32_t group;
    VkShaderGroupShaderKHR groupShader;
};


struct CmdSetRayTracingPipelineStackSizeKHR
{
    format::HandleId commandBuffer;
    uint32_t pipelineStackSize;
};


struct CmdDrawMeshTasksEXT
{
    format::HandleId commandBuffer;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};


struct CmdDrawMeshTasksIndirectEXT
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};


struct CmdDrawMeshTasksIndirectCountEXT
{
    format::HandleId commandBuffer;
    format::HandleId buffer;
    VkDeviceSize offset;
    format::HandleId countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};


GFXRECON_END_NAMESPACE(args)
GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_GENERATED_VULKAN_DECODER_ARGS_H
