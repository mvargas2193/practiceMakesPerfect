//
//  BNRPerson.m
//  BMITime
//
//  Created by Michelle Vargas on 6/9/16.
//  Copyright © 2016 Michelle Vargas. All rights reserved.
//

#import "BNRPerson.h"

@implementation BNRPerson

-(float)heightInMeters
{
    return heightInMeters;
}
-(void)setHeightInMeters:(float)h {
    
    heightInMeters = h;
    
}
-(int)weightInKilos
{
    return weightInKilos;
}
-(void)setWeightInKilos:(int)w
{
    weightInKilos = w;
    
}

-(float)bodyMassIndex
{
    return weightInKilos/(heightInMeters*heightInMeters);
    
}



@end
