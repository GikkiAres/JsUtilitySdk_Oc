#
#  Be sure to run `pod spec lint JsUtilitySdk.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|


	# 这个名字是pod库的名字.
  spec.name         = "JsUtilitySdk"
  spec.version			= "0.0.37"
  spec.summary      = "soucre源为本地目录"
  spec.description  = <<-DESC
	The utility contanis:
	JsLogManager JsMenuView JsGeometryManager
                   DESC
  spec.homepage     = "https://gitee.com/GikkiAres/jso-utility-sdk-demo.git"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"
  spec.license      = "MIT"
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  spec.author             = { "Gikki Ares" => "GikkiAres@icloud.com" }
  
  # spec.platform     = :ios,声明最低支持的版本.
  spec.platform     = :ios, "9.0"
	
	#	表示使用spec.version
    # demo
#	spec.source = { :git => "https://gitee.com/GikkiAres/jso-utility-sdk-demo.git" ,:tag => "0.0.35"}
    # framework
spec.source = { :git => "https://github.com/GikkiAres/JsUtilitySdk_Oc.git" ,:tag => spec.version.to_s}
	## ok

	spec.vendored_frameworks = "#{spec.version.to_s}/JsUtilitySdk.framework"
	# spec.resources = "./spec.version.to_s/test.bundle"
	
	
  spec.frameworks  = "UIKit", "Foundation"
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  # spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  # 设置pod的依赖,安装该pod会自动安装其需要的依赖.
  # spec.dependency "YYModel" 
#	spec.dependency "SDWebImage" ,'~> 5.10.0'
  # spec.dependency "MJRefresh" ,'~> 3.5.0'
  # spec.static_framework = true

end
