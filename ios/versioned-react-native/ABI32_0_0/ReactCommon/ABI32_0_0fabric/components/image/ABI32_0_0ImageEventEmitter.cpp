/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI32_0_0ImageEventEmitter.h"

namespace facebook {
namespace ReactABI32_0_0 {

void ImageEventEmitter::onLoadStart() const {
  dispatchEvent("loadStart");
}

void ImageEventEmitter::onLoad() const {
  dispatchEvent("load");
}

void ImageEventEmitter::onLoadEnd() const {
  dispatchEvent("loadEnd");
}

void ImageEventEmitter::onProgress() const {
  dispatchEvent("progress");
}

void ImageEventEmitter::onError() const {
  dispatchEvent("error");
}

void ImageEventEmitter::onPartialLoad() const {
  dispatchEvent("partialLoad");
}

} // namespace ReactABI32_0_0
} // namespace facebook
