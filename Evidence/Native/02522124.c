/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Make
Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_BusGeometry__Make (double cx, double cz, int32_t a, double length, double width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Make
   Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_BusGeometry__Make (double cx, double cz, int32_t a,
   double length, double width, const MethodInfo* method); */

void Dino_BusSand_Core_BusGeometry__Make_2422124
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,double param_4,
               double param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbcb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbcb = 1;
  }
  uStack_28 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Heading_242bec8(param_6,&uStack_28,&uStack_48);
  auVar2 = NEON_fmov(0x3fe0000000000000,8);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uStack_28;
  param_1[3] = uStack_48;
  param_1[5] = param_5 * auVar2._8_8_;
  param_1[4] = param_4 * auVar2._0_8_;
  return;
}

