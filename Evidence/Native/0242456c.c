/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_12
System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_12 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_12
   System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_12
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_12_232456c(void)

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
  
                    /* try { // try from 0242456c to 0252456f has its CatchHandler @ 02424590 */
                    /* try { // try from 02424570 to 02524593 has its CatchHandler @ 02424248 */
  if ((bRam0000000004f9c5d2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    bRam0000000004f9c5d2 = 1;
  }
                    /* catch() { ... } // from try @ 0242456c with catch @ 02424590 */
                    /* try { // try from 02424594 to 0252459b has its CatchHandler @ 024245a4 */
  lVar4 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_I_222fe5c(0);
  puVar2 = PTR_DAT_04caf600;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 0242459c to 025245a7 has its CatchHandler @ 02424248 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02424594 with catch @ 024245a4
                        */
  uVar5 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_SecondsLeft_2230528(lVar4,0);
                    /* try { // try from 024245b8 to 0252497f has its CatchHandler @ 024245b8
                       catch() { ... } // from try @ 024245b8 with catch @ 024245b8
                       catch() { ... } // from try @ 024249fc with catch @ 024245b8
                       catch() { ... } // from try @ 02424b30 with catch @ 024245b8
                       catch() { ... } // from try @ 02424b5c with catch @ 024245b8
                       catch() { ... } // from try @ 02424b88 with catch @ 024245b8 */
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

