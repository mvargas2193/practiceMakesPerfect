//
//  BNRPerson.h
//  BMITime
//
//  Created by Michelle Vargas on 6/9/16.
//  Copyright © 2016 Michelle Vargas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject

{
    
    //BNRPerson has two instance variables
    
    float heightInMeters;
    int weightInKilos;
    
}

-(float)heightInMeters;
-(void)setHeightInMeters:(float) h;
-(int)weightInKilos;
-(void)setWeightInKilos:(int)w;

-(float)bodyMassIndex;



@end
