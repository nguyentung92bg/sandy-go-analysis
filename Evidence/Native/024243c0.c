/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_6
System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_6 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_6
   System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_6
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_6_23243c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  ulong uStack_38;
  
  puVar2 = PTR_DAT_04cac668;
  if ((bRam0000000004f9c5cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04caf7b8);
                    /* try { // try from 024243f4 to 025243fb has its CatchHandler @ 02424550 */
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9c5cf = 1;
  }
  puVar1 = PTR_DAT_04caf7b8;
                    /* try { // try from 02424414 to 0252441b has its CatchHandler @ 0242453c */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02424424 to 02524437 has its CatchHandler @ 02424540 */
  lVar5 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar1);
  if ((lVar5 == 0) ||
     (lVar5 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(lVar5,0),
     puVar2 = PTR_DAT_04caf600, lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds_222127c(lVar5,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = (ulong)(int)uVar3;
  if ((bRam0000000004f9c42e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30,0);
    bRam0000000004f9c42e = 1;
  }
  if ((long)uVar6 < 1) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  uVar7 = 0;
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038,0);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
    bRam0000000004f9b7b7 = 1;
    uVar7 = extraout_x1;
  }
  puVar1 = PTR_DAT_04cab3a8;
  puVar2 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)uVar6 < 1) {
    return *(undefined8 *)PTR_DAT_04cab390;
  }
  if (0x2a2 < uVar6 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,uVar7);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar7 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar4 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar7 = System_String__Concat_46d30e8(uVar7,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0)
    ;
    return uVar7;
  }
  lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar2 = PTR_DAT_04cab398;
  uStack_38 = (ulong)uVar3 / 0xe10;
  uVar7 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar7;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar7);
      puVar1 = PTR_DAT_04cab388;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
        uStack_38 = (ulong)(uVar3 / 0x3c + ((uVar3 / 0x3c & 0xffff) / 0x3c) * -0x3c) & 0xffff;
        uVar7 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = uVar7;
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),uVar7);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)puVar1;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
            uStack_38 = (ulong)(uVar3 % 0x3c);
            uVar7 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar7;
              thunk_FUN_02134474();
              uVar7 = System_String__Concat_46d31f0(lVar5,0);
              return uVar7;
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

