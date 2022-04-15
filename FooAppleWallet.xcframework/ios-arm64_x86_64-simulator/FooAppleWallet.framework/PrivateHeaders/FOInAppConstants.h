//
//  FOInAppConstants.h
//  FooApplePayDemo
//
//  Created by FOO_ on 18/12/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppConstants : NSObject

extern NSString *const FO_INAPP_WALLET_PUBLIC_KEY_API;
extern NSString *const FO_INAPP_WALLET_CREATE_PROVISIONG_DATA_API;
extern NSString *const FO_INAPP_WALLET_CREATE_PROVISIONING_DATA_CARD_ID_API;
extern NSString *const FO_INAPP_WALLET_CREATE_VERIFICATION_DATA_BY_CARD_ID_API;
extern NSString *const FO_INAPP_WALLET_REPORT_LOGS;


#pragma mark "Logs Action"

extern NSString *const FO_INAPP_WALLET_START_PUBLIC_KEY;
extern NSString *const FO_INAPP_WALLET_REQUEST_PUBLIC_KEY_SUCCESS;
extern NSString *const FO_INAPP_WALLET_REQUEST_PUBLIC_KEY_FAILURE;
extern NSString *const FO_INAPP_WALLET_START_CREATE_PROVISIONING_DATA_API;
extern NSString *const FO_INAPP_WALLET_REQUEST_SUCCESS_PROVISIONING_DATA_API;
extern NSString *const FO_INAPP_WALLET_REQUEST_FAILURE_PROVISIONING_DATA_API;
extern NSString *const FO_INAPP_WALLET_PK_PAYMENT_REQUEST_CONFIGURATION_FAILURE;
extern NSString *const FO_INAPP_WALLET_PK_PAYMENT_REQUEST_CONFIGURATION_SUCCESS;
extern NSString *const FO_INAPP_WALLET_PK_ADD_PAYMENT_PASS_CONTROLLER_FAILURE;
extern NSString *const FO_INAPP_WALLET_PK_ADD_PAYMENT_PASS_CONTROLLER_SUCCESS;

@end

NS_ASSUME_NONNULL_END
