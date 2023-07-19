#
#  Be sure to run `pod spec lint JsLiveListViewController.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

	# 这个名字是framework的名字.
  spec.name         = "JsUtilitySdkFramework"
  spec.version			= "0.0.37"
  spec.summary      = "Total utility"

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  spec.description  = <<-DESC
	The utility contanis:
	JsLogManager JsMenuView JsGeometryManager
                   DESC

  spec.homepage     = "https://gitee.com/GikkiAres/jso-utility-sdk-demo.git"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Licensing your code is important. See https://choosealicense.com for more info.
  #  CocoaPods will detect a license file if there is a named LICENSE*
  #  Popular ones are 'MIT', 'BSD' and 'Apache License, Version 2.0'.
  #

  spec.license      = "MIT"
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the authors of the library, with email addresses. Email addresses
  #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
  #  accepts just a name if you'd rather not provide an email address.
  #
  #  Specify a social_media_url where others can refer to, for example a twitter
  #  profile URL.
  #

  spec.author             = { "Gikki Ares" => "GikkiAres@icloud.com" }
  # Or just: spec.author    = "Gikki Ares"
  # spec.authors            = { "Gikki Ares" => "GikkiAres@icloud.com" }
  # spec.social_media_url   = "https://twitter.com/Gikki Ares"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If this Pod runs only on iOS or OS X, then specify the platform and
  #  the deployment target. You can optionally include the target after the platform.
  #

  # spec.platform     = :ios
  spec.platform     = :ios, "9.0"

  #  When using multiple platforms
  # spec.ios.deployment_target = "5.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the location from where the source should be retrieved.
  #  Supports git, hg, bzr, svn and HTTP.
  #
  # 指定Pod的参考地址和版本
  spec.source       = { :git => "https://github.com/GikkiAres/JsUtilitySdk_Oc.git",:tag => spec.version.to_s }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #
puts "asdfasdfasdfsdaff"
puts "#{spec.version.to_s}/JsUtilitySdk.framework"
#   spec.source_files  = "JsOcUtilitySdk/JsOcUtilitySdk/JsOcUtilitySdk/**/*.{h,m}"
spec.ios.vendored_frameworks = "#{spec.version.to_s}/JsUtilitySdk.framework"
#   spec.ios.vendored_frameworks = "#{spec.version.to_s}/JsUtilitySdk.framework, #{spec.version.to_s}/JsAsrUtilitySdk.framework"
  # spec.public_header_files = "Classes/**/*.h"

  # spec.resource  = "icon.png"
#   spec.resources = ""
  spec.frameworks  = "UIKit", "Foundation"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # spec.requires_arc = true

  # spec.pod_target_xcconfig = { 'skip_validation' => true  }
  
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
	# 这里的xcconfig将写入到JsOUtilitySdk.debug.xcconfig中.
#   spec.xcconfig = {
		# 打开这样一行,将在VALID_ARCHS => arm64,写入xcconfig文件,这样即便运行在模拟器上也去编译arm64的.会出错.
#    'VALID_ARCHS' =>  'arm64',
#    'skip_validation' => true
#  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  # spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  # 设置pod的依赖,安装该pod会自动安装其需要的依赖.
  # spec.dependency "YYModel" 
  # spec.dependency "SDWebImage" ,'~> 5.10.0'
  # spec.dependency "MJRefresh" ,'~> 3.5.0'
  # spec.static_framework = true

end
