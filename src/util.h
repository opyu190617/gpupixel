/*
 * GPUPixel
 *
 * Created by gezhaoyou on 2021/6/24.
 * Copyright © 2021 PixPark. All rights reserved.
 */

#pragma once

#include <stdlib.h>
#include <string>
#include "GPUPixelDef.h"

NS_GPUPIXEL_BEGIN
#define rotationSwapsSize(rotation)                   \
  ((rotation) == GPUPixel::RotateLeft ||              \
   (rotation) == GPUPixel::RotateRight ||             \
   (rotation) == GPUPixel::RotateRightFlipVertical || \
   (rotation) == GPUPixel::RotateRightFlipHorizontal)

class Util {
 public:
  static std::string str_format(const char* fmt, ...);
  static void Log(const std::string& tag, const std::string& format, ...);
  static int64_t nowTimeMs();
#if defined(GPUPIXEL_IOS)
  static std::string getResourcePath(std::string name);
  static std::string getResourcePath(std::string bundle_name,
                                     std::string file_name,
                                     std::string type);
#endif
};
NS_GPUPIXEL_END