/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RevivePrices
System_Int32_array* Dino_BusSand_App_Meta_Monetization__get_RevivePrices (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RevivePrices
   System_Int32_array* Dino_BusSand_App_Meta_Monetization__get_RevivePrices (const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_Monetization__get_RevivePrices_22669d8(void)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar6 = PTR_DAT_04cb4610;
  puVar5 = PTR_DAT_04cb1fc8;
  puVar4 = PTR_DAT_04caec70;
  puVar3 = PTR_DAT_04cac740;
  if ((bRam0000000004f9c062 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb4610);
    FUN_02132f7c(PTR_DAT_04cb1fc8);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9c062 = 1;
  }
  lVar9 = FUN_02133068(*(undefined8 *)puVar4,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (lVar9,*(undefined8 *)puVar6,0);
  puVar4 = PTR_DAT_04cb1d58;
  uVar10 = *(undefined8 *)puVar3;
  uVar11 = *(undefined8 *)puVar5;
  if ((bRam0000000004f9c05e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    bRam0000000004f9c05e = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(uVar10,0);
  uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,uVar11,0);
  lVar8 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar10,0);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
    lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70);
    puVar3 = PTR_DAT_04cb15c0;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < *(int *)(lVar9 + 0x18)) {
      uVar12 = 0;
      do {
        uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar8,uVar12 & 0xffffffff,*(undefined8 *)puVar3);
        uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar1 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(lVar9 + lVar1 + 0x20) = uVar7;
      } while ((long)uVar12 < (long)(int)uVar2);
    }
  }
  return lVar9;
}

