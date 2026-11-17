/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<StartAnim>d__51$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerPanel__StartAnim_d__51__MoveNext (Dino_BusSand_App_UI_ClimbTowerPanel__StartAnim_d__51_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<StartAnim>d__51$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerPanel__StartAnim_d__51__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerPanel__StartAnim_d__51_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_ClimbTowerPanel__StartAnim_d__51__MoveNext_21a6ce8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9ba48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cae8d0);
    FUN_02132f7c(PTR_DAT_04cae8d8);
    FUN_02132f7c(PTR_DAT_04cae8e0);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cae8e8);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caeb38);
    FUN_02132f7c(PTR_DAT_04caeb40);
    bRam0000000004f9ba48 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (iVar6 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar11 == 0) goto LAB_022a737c;
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar11 != 0) {
        *(undefined1 *)(lVar11 + 0xb4) = 1;
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_022a737c;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x38) == 0)) goto LAB_022a737c;
    uVar5 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_Cur_22296c8(*(long *)(lVar11 + 0x38),0);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
    iVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_Last_2229720(*(long *)(lVar11 + 0x38),0);
    *(int *)(param_1 + 0x2c) = iVar6;
    if (*(int *)(param_1 + 0x28) < iVar6) {
      if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
      uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__DeclinePlayed_2229c58
                        (*(long *)(lVar11 + 0x38),0);
      if ((uVar8 & 1) != 0) {
        uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838
                          (lVar11,*(undefined4 *)(param_1 + 0x28));
        if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
        uVar17 = *(undefined4 *)(param_1 + 0x28);
        uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                          (*(long *)(lVar11 + 0x38),uVar17,0);
        Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress_21a62c4(uVar5,lVar11,uVar17,uVar7 & 1);
        uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__ScrollIndexFor_21a6120
                          (lVar11,*(undefined4 *)(param_1 + 0x28));
        Dino_BusSand_App_UI_ClimbTowerPanel__ScrollYFor_21a5fb4(lVar11,uVar5);
        Dino_BusSand_App_UI_ClimbTowerPanel__SetScroll_21a6078(lVar11);
        if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
        Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast_222b058(*(long *)(lVar11 + 0x38),0);
        goto LAB_022a72b0;
      }
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838(lVar11,iVar6);
    if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
    uVar17 = *(undefined4 *)(param_1 + 0x2c);
    uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                      (*(long *)(lVar11 + 0x38),uVar17,0);
    Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress_21a62c4(uVar5,lVar11,uVar17,uVar7 & 1);
    uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__ScrollIndexFor_21a6120
                      (lVar11,*(undefined4 *)(param_1 + 0x2c));
    Dino_BusSand_App_UI_ClimbTowerPanel__ScrollYFor_21a5fb4(lVar11,uVar5);
    Dino_BusSand_App_UI_ClimbTowerPanel__SetScroll_21a6078(lVar11);
    if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x28)) goto LAB_022a72b0;
    if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__RisePointsBetween_222a2b0();
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar9);
    uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838
                      (lVar11,*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838
                      (lVar11,*(undefined4 *)(param_1 + 0x28));
    puVar2 = PTR_DAT_04ca9ae8;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    uVar9 = *(undefined8 *)(lVar11 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    uVar5 = 0;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar11 + 0x48) == 0) goto LAB_022a737c;
      uVar5 = 0;
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(lVar11 + 0x48),0);
    }
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__ScrollIndexFor_21a6120
                      (lVar11,*(undefined4 *)(param_1 + 0x28));
    uVar5 = Dino_BusSand_App_UI_ClimbTowerPanel__ScrollYFor_21a5fb4(lVar11,uVar5);
    puVar2 = PTR_DAT_04caeb40;
    puVar1 = (undefined8 *)PTR_DAT_04caeb38;
    lVar10 = *(long *)PTR_DAT_04cab1e8;
    *(undefined4 *)(param_1 + 0x44) = uVar5;
    if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x2c)) {
      puVar1 = (undefined8 *)puVar2;
    }
    uVar9 = *puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,uVar9,0);
    lVar10 = *(long *)(lVar11 + 0x38);
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
      if (lVar10 == 0) goto LAB_022a737c;
      Dino_BusSand_App_Meta_ClimbTowerFeature__RecordDecline_222b200(lVar10,0);
    }
    else {
      if (lVar10 == 0) goto LAB_022a737c;
      Dino_BusSand_App_Meta_ClimbTowerFeature__ForceRecordRise_222b34c(lVar10,0);
    }
    if (*(long *)(lVar11 + 0x38) == 0) goto LAB_022a737c;
    Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast_222b058(*(long *)(lVar11 + 0x38),0);
    uVar5 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(undefined4 *)(param_1 + 0x48) = uVar5;
    *(undefined4 *)(param_1 + 0x4c) = 0x400ccccd;
  }
  if ((*(char *)(lVar11 + 0x2c) != '\0') ||
     (fVar12 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     *(float *)(param_1 + 0x4c) <= fVar12 - *(float *)(param_1 + 0x48))) {
    if (*(long *)(lVar11 + 0x38) != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x28);
      uVar17 = *(undefined4 *)(param_1 + 0x3c);
      uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                        (*(long *)(lVar11 + 0x38),uVar5,0);
      if ((uVar8 & 1) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(param_1 + 0x28) != 0;
      }
      Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress_21a62c4(uVar17,lVar11,uVar5,bVar4);
      if (*(long *)(lVar11 + 0x90) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_88,*(long *)(lVar11 + 0x90),*(undefined8 *)PTR_DAT_04cae8e8);
        puVar3 = PTR_DAT_04cae8d8;
        puVar2 = PTR_DAT_04cad860;
        puStack_68 = puStack_80;
        uStack_70 = uStack_88;
        lStack_60 = lStack_78;
        uStack_88 = 0;
        puStack_80 = &uStack_70;
        while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_70,*(undefined8 *)puVar3), lVar10 = lStack_60,
              (uVar8 & 1) != 0) {
          if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar8 = System_Collections_Generic_List_int___Contains_3a2c3ec
                            (*(long *)(param_1 + 0x30),*(undefined4 *)(lStack_60 + 0x34),
                             *(undefined8 *)puVar2);
          if ((uVar8 & 1) != 0) {
            Dino_BusSand_App_UI_ClimbTowerItemView__PlayReachAnim_21a33a8
                      (lVar10,*(undefined4 *)(lVar10 + 0x34));
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)PTR_DAT_04cae8d0);
LAB_022a72b0:
        Dino_BusSand_App_UI_ClimbTowerPanel__Finish_21a6508(lVar11);
        return 0;
      }
    }
  }
  else {
    fVar13 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    fVar13 = fVar13 - *(float *)(param_1 + 0x48);
    fVar14 = (fVar13 + _UNK_00e201f8) / _UNK_00e205ec;
    fVar12 = 1.0;
    if (fVar14 <= 1.0) {
      fVar12 = fVar14;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar14) {
      fVar15 = fVar12;
    }
    fVar14 = 1.0 - (1.0 - fVar15) * (1.0 - fVar15);
    fVar12 = 1.0;
    if (fVar14 <= 1.0) {
      fVar12 = fVar14;
    }
    fVar16 = 0.0;
    if (0.0 <= fVar14) {
      fVar16 = fVar12;
    }
    lVar10 = 0x2c;
    if (1.0 <= fVar15) {
      lVar10 = 0x28;
    }
    fVar12 = *(float *)(param_1 + 0x38) +
             (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38)) * fVar16;
    Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress_21a62c4
              (fVar12,lVar11,*(undefined4 *)(param_1 + lVar10),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x18)) {
        if (*(long *)(lVar11 + 0x90) == 0) goto LAB_022a737c;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_88,*(long *)(lVar11 + 0x90),*(undefined8 *)PTR_DAT_04cae8e8);
        puVar3 = PTR_DAT_04cae8d8;
        puVar2 = PTR_DAT_04cad860;
        puStack_68 = puStack_80;
        uStack_70 = uStack_88;
        lStack_60 = lStack_78;
        uStack_88 = 0;
        puStack_80 = &uStack_70;
        while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_70,*(undefined8 *)puVar3), lVar10 = lStack_60,
              (uVar8 & 1) != 0) {
          if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar8 = System_Collections_Generic_List_int___Contains_3a2c3ec
                            (*(long *)(param_1 + 0x30),*(undefined4 *)(lStack_60 + 0x34),
                             *(undefined8 *)puVar2);
          if (((uVar8 & 1) != 0) &&
             (fVar14 = (float)Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838
                                        (lVar11,*(undefined4 *)(lVar10 + 0x34)),
             fVar14 + -80.0 <= fVar12)) {
            Dino_BusSand_App_UI_ClimbTowerItemView__PlayReachAnim_21a33a8
                      (lVar10,*(undefined4 *)(lVar10 + 0x34));
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)PTR_DAT_04cae8d0);
      }
      fVar14 = (fVar13 + _UNK_00e200a8) / _UNK_00e200f8;
      fVar13 = 1.0;
      fVar12 = fVar13;
      if (fVar14 <= 1.0) {
        fVar12 = fVar14;
      }
      fVar15 = fVar13;
      if (0.0 <= fVar14) {
        fVar15 = 1.0 - fVar12;
      }
      fVar12 = 1.0 - fVar15 * fVar15;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar12) {
        fVar14 = fVar13;
      }
      Dino_BusSand_App_UI_ClimbTowerPanel__SetScroll_21a6078
                (*(float *)(param_1 + 0x40) +
                 fVar14 * (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40)),lVar11);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_022a737c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

