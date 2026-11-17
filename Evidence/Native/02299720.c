/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$OnOpen
void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnOpen (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$OnOpen
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnOpen
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnOpen_2199720(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_04cae3b0;
  if ((bRam0000000004f9b9e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae3b8);
    FUN_02132f7c(PTR_DAT_04cae3c0);
    FUN_02132f7c(PTR_DAT_04cae3c8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022997a4 to 023997af has its CatchHandler @ 022997e0 */
    FUN_02132f7c(PTR_DAT_04cae3b0);
                    /* try { // try from 022997b0 to 023997fb has its CatchHandler @ 022996a8 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cae3d0);
    FUN_02132f7c(PTR_DAT_04cae3d8);
    FUN_02132f7c(PTR_DAT_04cae3e0);
                    /* catch() { ... } // from try @ 022997a4 with catch @ 022997e0 */
    FUN_02132f7c(PTR_DAT_04cae3e8);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cad460);
                    /* try { // try from 022997fc to 0239986f has its CatchHandler @ 022997fc
                       catch() { ... } // from try @ 022997fc with catch @ 022997fc
                       catch() { ... } // from try @ 0229987c with catch @ 022997fc */
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cae3f0);
    bRam0000000004f9b9e0 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_0229984c:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_0229984c;
  }
  puVar2 = PTR_DAT_04cae3c8;
  if (param_1 != 0) {
                    /* try { // try from 02299870 to 0239987b has its CatchHandler @ 022998ac */
    plVar17 = (long *)(param_1 + 0x38);
    *plVar17 = (long)param_2;
    thunk_FUN_02134474(plVar17,param_2);
                    /* try { // try from 0229987c to 023998c7 has its CatchHandler @ 022997fc */
    lVar10 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0();
    plVar18 = (long *)(param_1 + 0x40);
    *plVar18 = lVar10;
    thunk_FUN_02134474(plVar18,lVar10);
    uVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    lVar10 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 02299870 with catch @ 022998ac */
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar10);
      lVar10 = *(long *)puVar2;
    }
                    /* try { // try from 022998c8 to 023998eb has its CatchHandler @ 022998c8
                       catch() { ... } // from try @ 022998c8 with catch @ 022998c8
                       catch() { ... } // from try @ 022998f4 with catch @ 022998c8 */
    Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys_2199be4(uVar11,**(undefined8 **)(lVar10 + 0xb8));
    puVar3 = PTR_DAT_04cae3f0;
    puVar2 = PTR_DAT_04ca9c20;
    if (*plVar18 == 0) {
      return;
    }
    Dino_BusSand_App_UI_BattleRoyaleStartPanel__Refresh_2199d38(param_1);
                    /* try { // try from 022998ec to 023998f3 has its CatchHandler @ 02299918 */
                    /* try { // try from 022998f4 to 02399933 has its CatchHandler @ 022998c8 */
    uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
    plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 022998ec with catch @ 02299918 */
      uStack_54 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                            (*(long *)(param_1 + 0x40),0);
      lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
      if (plVar12 != (long *)0x0) {
        if ((lVar10 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
          uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,0);
        }
        puVar2 = PTR_DAT_04cae3e8;
        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar12[4] = lVar10;
        thunk_FUN_02134474(plVar12 + 4,lVar10);
        uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(*(undefined8 *)puVar2,plVar12);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar11,uVar14);
        puVar2 = PTR_DAT_04cabaf8;
        if (*plVar17 != 0) {
          if (*(char *)(*plVar17 + 0x10) != '\0') {
            if ((*plVar18 == 0) || (lVar10 = *(long *)(*plVar18 + 0x10), lVar10 == 0))
            goto LAB_02299b94;
            *(undefined1 *)(lVar10 + 0x78) = 0;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* catch() { ... } // from try @ 02299a24 with catch @ 022999dc */
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          }
          puVar9 = PTR_DAT_04cae3e0;
          puVar8 = PTR_DAT_04cae3c0;
          puVar7 = PTR_DAT_04cae3b8;
          puVar6 = PTR_DAT_04cadc30;
          puVar5 = PTR_DAT_04cad948;
          puVar4 = PTR_DAT_04cad460;
          puVar3 = PTR_DAT_04caa458;
          puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02299a18 to 02399a23 has its CatchHandler @ 02299a44 */
                    /* try { // try from 02299a24 to 02399a6f has its CatchHandler @ 022999dc */
          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)puVar7,0);
                    /* catch() { ... } // from try @ 02299a18 with catch @ 02299a44 */
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)puVar4,uVar11,1,*(undefined8 *)puVar5,0);
          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)puVar8,0);
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)puVar9,uVar11,1,*(undefined8 *)puVar5,0);
          lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
          if ((uVar15 & 1) != 0) {
            if (lVar10 == 0) goto LAB_02299b94;
            uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
            puVar2 = PTR_DAT_04cae3d8;
            lVar10 = *(long *)PTR_DAT_04cae3d8;
            if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02299bf8 with catch @ 02299af4 */
              thunk_FUN_0218fdac(lVar10);
              lVar10 = *(long *)puVar2;
            }
            puVar16 = *(undefined8 **)(lVar10 + 0xb8);
            lVar13 = puVar16[1];
            if (lVar13 == 0) {
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar10);
                puVar16 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
              }
              uVar14 = *puVar16;
              lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
              System_Action___ctor_47b5ed0(lVar13,uVar14,*(undefined8 *)PTR_DAT_04cae3d0,0);
              plVar17 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *plVar17 = lVar13;
              thunk_FUN_02134474(plVar17,lVar13);
            }
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,lVar13,0,0,0);
          }
                    /* try { // try from 02299b84 to 02399b8f has its CatchHandler @ 02299c38 */
          return;
        }
      }
    }
  }
LAB_02299b94:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

