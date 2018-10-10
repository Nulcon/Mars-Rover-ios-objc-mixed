//
//  MarsRoverClient.h
//  Mars-Rover-ios-objc-mixed
//
//  Created by Conner on 10/9/18.
//  Copyright © 2018 Conner. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MarsRoverClient : NSObject
- (NSURL *)urlForPhotosFromRover:(NSString *)roverName sol:(int)sol;
- (void)fetchRoverPhotosWithRover:(NSString *)marsRover sol:(int)sol completion:(void (^)(NSArray *photos, NSError *))completion;
@end

NS_ASSUME_NONNULL_END
