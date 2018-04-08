Pod::Spec.new do |s|
  s.name         = "CZYStyle"
  s.version      = "0.0.1"
  s.summary      = "iOS字体颜色管理组件"
  s.homepage     = "https://git.tticar.com/pods/CZYStyle"
  s.license      = "Copyright (C) 2016 Gary, Inc.  All rights reserved."
  s.author             = { "Gary" => "zguanyu@163.com" }
  s.social_media_url   = "http://www.cupinn.com"
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://git.tticar.com/pods/CZYStyle.git"}
  s.source_files  = "CZYStyle/CZYStyle/**/*.{h,m,c}"
  s.requires_arc = true
end
