/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_16
System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_16 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_16
   System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_16
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_16_2324650(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  int iVar9;
  ulong uStack_38;
  
  if ((bRam0000000004f9c5d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    bRam0000000004f9c5d4 = 1;
  }
  lVar5 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  lVar6 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  if ((lVar6 == 0) ||
     (uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar6,0),
     puVar2 = PTR_DAT_04caf600, lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(lVar5,uVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  if ((bRam0000000004f9c42e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30,0);
    bRam0000000004f9c42e = 1;
  }
  if ((long)uVar7 < 1) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  uVar8 = 0;
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038,0);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
    bRam0000000004f9b7b7 = 1;
    uVar8 = extraout_x1;
  }
  puVar1 = PTR_DAT_04cab3a8;
  puVar2 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)uVar7 < 1) {
    return *(undefined8 *)PTR_DAT_04cab390;
  }
  if (0x2a2 < uVar7 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,uVar8);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar8 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar4 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar8 = System_String__Concat_46d30e8(uVar8,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0)
    ;
    return uVar8;
  }
  lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar2 = PTR_DAT_04cab398;
  uStack_38 = (uVar7 & 0xffffffff) / 0xe10;
  uVar8 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar8);
      puVar1 = PTR_DAT_04cab388;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
        iVar9 = (int)((uVar7 & 0xffffffff) / 0x3c);
        uStack_38 = (ulong)(iVar9 + (((uint)((uVar7 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) * -0x3c)
                    & 0xffff;
        uVar8 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),uVar8);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)puVar1;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
            uStack_38 = (ulong)(uint)((int)uVar7 + iVar9 * -0x3c);
            uVar8 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar8;
              thunk_FUN_02134474();
              uVar8 = System_String__Concat_46d31f0(lVar5,0);
              return uVar8;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

