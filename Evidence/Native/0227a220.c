/* IL2CPP: Dino.BusSand.App.Iap$$PriceUsd
double Dino_BusSand_App_Iap__PriceUsd (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$PriceUsd
   double Dino_BusSand_App_Iap__PriceUsd (int32_t storeItemId, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Iap__PriceUsd_217a220(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uStack_28;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9b8fe & 1) == 0) {
                    /* catch() { ... } // from try @ 0227a19c with catch @ 0227a24c */
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04caa898);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9b8fe = 1;
  }
  puVar4 = PTR_DAT_04cad200;
  puVar3 = PTR_DAT_04cad1f8;
  puVar1 = PTR_DAT_04ca9c30;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_1,0);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,*(undefined8 *)puVar3,0);
  lVar6 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar5,*(undefined8 *)puVar1,0);
  if ((lVar6 != 0) &&
     (lVar6 = System_String__Replace_46d4a70
                        (lVar6,*(undefined8 *)PTR_DAT_04caa898,*(undefined8 *)puVar1,0),
     puVar2 = PTR_DAT_04caa370, lVar6 != 0)) {
                    /* try { // try from 0227a310 to 0237a40b has its CatchHandler @ 0227a310
                       catch() { ... } // from try @ 0227a310 with catch @ 0227a310
                       catch() { ... } // from try @ 0227a418 with catch @ 0227a310 */
    uVar5 = System_String__Trim_46d6ee0(lVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
    uVar8 = System_Double__TryParse_481811c(uVar5,0xa7,uVar7,&uStack_28,0);
    if ((uVar8 & 1) == 0) {
      uStack_28 = 0;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uStack_28;
    return auVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

