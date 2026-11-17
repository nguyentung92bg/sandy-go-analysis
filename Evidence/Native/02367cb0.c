/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$WinChestNeed
int32_t Dino_BusSand_App_Meta_Monetization__WinChestNeed (int32_t opened, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$WinChestNeed
   int32_t Dino_BusSand_App_Meta_Monetization__WinChestNeed (int32_t opened, const MethodInfo*
   method); */

int Dino_BusSand_App_Meta_Monetization__WinChestNeed_2267cb0(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_04cb4620;
  puVar4 = PTR_DAT_04cb1eb8;
  puVar3 = PTR_DAT_04cb1dd8;
  puVar2 = PTR_DAT_04caec70;
  if ((bRam0000000004f9c087 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb4620);
    FUN_02132f7c(PTR_DAT_04cb1dd8);
    FUN_02132f7c(PTR_DAT_04cb1e88);
    FUN_02132f7c(PTR_DAT_04cb1eb8);
    bRam0000000004f9c087 = 1;
  }
  uVar7 = FUN_02133068(*(undefined8 *)puVar2,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar5,0);
  lVar8 = Dino_BusSand_App_Meta_Monetization__RowInts_22663dc
                    (*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar7);
  if (lVar8 != 0) {
    if ((int)param_1 < (int)*(uint *)(lVar8 + 0x18)) {
      if (*(uint *)(lVar8 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      iVar6 = *(int *)(lVar8 + (long)(int)param_1 * 4 + 0x20);
      lVar8 = *(long *)PTR_DAT_04caa200;
      iVar1 = *(int *)(lVar8 + 0xe4);
    }
    else {
      iVar6 = Dino_BusSand_App_Meta_Monetization__RowInt_2266340
                        (*(undefined8 *)puVar4,*(undefined8 *)PTR_DAT_04cb1e88,10);
      lVar8 = *(long *)PTR_DAT_04caa200;
      iVar1 = *(int *)(lVar8 + 0xe4);
    }
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar8);
    }
    iVar1 = 1;
    if (0 < iVar6) {
      iVar1 = iVar6;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

