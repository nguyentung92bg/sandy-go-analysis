/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_1
System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_1 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_1
   System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_1
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_1_2324278(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  int iVar7;
  ulong uStack_38;
  
  puVar2 = PTR_DAT_04caef48;
  if ((bRam0000000004f9c5cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9c5cc = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  puVar2 = PTR_DAT_04caf600;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(lVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  if ((bRam0000000004f9c42e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30,0);
    bRam0000000004f9c42e = 1;
  }
  if ((long)uVar5 < 1) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  uVar6 = 0;
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038,0);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
    bRam0000000004f9b7b7 = 1;
    uVar6 = extraout_x1;
  }
  puVar1 = PTR_DAT_04cab3a8;
  puVar2 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)uVar5 < 1) {
    return *(undefined8 *)PTR_DAT_04cab390;
  }
  if (0x2a2 < uVar5 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,uVar6);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar6 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar3 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar6 = System_String__Concat_46d30e8(uVar6,*(undefined8 *)puVar2,uVar3,*(undefined8 *)puVar1,0)
    ;
    return uVar6;
  }
  lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar2 = PTR_DAT_04cab398;
  uStack_38 = (uVar5 & 0xffffffff) / 0xe10;
  uVar6 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),uVar6);
      puVar1 = PTR_DAT_04cab388;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x28));
        iVar7 = (int)((uVar5 & 0xffffffff) / 0x3c);
        uStack_38 = (ulong)(iVar7 + (((uint)((uVar5 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) * -0x3c)
                    & 0xffff;
        uVar6 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),uVar6);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)puVar1;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x38));
            uStack_38 = (ulong)(uint)((int)uVar5 + iVar7 * -0x3c);
            uVar6 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = uVar6;
              thunk_FUN_02134474();
              uVar6 = System_String__Concat_46d31f0(lVar4,0);
              return uVar6;
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

