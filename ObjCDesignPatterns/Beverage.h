#import <Foundation/Foundation.h>


@interface Beverage : NSObject

@property (strong, nonatomic) NSString *name;

- (void)prepare;
- (void)pour;

@end
