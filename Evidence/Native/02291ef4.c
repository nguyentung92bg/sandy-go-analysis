/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Build
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__Build (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Build
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__Build
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__Build_2191ef4
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iStack_8c;
  undefined8 uStack_88;
  
  if ((bRam0000000004f9b9af & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cae120);
    FUN_02132f7c(PTR_DAT_04cae128);
    FUN_02132f7c(PTR_DAT_04cae130);
                    /* try { // try from 02291f7c to 02391f8f has its CatchHandler @ 02291fa4 */
    FUN_02132f7c(PTR_DAT_04cae138);
                    /* try { // try from 02291f90 to 02391fcf has its CatchHandler @ 02291bb4 */
    FUN_02132f7c(PTR_DAT_04cae140);
    FUN_02132f7c(PTR_DAT_04cae148);
                    /* catch() { ... } // from try @ 02291f7c with catch @ 02291fa4 */
    FUN_02132f7c(PTR_DAT_04cae150);
    FUN_02132f7c(PTR_DAT_04cadf98);
    FUN_02132f7c(PTR_DAT_04cae158);
    FUN_02132f7c(PTR_DAT_04cadfa0);
    FUN_02132f7c(PTR_DAT_04cae160);
    FUN_02132f7c(PTR_DAT_04cae168);
    FUN_02132f7c(PTR_DAT_04cae170);
    FUN_02132f7c(PTR_DAT_04cae178);
    bRam0000000004f9b9af = 1;
  }
  puVar6 = PTR_DAT_04cae170;
  puVar5 = PTR_DAT_04cae160;
  puVar3 = PTR_DAT_04cae128;
  puVar4 = PTR_DAT_04cabdb0;
  uStack_88 = 0;
  iStack_8c = 0;
  if (*(long *)(param_3 + 0x40) == 0) goto LAB_02292c20;
  uVar7 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                    (*(long *)(param_3 + 0x40),0);
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)puVar5,0);
  plVar23 = (long *)(param_3 + 0x50);
  *plVar23 = lVar8;
  thunk_FUN_02134474(plVar23,lVar8);
  plVar9 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else if (*plVar9 != *(long *)puVar4) {
    plVar9 = (long *)0x0;
  }
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)puVar6,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != *(long *)puVar4) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
  fVar24 = 0.0;
  if ((uVar11 & 1) != 0) {
    if (plVar9 == (long *)0x0) goto LAB_02292c20;
    fVar24 = param_2;
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar9,0);
    param_2 = fVar24;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
  fVar25 = 0.0;
  if ((uVar11 & 1) != 0) {
    if (plVar10 == (long *)0x0) goto LAB_02292c20;
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar10,0);
    fVar25 = param_2;
  }
  puVar6 = PTR_DAT_04cae158;
  puVar5 = PTR_DAT_04cae148;
  puVar4 = PTR_DAT_04cae120;
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04cae178,0);
  lVar12 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                     (param_3,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
  lVar13 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                     (param_3,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  if (cRam0000000004f9b9dd == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9dd = '\x01';
  }
  fVar26 = ((float)(int)uVar7 + -1.0) * 0.5;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = (uint)fVar26;
  uVar2 = 0;
  if ((float)(int)fVar26 != INFINITY) {
    uVar2 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar24 = fVar24 + fVar25;
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
    if ((uVar11 & 1) != 0) {
      if ((lVar8 == 0) ||
         (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar14 == 0))
      goto LAB_02292c20;
      UnityEngine_GameObject__SetActive_43c1408(lVar14,0,0);
      puVar5 = PTR_DAT_04cad6c0;
      puVar4 = PTR_DAT_04caa208;
      if (uVar2 != 0) {
        uVar18 = 0;
        do {
          uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
          if (lVar12 == 0) goto LAB_02292c20;
          uVar16 = UnityEngine_Component__get_transform_43bcd18(lVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          lVar14 = UnityEngine_Object__Instantiate_object__2805310
                             (uVar15,uVar16,0,*(undefined8 *)PTR_DAT_04cad390);
          if (((lVar14 == 0) ||
              (lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0), lVar14 == 0)) ||
             (lVar17 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar17 == 0))
          goto LAB_02292c20;
          UnityEngine_GameObject__SetActive_43c1408(lVar17,1,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b65e = '\x01';
          }
                    /* try { // try from 02292330 to 0239236f has its CatchHandler @ 02292330
                       catch() { ... } // from try @ 02292330 with catch @ 02292330
                       catch() { ... } // from try @ 0229237c with catch @ 02292330
                       catch() { ... } // from try @ 022923a8 with catch @ 02292330 */
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          UnityEngine_Transform__set_localScale_43d1be0
                    (*(undefined4 *)(lVar17 + 0xc),*(undefined4 *)(lVar17 + 0x10),
                     *(undefined4 *)(lVar17 + 0x14),lVar14,0);
          UnityEngine_Transform__SetSiblingIndex_43d4730(lVar14,uVar18,0);
          lVar17 = *(long *)(param_3 + 0x68);
          if (lVar17 == 0) goto LAB_02292c20;
          lVar19 = *(long *)(lVar17 + 0x10);
          lVar21 = *(long *)puVar5;
                    /* try { // try from 02292370 to 0239237b has its CatchHandler @ 022923ac */
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_02292c20;
          uVar1 = *(uint *)(lVar17 + 0x18);
                    /* try { // try from 0229237c to 0239239b has its CatchHandler @ 02292330 */
          if (uVar1 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar14;
                    /* try { // try from 0229239c to 023923a7 has its CatchHandler @ 022923a8 */
            thunk_FUN_02134474(plVar9,lVar14);
          }
          else {
                    /* catch() { ... } // from try @ 0229239c with catch @ 022923a8
                       try { // try from 022923a8 to 023923c7 has its CatchHandler @ 02292330 */
                    /* catch() { ... } // from try @ 02292370 with catch @ 022923ac */
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar17,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = uVar18 + 1;
                    /* try { // try from 022923c8 to 0239242f has its CatchHandler @ 022923c8
                       catch() { ... } // from try @ 022923c8 with catch @ 022923c8
                       catch() { ... } // from try @ 02292468 with catch @ 022923c8
                       catch() { ... } // from try @ 022924a0 with catch @ 022923c8
                       catch() { ... } // from try @ 022924e0 with catch @ 022923c8
                       catch() { ... } // from try @ 02292530 with catch @ 022923c8 */
          fVar24 = fVar24 + *(float *)(lVar12 + 0x6c);
        } while (uVar2 != uVar18);
      }
    }
  }
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04cae140,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  fVar25 = _UNK_00e2083c;
  if ((uVar11 & 1) != 0) {
    if (lVar13 == 0) goto LAB_02292c20;
    fVar25 = *(float *)(lVar13 + 0x6c);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar11 & 1) != 0) {
    if (lVar8 == 0) goto LAB_02292c20;
                    /* try { // try from 0229245c to 02392467 has its CatchHandler @ 02292558 */
                    /* try { // try from 02292468 to 02392493 has its CatchHandler @ 022923c8 */
    fVar25 = fVar25 * -0.5 + -240.0;
    if ((uVar7 & 0x80000001) != 1) {
      fVar25 = -240.0;
    }
    UnityEngine_Transform__set_localPosition_43cfda8(0,fVar25,0,lVar8,0);
                    /* try { // try from 02292494 to 0239249f has its CatchHandler @ 02292588 */
    UnityEngine_Transform__get_localPosition_43cfce8(lVar8,0);
    fVar24 = fVar24 + fVar25;
  }
                    /* try { // try from 022924a0 to 023924d3 has its CatchHandler @ 022923c8 */
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04cae168,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 022924d4 to 023924df has its CatchHandler @ 02292584 */
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
                    /* try { // try from 022924e0 to 0239250b has its CatchHandler @ 022923c8 */
  if ((uVar11 & 1) != 0) {
    if (lVar8 == 0) goto LAB_02292c20;
    UnityEngine_Transform__SetSiblingIndex_43d4730(lVar8,uVar2,0);
  }
  uVar15 = *(undefined8 *)(param_3 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0229250c to 02392517 has its CatchHandler @ 02292580 */
                    /* try { // try from 02292518 to 0239252f has its CatchHandler @ 02292554 */
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_02292c20;
    uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x48) + 0x20);
                    /* try { // try from 02292530 to 023925a3 has its CatchHandler @ 022923c8 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar11 & 1) != 0) {
                    /* catch() { ... } // from try @ 02292518 with catch @ 02292554 */
                    /* catch() { ... } // from try @ 0229245c with catch @ 02292558 */
      if ((*(long *)(param_3 + 0x48) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_3 + 0x48) + 0x20), lVar8 == 0)) goto LAB_02292c20;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0,fVar24,lVar8,0);
    }
  }
                    /* catch() { ... } // from try @ 02292430 with catch @ 02292570 */
                    /* catch() { ... } // from try @ 0229250c with catch @ 02292580 */
                    /* catch() { ... } // from try @ 022924d4 with catch @ 02292584 */
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04cae138,0);
                    /* catch() { ... } // from try @ 02292494 with catch @ 02292588 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 022925a4 to 023925f3 has its CatchHandler @ 022925a4
                       catch() { ... } // from try @ 022925a4 with catch @ 022925a4
                       catch() { ... } // from try @ 02292628 with catch @ 022925a4 */
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar11 & 1) != 0) {
    if ((lVar8 == 0) ||
       (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar12 == 0))
    goto LAB_02292c20;
    UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
                    /* try { // try from 022925f4 to 02392607 has its CatchHandler @ 02292640 */
  if ((uVar11 & 1) != 0) {
    lVar12 = *plVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                    /* try { // try from 0229261c to 02392627 has its CatchHandler @ 02292628 */
    if ((uVar11 & 1) != 0) {
                    /* catch() { ... } // from try @ 0229261c with catch @ 02292628
                       try { // try from 02292628 to 0239265b has its CatchHandler @ 022925a4 */
      uVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04cae130,0);
                    /* catch() { ... } // from try @ 022925f4 with catch @ 02292640 */
      lVar12 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__NewMen_21930bc(param_3,lVar8,uVar15);
      plVar9 = (long *)(param_3 + 0x78);
      *plVar9 = lVar12;
      thunk_FUN_02134474(plVar9,lVar12);
      lVar12 = *plVar9;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02292674 to 02392677 has its CatchHandler @ 022926b0 */
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
      if ((uVar11 & 1) != 0) {
        if (*plVar9 == 0) goto LAB_02292c20;
                    /* try { // try from 0229268c to 0239268f has its CatchHandler @ 022926ac */
        UnityEngine_Transform__SetSiblingIndex_43d4730(*plVar9,0,0);
        if (*(long *)(param_3 + 0x40) == 0) goto LAB_02292c20;
        lVar12 = *plVar9;
        uVar15 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                           (*(long *)(param_3 + 0x40),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0229268c with catch @ 022926ac
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02292674 with catch @ 022926b0
                        */
        Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenIndex_2193614
                  (uVar15,lVar12,0,0 < (int)uVar15);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      puVar4 = PTR_DAT_04cad6c0;
      if (((uVar11 & 1) != 0) && (0 < (int)(uVar7 - 1))) {
        if (lVar13 == 0) goto LAB_02292c20;
        iVar22 = 0;
        do {
          uVar15 = UnityEngine_Component__get_transform_43bcd18(lVar13,0);
          uVar15 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__NewMen_21930bc(param_3,lVar8,uVar15);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
          if ((uVar11 & 1) == 0) {
            lVar12 = *(long *)(param_3 + 0x70);
            if (lVar12 == 0) goto LAB_02292c20;
            lVar14 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)puVar4;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_02292c20;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              puVar20 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *puVar20 = uVar15;
              thunk_FUN_02134474(puVar20,uVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar12,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_3 + 0x40) == 0) goto LAB_02292c20;
            uVar16 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                               (*(long *)(param_3 + 0x40),0);
            Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenIndex_2193614
                      (uVar16,uVar15,iVar22 + 1,iVar22 + 1 < (int)uVar16);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 != uVar7 - 1);
      }
    }
  }
  lVar8 = *plVar23;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar11 & 1) != 0) {
    if ((*plVar23 == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*plVar23,0), lVar8 == 0))
    goto LAB_02292c20;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04cadfa0,0);
  plVar9 = (long *)(param_3 + 0x58);
  *plVar9 = lVar8;
  thunk_FUN_02134474(plVar9,lVar8);
  lVar8 = *plVar9;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  lVar8 = 0;
  if ((uVar11 & 1) != 0) {
    if (*plVar9 == 0) goto LAB_02292c20;
    lVar8 = UnityEngine_Transform__Find_43d4bec(*plVar9,*(undefined8 *)PTR_DAT_04cadf98,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar11 & 1) != 0) {
    if ((lVar8 == 0) ||
       (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar12 == 0)) {
LAB_02292c20:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
    puVar5 = PTR_DAT_04cadf98;
    puVar4 = PTR_DAT_04cad6c0;
    uStack_88 = CONCAT44(1,(int)uStack_88);
    do {
      lVar12 = *plVar9;
      uVar15 = System_Int32__ToString_482d750((long)&uStack_88 + 4,0);
      uVar15 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar15,0);
      if (lVar12 == 0) goto LAB_02292c20;
      uVar15 = UnityEngine_Transform__Find_43d4bec(lVar12,uVar15,0);
      uVar15 = Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead_219ccf8(lVar8,uVar15,0);
                    /* try { // try from 02292954 to 0239298b has its CatchHandler @ 02292954
                       catch() { ... } // from try @ 02292954 with catch @ 02292954
                       catch() { ... } // from try @ 022929a8 with catch @ 02292954 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)(param_3 + 0x80);
        if (lVar12 == 0) goto LAB_02292c20;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)puVar4;
                    /* try { // try from 0229298c to 023929a7 has its CatchHandler @ 022929c8 */
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_02292c20;
        uVar7 = *(uint *)(lVar12 + 0x18);
        if (uVar7 < *(uint *)(lVar13 + 0x18)) {
                    /* try { // try from 022929a8 to 023929db has its CatchHandler @ 02292954 */
          *(uint *)(lVar12 + 0x18) = uVar7 + 1;
          puVar20 = (undefined8 *)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
          *puVar20 = uVar15;
          thunk_FUN_02134474(puVar20,uVar15);
        }
        else {
                    /* catch() { ... } // from try @ 0229298c with catch @ 022929c8 */
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar12,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar22 = uStack_88._4_4_ + 1;
      uStack_88 = CONCAT44(iVar22,(int)uStack_88);
    } while (iVar22 < 9);
    uStack_88 = CONCAT44(iVar22,2);
    do {
      lVar12 = *plVar9;
      uVar15 = System_Int32__ToString_482d750(&uStack_88,0);
      uVar15 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar15,0);
      if (lVar12 == 0) goto LAB_02292c20;
      uVar15 = UnityEngine_Transform__Find_43d4bec(lVar12,uVar15,0);
      lVar12 = Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead_219ccf8(lVar8,uVar15,0);
                    /* try { // try from 02292a3c to 02392a6f has its CatchHandler @ 02292a3c
                       catch() { ... } // from try @ 02292a3c with catch @ 02292a3c
                       catch() { ... } // from try @ 02292a8c with catch @ 02292a3c */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
      if ((uVar11 & 1) == 0) {
        if (lVar12 == 0) goto LAB_02292c20;
                    /* try { // try from 02292a70 to 02392a8b has its CatchHandler @ 02292aa4 */
        UnityEngine_Transform__set_localPosition_43cfda8(0,0,0xbf800000,lVar12,0);
        lVar13 = *(long *)(param_3 + 0x80);
        if (lVar13 == 0) goto LAB_02292c20;
                    /* try { // try from 02292a8c to 02392ab7 has its CatchHandler @ 02292a3c */
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar17 = *(long *)puVar4;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_02292c20;
                    /* catch() { ... } // from try @ 02292a70 with catch @ 02292aa4 */
        uVar7 = *(uint *)(lVar13 + 0x18);
        if (uVar7 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar7 + 1;
          plVar23 = (long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
          *plVar23 = lVar12;
          thunk_FUN_02134474(plVar23,lVar12);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar13,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
      puVar6 = PTR_DAT_04cae150;
      iVar22 = (int)uStack_88 + 1;
      uStack_88 = CONCAT44(uStack_88._4_4_,iVar22);
    } while (iVar22 < 9);
    iStack_8c = 1;
    do {
      lVar12 = *plVar9;
                    /* try { // try from 02292b10 to 02392b33 has its CatchHandler @ 02292b10
                       catch() { ... } // from try @ 02292b10 with catch @ 02292b10
                       catch() { ... } // from try @ 02292b50 with catch @ 02292b10 */
      uVar15 = System_Int32__ToString_482d750(&iStack_8c,0);
      uVar15 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,uVar15,0);
      if (lVar12 == 0) goto LAB_02292c20;
                    /* try { // try from 02292b34 to 02392b4f has its CatchHandler @ 02292b6c */
      uVar15 = UnityEngine_Transform__Find_43d4bec(lVar12,uVar15,0);
                    /* try { // try from 02292b50 to 02392b7f has its CatchHandler @ 02292b10 */
      uVar15 = Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead_219ccf8(lVar8,uVar15,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
                    /* catch() { ... } // from try @ 02292b34 with catch @ 02292b6c */
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)(param_3 + 0x90);
        if (lVar12 == 0) goto LAB_02292c20;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_02292c20;
        uVar7 = *(uint *)(lVar12 + 0x18);
                    /* try { // try from 02292ba8 to 02392bd7 has its CatchHandler @ 02292ba8
                       catch() { ... } // from try @ 02292ba8 with catch @ 02292ba8
                       catch() { ... } // from try @ 02292bf4 with catch @ 02292ba8 */
        if (uVar7 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar7 + 1;
          puVar20 = (undefined8 *)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
          *puVar20 = uVar15;
          thunk_FUN_02134474(puVar20,uVar15);
        }
        else {
                    /* try { // try from 02292bd8 to 02392bf3 has its CatchHandler @ 02292c14 */
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar12,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      iStack_8c = iStack_8c + 1;
                    /* try { // try from 02292bf4 to 02392c27 has its CatchHandler @ 02292ba8 */
    } while (iStack_8c < 4);
  }
                    /* catch() { ... } // from try @ 02292bd8 with catch @ 02292c14 */
  return;
}

