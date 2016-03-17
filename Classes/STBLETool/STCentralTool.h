//
//  STBLETool.h
//  STBLETool
//
//  Created by TangJR on 3/16/16.
//  Copyright © 2016 tangjr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@protocol STCentralToolDelegate <NSObject>



@end

@interface STCentralTool : NSObject

+ (instancetype)shareInstence;

- (void)startScan;
- (void)stopScan;
- (void)selectPeripheral:(CBPeripheral *)peripheral;

- (void)sendData:(NSData *)data;

@end