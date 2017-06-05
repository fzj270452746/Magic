//
//  AppConstants.h
//  Patrol
//
//  Created by Benjamin on 4/6/17.
//  Copyright © 2017 Cloud4Magic. All rights reserved.
//

#define     kScreenWidth                [UIScreen mainScreen].bounds.size.width
#define     kScreenHeight               [UIScreen mainScreen].bounds.size.height

///2X图尺寸乘上Ratio
#define RATIO                           [UIScreen mainScreen].bounds.size.height / 667.f

#define SYSTEM_VERSION_GRATERTHAN_OR_EQUALTO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
