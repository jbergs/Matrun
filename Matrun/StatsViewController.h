//
//  StatsController.h
//  Matrun
//
//  Created by Sunil Sayala on 4/10/11.
//  Copyright 2011 Sunil Sayala. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StatsResetDelegate.h"



@interface StatsViewController : UIViewController 
<UITableViewDelegate, UITableViewDataSource>{
    NSInteger total;
    NSInteger wrongAttempts;
    NSInteger correctAttempts;
    id <StatsResetDelegate> delegate;
}
@property (nonatomic, retain) NSString *sectionTitle;
@property (nonatomic, retain) IBOutlet UITableView *table;
@property (nonatomic, retain) NSDictionary *information;
@property (nonatomic, retain) NSArray *keys;
@property (readonly) BOOL resetStatsPressed;
@property (nonatomic, retain) id <StatsResetDelegate> delegate;
- (void)dismissAction;
- (void)setCorrectAttemptCount:(NSInteger)count;
- (void)setWrongAttemptCount:(NSInteger)count;
- (void)setTotalCount:(NSInteger)count;
- (IBAction)resetScores;

@end
