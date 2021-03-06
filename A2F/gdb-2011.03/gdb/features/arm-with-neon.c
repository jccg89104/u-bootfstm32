/* THIS FILE IS GENERATED.  Original: arm-with-neon.xml */

#include "defs.h"
#include "gdbtypes.h"
#include "target-descriptions.h"

struct target_desc *tdesc_arm_with_neon;
static void
initialize_tdesc_arm_with_neon (void)
{
  struct target_desc *result = allocate_target_description ();
  struct tdesc_feature *feature;
  struct type *field_type, *type;

  feature = tdesc_create_feature (result, "org.gnu.gdb.arm.core");
  tdesc_create_reg (feature, "r0", 0, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r1", 1, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r2", 2, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r3", 3, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r4", 4, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r5", 5, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r6", 6, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r7", 7, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r8", 8, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r9", 9, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r10", 10, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r11", 11, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "r12", 12, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "sp", 13, 1, NULL, 32, "data_ptr");
  tdesc_create_reg (feature, "lr", 14, 1, NULL, 32, "int");
  tdesc_create_reg (feature, "pc", 15, 1, NULL, 32, "code_ptr");
  tdesc_create_reg (feature, "cpsr", 25, 1, NULL, 32, "int");

  feature = tdesc_create_feature (result, "org.gnu.gdb.arm.vfp");
  tdesc_create_reg (feature, "d0", 26, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d1", 27, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d2", 28, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d3", 29, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d4", 30, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d5", 31, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d6", 32, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d7", 33, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d8", 34, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d9", 35, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d10", 36, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d11", 37, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d12", 38, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d13", 39, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d14", 40, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d15", 41, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d16", 42, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d17", 43, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d18", 44, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d19", 45, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d20", 46, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d21", 47, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d22", 48, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d23", 49, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d24", 50, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d25", 51, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d26", 52, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d27", 53, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d28", 54, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d29", 55, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d30", 56, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "d31", 57, 1, NULL, 64, "ieee_double");
  tdesc_create_reg (feature, "fpscr", 58, 1, "float", 32, "int");

  feature = tdesc_create_feature (result, "org.gnu.gdb.arm.neon");

  tdesc_arm_with_neon = result;
}
