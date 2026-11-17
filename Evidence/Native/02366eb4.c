/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_WinMultipliers
System_Int32_array* Dino_BusSand_App_Meta_Monetization__get_WinMultipliers (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_WinMultipliers
   System_Int32_array* Dino_BusSand_App_Meta_Monetization__get_WinMultipliers (const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_Monetization__get_WinMultipliers_2266eb4(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c06b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cb4618);
    bRam0000000004f9c06b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded_2266b34();
  puVar2 = PTR_DAT_04cb4618;
  if (lVar4 == 0) {
LAB_02367004:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *(long *)(lVar4 + 0x28);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
    lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,5);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
              (lVar5,*(undefined8 *)puVar2,0);
  }
  else {
    lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70);
    puVar2 = PTR_DAT_04caa200;
    if (lVar5 == 0) goto LAB_02367004;
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar7 = 8;
      do {
        if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar7 - 8U) {
LAB_02367000:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar3 = *(undefined4 *)(lVar4 + lVar7 * 4);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = System_Math__Max_4830fc8(1,uVar3,0);
        uVar1 = *(uint *)(lVar5 + 0x18);
        if ((ulong)uVar1 <= lVar7 - 8U) goto LAB_02367000;
        lVar6 = lVar7 + -7;
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar3;
        lVar7 = lVar7 + 1;
      } while (lVar6 < (int)uVar1);
    }
  }
  return lVar5;
}

