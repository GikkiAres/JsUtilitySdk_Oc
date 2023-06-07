//
//  JsOUtilitySdk.h
//  JsOUtilitySdk
//
//  Created by Gikki Ares on 2021/8/4.
//

#import <Foundation/Foundation.h>

//! Project version number for JsOUtilitySdk.
//extern const int JsUtilitySdk_VersionNumber;

//! Project version string for JsOUtilitySdk.
//extern const unsigned char JsUtilitySdk_VersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JsUtilitySdk/PublicHeader.h>
#import <JsUtilitySdk/JsVersionManager.h>

//Log
#import <JsUtilitySdk/JsLogManager.h>
#import <JsUtilitySdk/JsLogListViewController.h>
#import <JsUtilitySdk/JsLogDetailViewController.h>

#pragma mark Thread
#import <JsUtilitySdk/JsThreadManager.h>

#pragma mark Mail
#import <JsUtilitySdk/JsMailManager.h>

#import <JsUtilitySdk/JsFileManager.h>
#import <JsUtilitySdk/JsTimeManager.h>


#import <JsUtilitySdk/JsLikeAnimationManager.h>
#import <JsUtilitySdk/JsBarrageButton.h>



#pragma mark Encypt
#pragma mark XXTea
#import <JsUtilitySdk/JsXXTeaManager.h>
#pragma mark Md5
#import <JsUtilitySdk/JsMd5Manager.h>


// JsStringValidator
#import <JsUtilitySdk/JsStringValidator.h>



#import <JsUtilitySdk/Js_ImageViewWebManager.h>
#import <JsUtilitySdk/UIImageView+JsWebManager.h>

#import <JsUtilitySdk/JsYy_Model.h>

//ViewController
#import <JsUtilitySdk/JsLoginViewController.h>
#import <JsUtilitySdk/JsAboutViewController.h>
#import <JsUtilitySdk/JsAboutViewControllerVm.h>

#pragma mark JsUi
//JsTextField
#import <JsUtilitySdk/JsTextField.h>
#import <JsUtilitySdk/JsTextFieldVm.h>
//JsLogoView
#import <JsUtilitySdk/JsLogoView.h>
#import <JsUtilitySdk/JsImageView.h>
#import <JsUtilitySdk/JsViewHIli.h>

//JsSecretButton
#import <JsUtilitySdk/JsSecretButton.h>

//JsBarButtonItem
#import <JsUtilitySdk/JsBarButtonItemManager.h>
#import <JsUtilitySdk/JsBarButtonItem.h>

#import <JsUtilitySdk/JsGeometryManager.h>
#import <JsUtilitySdk/JsColorManager.h>
#import <JsUtilitySdk/JsRequestManager.h>
#import <JsUtilitySdk/JsQrCodeManager.h>
#import <JsUtilitySdk/JsMenuView.h>
#import <JsUtilitySdk/JsMenuItemVm.h>

#import <JsUtilitySdk/JsListViewController.h>
#import <JsUtilitySdk/JsAlertManager.h>
#import <JsUtilitySdk/JsDisplayManager.h>
#import <JsUtilitySdk/JsImageView.h>
#import <JsUtilitySdk/JsButtonLiiOne.h>
#import <JsUtilitySdk/JsButtonLiiTwo.h>
#import <JsUtilitySdk/JsButtonLiiVm.h>
#import <JsUtilitySdk/JsImageBrowserView.h>

#import <JsUtilitySdk/JsTvcLll.h>

#import <JsUtilitySdk/JsSnapshotManager.h>
#import <JsUtilitySdk/JsPageGroupView.h>
#import <JsUtilitySdk/JsTableView.h>
#import <JsUtilitySdk/JsNavigationBar.h>
#import <JsUtilitySdk/JsTextView.h>

#pragma mark Animation
#import <JsUtilitySdk/JsAnimationManager.h>


#pragma mark 单位换算
#import <JsUtilitySdk/JsUnitManager.h>

#pragma mark 设备管理
#import <JsUtilitySdk/JsDeviceManager.h>

#pragma mark 网络管理
#import <JsUtilitySdk/JsNetoworkReachabitilyManagerInterface.h>
#import <JsUtilitySdk/JsNetworkReachablitiyManagerA.h>

#pragma mark bundle资源管理
#import <JsUtilitySdk/JsBundleManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsUtilitySdk : NSObject

+ (void)initSdk;
/*
 x.x.x(bbb)
 */
+ (NSString *)sdkVersion;
//x.x.x
+ (NSString *)sdkShortVersion;
//bbb
+ (int)sdkBuild;

@end

NS_ASSUME_NONNULL_END
