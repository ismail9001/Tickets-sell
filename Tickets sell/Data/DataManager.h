//
//  DataManager.h
//  Tickets sell
//
//  Created by macbook on 16.05.2021.
//

#import <Foundation/Foundation.h>
#import "Country.h"
#import "City.h"
#import "Airport.h"

NS_ASSUME_NONNULL_BEGIN

#define kDataManagerLoadDataDidComplete @"DataManagerLoadDataDidComplete"

typedef enum DataSourceType {
    DataSourceTypeCountry,
    DataSourceTypeCity,
    DataSourceTypeAirport
} DataSourceType;

@interface DataManager : NSObject

+ (instancetype)sharedInstance;
- (void)loadData;

@property (nonatomic, strong, readonly) NSArray *countries;
@property (nonatomic, strong, readonly) NSArray *cities;
@property (nonatomic, strong, readonly) NSArray *airports;

@end

NS_ASSUME_NONNULL_END
