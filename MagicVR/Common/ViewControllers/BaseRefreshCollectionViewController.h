//
//  BaseRefreshCollectionViewController.h
//  Patrol
//
//  Created by Benjamin on 4/7/17.
//  Copyright © 2017 Cloud4Magic. All rights reserved.
//

#import "BaseCollectionViewController.h"

#import "PageInfoModel.h"


@interface BaseRefreshCollectionViewController : BaseCollectionViewController {
    PageInfoModel           *_CurrentPageIndex;
    RefreshStatus           _LoadStatus;
}

- (void)receiveRefreshDataDidFinished:(BOOL)success pageInfo:(PageInfoModel *)pageInfo refreshStatus:(RefreshStatus) status;

- (void)refreshCollectionViewWithHeaderSel:(SEL)headerRefreshSelector withFooterRefreshSel:(SEL)footerRefreshSelector;

- (void)refreshCollectionViewWithSelector:(SEL)refreshSelector;

@end
