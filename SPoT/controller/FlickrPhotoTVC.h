//
//  FlickrPhotoTVC.h
//  Shutterbug
//
//  Created by CS193p Instructor.
//  Copyright (c) 2013 Stanford University. All rights reserved.
//
//  Will call setImageURL: as part of any "Show Image" segue.

#import <UIKit/UIKit.h>
#import "MasterViewTVC.h"

@class FlickrPhotoTVC;

@protocol FlickrPhotoTVCDelegate
- (void) refreshContent:(FlickrPhotoTVC*)sender;
@end

@interface FlickrPhotoTVC : MasterViewTVC

// the Model for this VC
// an array of dictionaries of Flickr information
// obtained using Flickr API
// (e.g. FlickrFetcher will obtain such an array of dictionaries)
@property (nonatomic, strong) NSArray *photos; // of NSDictionary
@property (nonatomic, weak) id<FlickrPhotoTVCDelegate> delegate;

@end
