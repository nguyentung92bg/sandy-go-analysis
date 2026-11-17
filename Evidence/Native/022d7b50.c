/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BoxText
System_String_o* Dino_BusSand_App_UI_PassportPanel__BoxText (int32_t box, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BoxText
   System_String_o* Dino_BusSand_App_UI_PassportPanel__BoxText (int32_t box, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PassportPanel__BoxText_21d7b50(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_04caef48;
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04cab740;
                    /* try { // try from 022d7b5c to 023d7bb3 has its CatchHandler @ 022d7b5c
                       catch() { ... } // from try @ 022d7b5c with catch @ 022d7b5c
                       catch() { ... } // from try @ 022d7fe4 with catch @ 022d7b5c */
  if ((bRam0000000004f9bb63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
                    /* try { // try from 022d7bb4 to 023d7bc7 has its CatchHandler @ 022d8048 */
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caf650);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04cb0850);
                    /* try { // try from 022d7c38 to 023d7c7f has its CatchHandler @ 022d8054 */
    FUN_02132f7c(PTR_DAT_04cab348);
    bRam0000000004f9bb63 = 1;
  }
  uStack_70 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar11 = Dino_BusSand_App_Meta_PassportFeature__BoxRewards_2245344(param_1,0);
  puVar8 = PTR_DAT_04cb0850;
  puVar7 = PTR_DAT_04caf640;
  puVar6 = PTR_DAT_04cac7b8;
  puVar5 = PTR_DAT_04cab718;
  puVar4 = PTR_DAT_04cab550;
  puVar3 = PTR_DAT_04cab348;
  puVar2 = PTR_DAT_04ca9d18;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
            (&uStack_d8,lVar11,*(undefined8 *)PTR_DAT_04caf650);
  uStack_90 = uStack_d8;
                    /* try { // try from 022d7cdc to 023d7d4f has its CatchHandler @ 022d8050 */
  uStack_d8 = 0;
  uStack_88 = puStack_d0;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_70 = uStack_b8;
  puStack_d0 = &uStack_90;
  while( true ) {
    uVar12 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                       (&uStack_90,*(undefined8 *)puVar7);
    uVar9 = uStack_80;
    if ((uVar12 & 1) == 0) {
                    /* try { // try from 022d7e54 to 023d7fe3 has its CatchHandler @ 022d804c */
      System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
                (&uStack_90,*(undefined8 *)PTR_DAT_04caf638);
      System_String__Join_46d39a4(*(undefined8 *)PTR_DAT_04caa398,lVar10,0);
      return;
    }
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_b0._0_4_ = (int)uStack_80;
    uStack_a0 = uStack_70;
    uStack_b0 = uVar9;
    if ((int)uStack_b0 == 0x3e9) {
      lVar14 = *(long *)puVar2;
      lVar11 = *(long *)(lVar14 + 0x38);
      if (lVar11 == 0) {
        FUN_0216b4cc(lVar14);
        lVar11 = *(long *)(lVar14 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
                    /* try { // try from 022d7d7c to 023d7dc7 has its CatchHandler @ 022d8054 */
      uVar15 = **(undefined8 **)(lVar11 + 0xb8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar15 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar8,uVar15,0);
    }
    else {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = Dino_BusSand_App_UI_CommerceUi__ItemName_22ab1c8(uVar9 & 0xffffffff,0);
    }
    uVar13 = System_Int64__ToString_482e7e4(&uStack_a8,0);
    uVar15 = System_String__Concat_46d2b84(uVar15,*(undefined8 *)puVar3,uVar13,0);
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)puVar5;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar10,uVar15,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

