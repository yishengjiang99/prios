//
//  SPAppIdValidator.h
//  SponsorPay iOS SDK
//
//  Created by David Davila on 10/26/11.
//  Copyright (c) 2011 SponsorPay. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const SPInvalidAppIdException;

@interface SPAppIdValidator : NSObject

+ (void)validateOrThrow: (NSString *)appId;

@end
