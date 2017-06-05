
#import <Foundation/Foundation.h>

#import "HTTPStatusCodes.h"
#import "ServiceResultInfo.h"
#import "BaseAPIURL.h"
#import "RESTfulAPIWrapper.h"

#import "PageInfoModel.h"
#import "ModelBaseClass+JSON.h"
@interface RESTfulBaseService : NSObject
- (NSDictionary *) buildingPageIndex:(PageInfoModel *) page;
@end
