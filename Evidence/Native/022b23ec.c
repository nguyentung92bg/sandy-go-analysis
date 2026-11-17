/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<>c__DisplayClass17_0$$<BuildList>b__0
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel___c__DisplayClass17_0___BuildList_b__0 (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<>c__DisplayClass17_0$$<BuildList>b__0
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel___c__DisplayClass17_0___BuildList_b__0
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel___c__DisplayClass17_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel___c__DisplayClass17_0___BuildList_b__0_21b23ec
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int extraout_var;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  uint uStack_48;
  uint auStack_44 [3];
  
  lVar13 = *(long *)(param_3 + 0x18);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = *(int *)(param_3 + 0x10);
  if ((bRam0000000004f9ba88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8,iVar2,0);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04caf0a8);
    FUN_02132f7c(PTR_DAT_04cae880);
    FUN_02132f7c(PTR_DAT_04caf138);
    FUN_02132f7c(PTR_DAT_04caf140);
    FUN_02132f7c(PTR_DAT_04caf148);
    FUN_02132f7c(PTR_DAT_04caf150);
    FUN_02132f7c(PTR_DAT_04caf0a0);
    bRam0000000004f9ba88 = 1;
  }
  if ((iVar2 < 0) || (*(char *)(lVar13 + 0x5d) != '\0')) {
    return;
  }
  if (*(long *)(lVar13 + 0x48) == 0) goto LAB_022b15cc;
  if (*(int *)(*(long *)(lVar13 + 0x48) + 0x18) <= iVar2) {
    return;
  }
  iVar7 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__StateOf_21b09d8(lVar13,iVar2);
  if (*(long *)(lVar13 + 0x40) == 0) goto LAB_022b15cc;
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*(long *)(lVar13 + 0x40),0);
  if (iVar7 == 1) {
    if (lVar9 == 0) goto LAB_022b15cc;
    if (*(char *)(lVar9 + 0x28) != '\0') {
      Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__HideTip_21b15d0(lVar13);
      if ((*(long *)(lVar13 + 0x38) != 0) && (*(long *)(lVar13 + 0x48) != 0)) {
        lVar9 = *(long *)(lVar13 + 0x40);
        uVar1 = *(undefined4 *)(*(long *)(lVar13 + 0x38) + 0x10);
        uVar10 = System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                           (*(long *)(lVar13 + 0x48),iVar2,*(undefined8 *)PTR_DAT_04caf0a8);
        if (lVar9 != 0) {
          iVar7 = Dino_BusSand_App_Meta_GiftPackFeature__ClaimGoldenStage_223cc74
                            (lVar9,uVar1,uVar10,0);
          if (iVar7 < 1) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae880,0);
          uVar10 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_21b1634
                             (lVar13,iVar2,iVar7);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar13,uVar10,0);
          Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshItem_21b0aac(lVar13,iVar2);
          if ((*(long *)(lVar13 + 0x50) != 0) &&
             (lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                (*(long *)(lVar13 + 0x50),iVar2,*(undefined8 *)PTR_DAT_04cad7c8),
             lVar9 != 0)) {
            uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caf150,0);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar10,*(undefined8 *)PTR_DAT_04caf0a0);
            if ((*(long *)(lVar13 + 0x38) != 0) && (*(long *)(lVar13 + 0x40) != 0)) {
              uVar11 = Dino_BusSand_App_Meta_GiftPackFeature__TryCloseGoldenPackIfAllClaimed_223db40
                                 (*(long *)(lVar13 + 0x40),
                                  *(undefined4 *)(*(long *)(lVar13 + 0x38) + 0x10),0);
              if ((uVar11 & 1) == 0) {
                return;
              }
              if (*(char *)(lVar13 + 0x5d) == '\0') {
                *(undefined1 *)(lVar13 + 0x5d) = 1;
                if (*(long *)(lVar13 + 0x38) == 0) {
                  lVar9 = 0;
                }
                else {
                  plVar8 = (long *)(*(long *)(lVar13 + 0x38) + 0x18);
                  lVar9 = *plVar8;
                  *plVar8 = 0;
                  thunk_FUN_02134474(plVar8,0);
                }
                Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar13,0);
                if ((*(long *)(lVar13 + 0x40) != 0) && (*(long *)(lVar13 + 0x38) != 0)) {
                  Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                            (*(long *)(lVar13 + 0x40),
                             *(undefined4 *)(*(long *)(lVar13 + 0x38) + 0x10),0);
                }
                if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022afb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                  return;
                }
              }
              return;
            }
          }
        }
      }
      goto LAB_022b15cc;
    }
LAB_022b1518:
    if ((*(long *)(lVar13 + 0x50) == 0) ||
       (lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(lVar13 + 0x50),iVar2,*(undefined8 *)PTR_DAT_04cad7c8),
       lVar9 == 0)) {
LAB_022b15cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caf140,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar10,*(undefined8 *)PTR_DAT_04caf138);
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04caf148,0);
  }
  else {
    if (lVar9 == 0) goto LAB_022b15cc;
    if (*(char *)(lVar9 + 0x28) == '\0') goto LAB_022b1518;
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04caf0a8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caf160);
    FUN_02132f7c(PTR_DAT_04caf168);
    FUN_02132f7c(PTR_DAT_04caf170);
    FUN_02132f7c(PTR_DAT_04caf020);
    FUN_02132f7c(PTR_DAT_04caf178);
    FUN_02132f7c(PTR_DAT_04caf180);
    FUN_02132f7c(PTR_DAT_04caf188);
    FUN_02132f7c(PTR_DAT_04caf190);
    FUN_02132f7c(PTR_DAT_04caf198);
    bRam0000000004f9ba8a = 1;
  }
  uVar10 = *(undefined8 *)(lVar13 + 0x68);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(int *)(lVar13 + 0x70) == iVar2) {
    if ((*(long *)(lVar13 + 0x68) == 0) ||
       (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar13 + 0x68),0),
       lVar9 == 0)) goto LAB_022b1c80;
    uVar11 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
    puVar5 = PTR_DAT_04caec68;
    if ((uVar11 & 1) != 0) {
      if ((bRam0000000004f9ba8b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec68);
        bRam0000000004f9ba8b = 1;
      }
      lVar9 = *(long *)puVar5;
      lVar15 = *(long *)(lVar13 + 0x68);
      *(undefined4 *)(lVar13 + 0x70) = 0xffffffff;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar4 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9ba6c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9ba6c = 1;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if ((lVar15 != 0) &&
         (lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar13 != 0)) {
        uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar13,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
        if (lVar13 != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar13 != 0) {
            lVar9 = *(long *)(lVar13 + 0x10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar13,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar9,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  if (*(long *)(lVar13 + 0x48) != 0) {
    System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
              (*(long *)(lVar13 + 0x48),iVar2,*(undefined8 *)PTR_DAT_04caf0a8);
    if ((*(long *)(lVar13 + 0x40) != 0) &&
       (lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                          (*(long *)(lVar13 + 0x40),0), lVar9 != 0)) {
      if (iVar7 == 0) {
        lVar15 = *(long *)PTR_DAT_04ca9d18;
        lVar9 = *(long *)(lVar15 + 0x38);
        if (lVar9 == 0) {
          FUN_0216b4cc(lVar15);
          lVar9 = *(long *)(lVar15 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        plVar8 = (long *)**(long **)(lVar9 + 0xb8);
        puVar14 = (undefined8 *)PTR_DAT_04caf178;
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          puVar14 = (undefined8 *)PTR_DAT_04caf178;
        }
      }
      else if (iVar7 == 1) {
        lVar15 = *(long *)PTR_DAT_04ca9d18;
        lVar9 = *(long *)(lVar15 + 0x38);
        if (lVar9 == 0) {
          FUN_0216b4cc(lVar15);
          lVar9 = *(long *)(lVar15 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        plVar8 = (long *)**(long **)(lVar9 + 0xb8);
        puVar14 = (undefined8 *)PTR_DAT_04caf180;
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          puVar14 = (undefined8 *)PTR_DAT_04caf180;
        }
      }
      else {
        cVar3 = *(char *)(lVar9 + 0x28);
        uVar6 = extraout_var - *(int *)(lVar9 + 0x10);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        if (cVar3 == '\0') {
          uStack_48 = uVar6;
          lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_48);
          if (plVar8 == (long *)0x0) goto LAB_022b1c80;
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
          goto LAB_022b1c88;
          if ((int)plVar8[3] == 0) goto LAB_022b1c84;
          plVar8[4] = lVar9;
          thunk_FUN_02134474(plVar8 + 4,lVar9);
          puVar14 = (undefined8 *)PTR_DAT_04caf198;
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar14 = (undefined8 *)PTR_DAT_04caf198;
          }
        }
        else {
          auStack_44[0] = uVar6;
          lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_44);
          if (plVar8 == (long *)0x0) goto LAB_022b1c80;
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
LAB_022b1c88:
            uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar10,0);
          }
          if ((int)plVar8[3] == 0) {
LAB_022b1c84:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar8[4] = lVar9;
          thunk_FUN_02134474(plVar8 + 4,lVar9);
          puVar14 = (undefined8 *)PTR_DAT_04caf188;
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar14 = (undefined8 *)PTR_DAT_04caf188;
          }
        }
      }
      uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*puVar14,plVar8,0);
      uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar13,*(undefined8 *)PTR_DAT_04caf020,0);
      puVar5 = PTR_DAT_04caec68;
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar12,uVar10);
      *(int *)(lVar13 + 0x70) = iVar2;
      if ((*(long *)(lVar13 + 0x68) != 0) &&
         (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar13 + 0x68),0),
         lVar9 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar9,1,0);
        if ((*(long *)(lVar13 + 0x50) != 0) &&
           (lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(lVar13 + 0x50),iVar2,*(undefined8 *)PTR_DAT_04cad7c8),
           lVar9 != 0)) {
          UnityEngine_Transform__get_position_43d0e48(lVar9,0);
          if (*(long *)(lVar13 + 0x68) != 0) {
            UnityEngine_Transform__set_position_43d0f1c(*(long *)(lVar13 + 0x68),0);
            plVar8 = *(long **)(lVar13 + 0x68);
            if (plVar8 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
              plVar8 = (long *)0x0;
            }
            uVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (lVar13,*(undefined8 *)PTR_DAT_04caf190,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,1 < iVar2);
            uVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (lVar13,*(undefined8 *)PTR_DAT_04caf168,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,iVar2 < 2);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
            if ((uVar11 & 1) != 0) {
              if (plVar8 == (long *)0x0) goto LAB_022b1c80;
              fVar16 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar8,0);
              fVar17 = -150.0;
              if (1 < iVar2) {
                fVar17 = 150.0;
              }
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                        (fVar16 + 0.0,fVar17 + param_2,plVar8,0);
            }
            uVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (lVar13,*(undefined8 *)PTR_DAT_04caf170,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar5);
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar10,*(undefined8 *)PTR_DAT_04caf160);
            return;
          }
        }
      }
    }
  }
LAB_022b1c80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

