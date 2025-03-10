//
//  FOInAppProvisionDataResponse.h
//  FooAppleWalletDemo
//
//  Created by FOO_ on 18/12/2020.
//

#import "FOInAppBaseResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppProvisionDataResponse : FOInAppBaseResponse

@property (strong, nonatomic) NSString *ephemralPublicKey;
@property (strong, nonatomic) NSString *encryptedPassData;
@property (strong, nonatomic) NSString *activationData;
@property (strong, nonatomic) NSString *transactionId;

@end

NS_ASSUME_NONNULL_END
