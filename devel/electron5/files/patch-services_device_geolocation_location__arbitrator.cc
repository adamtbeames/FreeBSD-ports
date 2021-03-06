--- services/device/geolocation/location_arbitrator.cc.orig	2019-04-08 08:33:02 UTC
+++ services/device/geolocation/location_arbitrator.cc
@@ -164,7 +164,7 @@ LocationArbitrator::NewNetworkLocationProvider(
 std::unique_ptr<LocationProvider>
 LocationArbitrator::NewSystemLocationProvider() {
 #if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
-    defined(OS_FUCHSIA)
+    defined(OS_FUCHSIA) || defined(OS_BSD)
   return nullptr;
 #else
   return device::NewSystemLocationProvider();
