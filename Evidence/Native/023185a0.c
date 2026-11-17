/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Price
void Dino_BusSand_App_Meta_GameTracking__Price (int32_t storeItemId, double* price, System_String_o** currency, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Price
   void Dino_BusSand_App_Meta_GameTracking__Price (int32_t storeItemId, double* price,
   System_String_o** currency, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__Price_22185a0
               (undefined4 param_1,double *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bd69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04caa848);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9bd69 = 1;
  }
  puVar5 = PTR_DAT_04cad2a8;
  puVar4 = PTR_DAT_04cad200;
  puVar3 = PTR_DAT_04cad1f0;
  puVar1 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_1,0);
  uVar6 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar6,*(undefined8 *)puVar5,0);
  uVar6 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar6,*(undefined8 *)puVar1,0);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
    lVar8 = *(long *)puVar3;
  }
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
  if (lVar9 != 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar8);
      lVar9 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    uVar7 = (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),uVar6,param_2,param_3,
                       *(undefined8 *)(lVar9 + 0x28));
    if ((((uVar7 & 1) != 0) && (0.0 < *param_2)) &&
       (uVar7 = System_String__IsNullOrEmpty_46d2084(*param_3,0), (uVar7 & 1) == 0)) {
      return;
    }
  }
  puVar2 = PTR_DAT_04caa848;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar10 = (double)Dino_BusSand_App_Iap__PriceUsd_217a220(param_1,0);
  uVar6 = *(undefined8 *)puVar2;
  *param_2 = dVar10;
  *param_3 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)param_3 >> 0xc & 0x3f),
                 ((ulong)param_3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

