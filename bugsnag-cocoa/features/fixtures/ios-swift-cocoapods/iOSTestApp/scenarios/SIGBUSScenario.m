//
//  SIGBUSScenario.m
//  iOSTestApp
//
//  Created by Jamie Lynch on 26/05/2020.
//  Copyright © 2020 Bugsnag. All rights reserved.
//

#import "SIGBUSScenario.h"

@implementation SIGBUSScenario

- (void)startBugsnag {
    self.config.autoTrackSessions = NO;
    [super startBugsnag];
}

- (void)run {
    raise(SIGBUS);
}

@end
