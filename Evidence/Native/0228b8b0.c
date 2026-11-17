/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$RefreshIfPresent
void Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$RefreshIfPresent
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent (const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent_218b8b0
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  char cVar18;
  float fVar19;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_04cadc50;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b97b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadc50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b97b = 1;
  }
  uVar16 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar10 & 1) == 0) {
LAB_0228b954:
    uVar16 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
LAB_0228b9f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar16 = *(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x20) == 0)) goto LAB_0228b9f4;
    if (*(char *)(*(long *)(lVar11 + 0x20) + 0x2c) != '\0') {
      return;
    }
  }
  else {
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0228b9f4;
    uVar10 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0
                       (**(long **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar10 & 1) == 0) goto LAB_0228b954;
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar11 == 0) goto LAB_0228b9f4;
  }
  puVar1 = PTR_DAT_04cadca0;
  if ((bRam0000000004f9b97f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cadca8);
    FUN_02132f7c(PTR_DAT_04cadcb0);
    FUN_02132f7c(PTR_DAT_04cadcb8);
    FUN_02132f7c(PTR_DAT_04cadca0);
    FUN_02132f7c(PTR_DAT_04cadcc0);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cadcd0);
    FUN_02132f7c(PTR_DAT_04cadcd8);
    FUN_02132f7c(PTR_DAT_04cadce0);
    FUN_02132f7c(PTR_DAT_04cadce8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cadcf8);
    FUN_02132f7c(PTR_DAT_04cadd00);
    FUN_02132f7c(PTR_DAT_04cadd08);
    FUN_02132f7c(PTR_DAT_04cadd10);
    bRam0000000004f9b97f = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = lVar11;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),lVar11);
    lVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    plVar17 = (long *)(lVar6 + 0x18);
    *plVar17 = lVar7;
    thunk_FUN_02134474(plVar17,lVar7);
    if (*plVar17 == 0) {
      return;
    }
    lVar7 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_I_2226254(0);
    if (lVar7 == 0) {
      cVar18 = '\0';
    }
    else {
      cVar18 = *(char *)(lVar7 + 0x22);
    }
    lVar7 = *plVar17;
    uVar3 = Dino_BusSand_App_UI_BattleRoyaleHallButton__get_LockedShown_218bae8();
    if (lVar7 == 0) goto LAB_0228b89c;
    uVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowHallButton_2221b70
                      (lVar7,cVar18 != '\0',uVar3 & 1,0);
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
    if (lVar7 == 0) goto LAB_0228b89c;
    uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar7,0);
    if ((uVar3 & 1) != (uVar4 & 1)) {
      lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
      if (lVar7 == 0) goto LAB_0228b89c;
      UnityEngine_GameObject__SetActive_43c1408(lVar7,uVar3 & 1,0);
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar7 = UnityEngine_Component__get_transform_43bcd18(lVar11,0);
    if (lVar7 == 0) goto LAB_0228b89c;
    fVar19 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar7,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar1 = PTR_DAT_04caa208;
    pfVar12 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    if ((param_3 - pfVar12[2]) * (param_3 - pfVar12[2]) +
        (fVar19 - *pfVar12) * (fVar19 - *pfVar12) + (param_2 - pfVar12[1]) * (param_2 - pfVar12[1])
        < _UNK_00e1fea0) {
      lVar7 = UnityEngine_Component__get_transform_43bcd18(lVar11,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar7 == 0) goto LAB_0228b89c;
      lVar13 = *(long *)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                 *(undefined4 *)(lVar13 + 0x14),lVar7,0);
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar16 = *(undefined8 *)(lVar11 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if ((uVar10 & 1) != 0) {
      lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,7);
      if (lVar7 == 0) goto LAB_0228b89c;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_04cadcc0;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20));
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_04cadd08;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28));
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_04cadcd0;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30));
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_04cadce8;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38));
      if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_04cadcd8;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x40));
      if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)PTR_DAT_04cadd10;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x48));
      if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_0228b8a0;
      *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)PTR_DAT_04cadce0;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x50));
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar10 = 0;
        uVar14 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar14 <= uVar10) goto LAB_0228b8a0;
          if (*(long *)(lVar11 + 0x28) == 0) goto LAB_0228b89c;
          uVar16 = UnityEngine_Transform__Find_43d4bec
                             (*(long *)(lVar11 + 0x28),*(undefined8 *)(lVar7 + 0x20 + uVar10 * 8),0)
          ;
          Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar16,0,0);
          uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
    }
    Dino_BusSand_App_UI_BattleRoyaleHallButton__StopTimer_218bb60(lVar11);
    Dino_BusSand_App_UI_BattleRoyaleHallButton__UpdateSlider_218bba4(lVar11);
    uVar16 = *(undefined8 *)(lVar11 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    uVar16 = 0;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(lVar11 + 0x40) == 0) goto LAB_0228b89c;
      uVar16 = UnityEngine_Transform__Find_43d4bec
                         (*(long *)(lVar11 + 0x40),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
    puVar2 = PTR_DAT_04ca9d18;
    lVar13 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar13 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar13);
      lVar7 = *(long *)(lVar13 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                      (*(undefined8 *)PTR_DAT_04cadd00,**(undefined8 **)(lVar7 + 0xb8),0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar16,uVar8,0);
    uVar3 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
              (*(undefined8 *)(lVar11 + 0x30),(uVar3 ^ 0xffffffff) & 1,0);
    uVar16 = *(undefined8 *)(lVar11 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    uVar16 = 0;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(lVar11 + 0x30) == 0) goto LAB_0228b89c;
      uVar16 = UnityEngine_Transform__Find_43d4bec
                         (*(long *)(lVar11 + 0x30),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uStack_64 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(4,0);
    lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
    if (plVar9 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0)) {
        uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar16,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_0228b8a0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar9[4] = lVar7;
      thunk_FUN_02134474(plVar9 + 4,lVar7);
      uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                        (*(undefined8 *)PTR_DAT_04cadcf8,plVar9,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar16,uVar8,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                (*(undefined8 *)(lVar11 + 0x38),uVar3 & 1,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                (*(undefined8 *)(lVar11 + 0x40),uVar3 & 1,0);
      if ((uVar3 & 1) == 0) {
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar11 + 0x38),0,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar11 + 0x40),0,0);
        return;
      }
      if (*plVar17 != 0) {
        iVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_State_2221138(*plVar17,0);
        lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
        if (*plVar17 != 0) {
          uVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HaveHallCommand_221f168(*plVar17,0);
          if (((uVar10 & 1) == 0) || (iVar5 != 1)) {
            if (iVar5 - 4U < 2) {
              if (*plVar17 == 0) goto LAB_0228b89c;
              uVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp_222123c(*plVar17,0)
              ;
              if ((uVar10 & 1) != 0) {
                if ((*plVar17 != 0) && (lVar7 = *(long *)(*plVar17 + 0x10), lVar7 != 0)) {
                  lVar13 = *(long *)(lVar7 + 0x18);
                  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  puVar15 = (undefined8 *)PTR_DAT_04cadcb0;
                  goto LAB_0228b7ec;
                }
                goto LAB_0228b89c;
              }
            }
            else {
              if (iVar5 == 2) {
                uVar16 = FUN_01e782f0(*(undefined8 *)puVar2);
                uVar16 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                                   (*(undefined8 *)PTR_DAT_04cadcc8,uVar16,0);
                Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(lVar11,0,uVar16);
                lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
                if (lVar11 != 0) {
                  UnityEngine_GameObject__SetActive_43c1408(lVar11,0,0);
                  return;
                }
                goto LAB_0228b89c;
              }
              if (iVar5 != 0) {
                if ((*plVar17 == 0) || (lVar13 = *(long *)(*plVar17 + 0x10), lVar13 == 0))
                goto LAB_0228b89c;
                lVar13 = *(long *)(lVar13 + 0x30);
                if (lVar7 < lVar13) {
                  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  puVar15 = (undefined8 *)PTR_DAT_04cadcb8;
                  goto LAB_0228b7ec;
                }
              }
            }
            uVar8 = 1;
            uVar16 = 0;
          }
          else {
            if ((*plVar17 == 0) || (lVar13 = *(long *)(*plVar17 + 0x10), lVar13 == 0))
            goto LAB_0228b89c;
            lVar13 = *(long *)(lVar13 + 0x30);
            if (lVar7 < lVar13) {
              uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              puVar15 = (undefined8 *)PTR_DAT_04cadca8;
LAB_0228b7ec:
              System_Action___ctor_47b5ed0(uVar16,lVar6,*puVar15,0);
              Dino_BusSand_App_UI_BattleRoyaleHallButton__StartTimer_218bcf4(lVar11,lVar13,uVar16);
              return;
            }
            lVar7 = *(long *)puVar2;
            lVar6 = *(long *)(lVar7 + 0x38);
            if (lVar6 == 0) {
              FUN_0216b4cc(lVar7);
              lVar6 = *(long *)(lVar7 + 0x38);
            }
            lVar6 = *(long *)(lVar6 + 0x10);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0216b470();
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0216b470();
            }
            uVar16 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                               (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar6 + 0xb8),0);
            uVar8 = 0;
          }
          Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(lVar11,uVar8,uVar16);
          return;
        }
      }
    }
  }
LAB_0228b89c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

