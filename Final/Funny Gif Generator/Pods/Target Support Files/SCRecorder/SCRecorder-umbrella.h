#import <UIKit/UIKit.h>

#import "NSURL+SCSaveToCameraRoll.h"
#import "SCAssetExportSession.h"
#import "SCAudioConfiguration.h"
#import "SCAudioTools.h"
#import "SCContext.h"
#import "SCFilter+UIImage.h"
#import "SCFilter+VideoComposition.h"
#import "SCFilter.h"
#import "SCFilterAnimation.h"
#import "SCFilterImageView.h"
#import "SCImageView.h"
#import "SCIOPixelBuffers.h"
#import "SCMediaTypeConfiguration.h"
#import "SCPhotoConfiguration.h"
#import "SCPlayer.h"
#import "SCProcessingQueue.h"
#import "SCRecorder.h"
#import "SCRecorderDelegate.h"
#import "SCRecorderFocusTargetView.h"
#import "SCRecorderHeader.h"
#import "SCRecorderTools.h"
#import "SCRecorderToolsView.h"
#import "SCRecordSession.h"
#import "SCRecordSession_Internal.h"
#import "SCRecordSessionSegment.h"
#import "SCSampleBufferHolder.h"
#import "SCSaveToCameraRollOperation.h"
#import "SCSwipeableFilterView.h"
#import "SCVideoConfiguration.h"
#import "SCVideoPlayerView.h"
#import "SCWeakSelectorTarget.h"
#import "UIImage+SCSaveToCameraRoll.h"

FOUNDATION_EXPORT double SCRecorderVersionNumber;
FOUNDATION_EXPORT const unsigned char SCRecorderVersionString[];
