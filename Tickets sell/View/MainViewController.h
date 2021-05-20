//
//  MainViewController.h
//  Tickets sell
//
//  Created by macbook on 16.05.2021.
//

#import <UIKit/UIKit.h>

typedef struct SearchRequest {
    __unsafe_unretained NSString *origin;
    __unsafe_unretained NSString *destionation;
    __unsafe_unretained NSDate *departDate;
    __unsafe_unretained NSDate *returnDate;
} SearchRequest;

@interface MainViewController : UIViewController


@end

