#
# Be sure to run `pod lib lint SwaggerClient.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = "SwaggerClient"
    s.version          = "1.0.6"

    s.summary          = "IAMIN API"
    s.description      = <<-DESC
                         API Backend for the IAMIN App
                         DESC

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    s.framework    = 'SystemConfiguration'

    s.homepage     = "https://blackcurrantapps.github.io/iamin-apis/#/"
    s.license      = "Proprietary"
    s.source       = { :git => "https://github.com/BlackcurrantApps/iamin-apis.git" }
    s.author       = { "Sanket" => "sanket@blackcurrantapps.com" }

    s.source_files = 'IOSClientLib/SwaggerClient/**/*.{m,h}'
    s.public_header_files = 'IOSClientLib/SwaggerClient/**/*.h'


    s.dependency 'AFNetworking', '~> 3'
    s.dependency 'JSONModel', '~> 1.2'
    s.dependency 'ISO8601', '~> 0.6'
end


