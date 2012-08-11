#import <Foundation/Foundation.h>
#import <Growl/Growl.h>
#include <string>

@interface growlWrapper : NSObject <GrowlApplicationBridgeDelegate>

void showGrowlMessage(NSInteger priority, NSString *title, NSString *desc, CFDataRef icon);

@end
