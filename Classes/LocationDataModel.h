//
//  LocationDataModel.h
//  WxHere
//
//  Created by Ayal Spitz on 11/2/09.
//  Copyright (C) 2009 Ayal Spitz
// 
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//

#import <Foundation/Foundation.h>
#import "NetDataModel.h"

@class GPSDataModel;


@interface LocationDataModel : NetDataModel {
	NSString *location;
	NSString *city;
	NSString *stateAbbr;
}

@property (copy) NSString *location;
@property (copy) NSString *city;
@property (copy) NSString *stateAbbr;

@end