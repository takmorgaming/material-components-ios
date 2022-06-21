// Copyright 2020-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

API_DEPRECATED_BEGIN(
    "Use default system highlight behavior instead (go/material-ios-touch-response)",
    ios(12, API_TO_BE_DEPRECATED))

@class MDCInkView;

/**
 Delegate protocol for MDCInkView. Clients may implement this protocol to receive updates when ink
 layer start and end.
 */
__deprecated_msg("Please use MDCRippleViewDelegate instead.") @protocol MDCInkViewDelegate<NSObject>

@optional

/**
 Called when the ink ripple animation begins.

 @param inkView The MDCInkView that starts animating.
 */
- (void)inkAnimationDidStart:(nonnull MDCInkView *)inkView;

/**
 Called when the ink ripple animation ends.

 @param inkView The MDCInkView that ends animating.
 */
- (void)inkAnimationDidEnd:(nonnull MDCInkView *)inkView;

@end

API_DEPRECATED_END
