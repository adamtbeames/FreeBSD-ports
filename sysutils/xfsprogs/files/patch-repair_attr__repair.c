--- repair/attr_repair.c.orig	2015-07-24 04:28:04 UTC
+++ repair/attr_repair.c
@@ -16,6 +16,7 @@
  * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  */
 
+#include <inttypes.h>
 #include <libxfs.h>
 #include "globals.h"
 #include "err_protos.h"
