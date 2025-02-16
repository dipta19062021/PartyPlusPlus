//
//  PPPViewController.h
//  PartyPlusPlus
//
//  Created by Scott Andrus on 10/12/12.
//  Copyright (c) 2012 Tapatory. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PPPMainEventView.h"
#import "PPPTertiaryEventView.h"
#import "SAContentViewController.h"

@interface PPPViewController : SAContentViewController <UIScrollViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>

// Non-IB
@property (strong, nonatomic) NSArray *events;
@property (strong, nonatomic) NSArray *eventViews;

@property (strong, nonatomic) NSArray *tEvents;
@property (strong, nonatomic) NSArray *tEventViews;

@property (strong, nonatomic) PPPEvent *currentEvent;
// HACK bc I can't figure anything else right now
@property (strong, nonatomic) PPPEvent *pickedTEvent;



// IBOutlets
@property (strong, nonatomic) IBOutlet PPPMainEventView *currentEventView;
@property (strong, nonatomic) IBOutlet PPPTertiaryEventView *currentTEventView;
@property (strong, nonatomic) IBOutlet UIScrollView *mainEventsScrollView;
@property (strong, nonatomic) IBOutlet UIScrollView *tertiaryEventsScrollView;
@property (strong, nonatomic) IBOutlet UIView *backgroundView;
@property (strong, nonatomic) IBOutlet UILabel *pageLabel;
@property (strong, nonatomic) IBOutlet UIPageControl *pageControl;

// IBActions
- (IBAction)showCameraUI:(id)sender;

- (void)refresh;

@end
