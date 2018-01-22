#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegration.h>
#import "GAI.h"


@interface SEGGoogleAnalyticsIntegration : NSObject <SEGIntegration>

@property (nonatomic, copy) NSDictionary *settings;
@property (nonatomic, copy) NSDictionary *traits;
@property (nonatomic, assign) id<GAITracker> tracker;

- (id)initWithSettings:(NSDictionary *)settings;

@end
