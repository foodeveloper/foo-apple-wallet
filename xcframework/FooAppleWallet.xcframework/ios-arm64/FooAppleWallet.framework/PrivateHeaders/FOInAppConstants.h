//
//  FOInAppConstants.h
//  FooAppleWalletDemo
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
extern NSString *const FO_INAPP_WALLET_UPDATE_TRANSACTION_STATUS;
extern NSString *const FO_INAPP_WALLET_REPORT_LOGS;

extern NSString *const FO_INAPP_EXTENSION_NEEDS_AUTH_KEY;
extern NSString *const FO_INAPP_EXTENSION_HAS_AVAILABLE_LOCAL_PASSES_KEY;
extern NSString *const FO_INAPP_EXTENSION_HAS_AVAILABLE_REMOTE_PASSES_KEY;

#pragma mark "Logs Action"

extern NSString *const FO_INAPP_WALLET_START_PUBLIC_KEY;
extern NSString *const FO_INAPP_WALLET_REQUEST_PUBLIC_KEY_SUCCESS;
extern NSString *const FO_INAPP_WALLET_REQUEST_PUBLIC_KEY_FAILURE;
extern NSString *const FO_INAPP_WALLET_START_PUBLIC_KEY_EXTENSION;
extern NSString *const FO_INAPP_WALLET_REQUEST_PUBLIC_KEY_SUCCESS_EXTENSION;
extern NSString *const FO_INAPP_WALLET_REQUEST_PUBLIC_KEY_FAILURE_EXTENSION;
extern NSString *const FO_INAPP_WALLET_START_CREATE_PROVISIONING_DATA_API;
extern NSString *const FO_INAPP_WALLET_REQUEST_SUCCESS_PROVISIONING_DATA_API;
extern NSString *const FO_INAPP_WALLET_REQUEST_FAILURE_PROVISIONING_DATA_API;
extern NSString *const FO_INAPP_WALLET_START_CREATE_PROVISIONING_DATA_API_EXTENSION;
extern NSString *const FO_INAPP_WALLET_REQUEST_SUCCESS_PROVISIONING_DATA_API_EXTENSION;
extern NSString *const FO_INAPP_WALLET_REQUEST_FAILURE_PROVISIONING_DATA_API_EXTENSION;
extern NSString *const FO_INAPP_WALLET_PK_PAYMENT_REQUEST_CONFIGURATION_FAILURE;
extern NSString *const FO_INAPP_WALLET_PK_PAYMENT_REQUEST_CONFIGURATION_SUCCESS;
extern NSString *const FO_INAPP_WALLET_PK_ADD_PAYMENT_PASS_CONTROLLER_FAILURE;
extern NSString *const FO_INAPP_WALLET_PK_ADD_PAYMENT_PASS_CONTROLLER_SUCCESS;

extern NSString *const FO_INAPP_WALLET_REQUEST_ACTIVATION_DATA_FOR_ACTIVATION;
extern NSString *const FO_INAPP_WALLET_REQUEST_ACTIVATION_DATA_FOR_ACTIVATION_FAIL;
extern NSString *const FO_INAPP_WALLET_REQUEST_ACTIVATION_DATA_FOR_ACTIVATION_SUCCESS;

extern NSString *const FO_INAPP_WALLET_REQUEST_FAILED_INVALID_TOKEN;

@end

NS_ASSUME_NONNULL_END
