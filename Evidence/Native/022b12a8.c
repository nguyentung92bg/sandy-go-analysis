/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnItemClick
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnItemClick (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnItemClick
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnItemClick
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnItemClick_21b12a8
               (undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int extraout_var;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  uint uStack_48;
  uint auStack_44 [3];
  
  if ((bRam0000000004f9ba88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
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
  if ((param_4 < 0) || (*(char *)(param_3 + 0x5d) != '\0')) {
    return;
  }
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_022b15cc;
  if (*(int *)(*(long *)(param_3 + 0x48) + 0x18) <= param_4) {
    return;
  }
  iVar6 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__StateOf_21b09d8(param_3,param_4);
  if (*(long *)(param_3 + 0x40) == 0) goto LAB_022b15cc;
  lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*(long *)(param_3 + 0x40),0);
  if (iVar6 == 1) {
    if (lVar8 == 0) goto LAB_022b15cc;
    if (*(char *)(lVar8 + 0x28) != '\0') {
      Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__HideTip_21b15d0(param_3);
      if ((*(long *)(param_3 + 0x38) != 0) && (*(long *)(param_3 + 0x48) != 0)) {
        lVar8 = *(long *)(param_3 + 0x40);
        uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x10);
        uVar9 = System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                          (*(long *)(param_3 + 0x48),param_4,*(undefined8 *)PTR_DAT_04caf0a8);
        if (lVar8 != 0) {
          iVar6 = Dino_BusSand_App_Meta_GiftPackFeature__ClaimGoldenStage_223cc74
                            (lVar8,uVar1,uVar9,0);
          if (iVar6 < 1) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae880,0);
          uVar9 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_21b1634
                            (param_3,param_4,iVar6);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_3,uVar9,0);
          Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshItem_21b0aac(param_3,param_4);
          if ((*(long *)(param_3 + 0x50) != 0) &&
             (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                                (*(long *)(param_3 + 0x50),param_4,*(undefined8 *)PTR_DAT_04cad7c8),
             lVar8 != 0)) {
            uVar9 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf150,0);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar9,*(undefined8 *)PTR_DAT_04caf0a0);
            if ((*(long *)(param_3 + 0x38) != 0) && (*(long *)(param_3 + 0x40) != 0)) {
              uVar10 = Dino_BusSand_App_Meta_GiftPackFeature__TryCloseGoldenPackIfAllClaimed_223db40
                                 (*(long *)(param_3 + 0x40),
                                  *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x10),0);
              if ((uVar10 & 1) == 0) {
                return;
              }
              if (*(char *)(param_3 + 0x5d) == '\0') {
                *(undefined1 *)(param_3 + 0x5d) = 1;
                if (*(long *)(param_3 + 0x38) == 0) {
                  lVar8 = 0;
                }
                else {
                  plVar7 = (long *)(*(long *)(param_3 + 0x38) + 0x18);
                  lVar8 = *plVar7;
                  *plVar7 = 0;
                  thunk_FUN_02134474(plVar7,0);
                }
                Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_3,0);
                if ((*(long *)(param_3 + 0x40) != 0) && (*(long *)(param_3 + 0x38) != 0)) {
                  Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                            (*(long *)(param_3 + 0x40),
                             *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x10),0);
                }
                if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022afb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
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
    if ((*(long *)(param_3 + 0x50) == 0) ||
       (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(param_3 + 0x50),param_4,*(undefined8 *)PTR_DAT_04cad7c8),
       lVar8 == 0)) {
LAB_022b15cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf140,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar9,*(undefined8 *)PTR_DAT_04caf138);
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04caf148,0);
  }
  else {
    if (lVar8 == 0) goto LAB_022b15cc;
    if (*(char *)(lVar8 + 0x28) == '\0') goto LAB_022b1518;
  }
  puVar3 = PTR_DAT_04ca9ae8;
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
  uVar9 = *(undefined8 *)(param_3 + 0x68);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  if (*(int *)(param_3 + 0x70) == param_4) {
    if ((*(long *)(param_3 + 0x68) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x68),0),
       lVar8 == 0)) goto LAB_022b1c80;
    uVar10 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
    puVar4 = PTR_DAT_04caec68;
    if ((uVar10 & 1) != 0) {
      if ((bRam0000000004f9ba8b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec68);
        bRam0000000004f9ba8b = 1;
      }
      lVar8 = *(long *)puVar4;
      lVar13 = *(long *)(param_3 + 0x68);
      *(undefined4 *)(param_3 + 0x70) = 0xffffffff;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9ba6c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9ba6c = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      if ((lVar13 != 0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar8 != 0)) {
        uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        if (lVar8 != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar8 != 0) {
            lVar13 = *(long *)(lVar8 + 0x10);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar13,0);
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
  if (*(long *)(param_3 + 0x48) != 0) {
    System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
              (*(long *)(param_3 + 0x48),param_4,*(undefined8 *)PTR_DAT_04caf0a8);
    if ((*(long *)(param_3 + 0x40) != 0) &&
       (lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                          (*(long *)(param_3 + 0x40),0), lVar8 != 0)) {
      if (iVar6 == 0) {
        lVar13 = *(long *)PTR_DAT_04ca9d18;
        lVar8 = *(long *)(lVar13 + 0x38);
        if (lVar8 == 0) {
          FUN_0216b4cc(lVar13);
          lVar8 = *(long *)(lVar13 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        plVar7 = (long *)**(long **)(lVar8 + 0xb8);
        puVar12 = (undefined8 *)PTR_DAT_04caf178;
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          puVar12 = (undefined8 *)PTR_DAT_04caf178;
        }
      }
      else if (iVar6 == 1) {
        lVar13 = *(long *)PTR_DAT_04ca9d18;
        lVar8 = *(long *)(lVar13 + 0x38);
        if (lVar8 == 0) {
          FUN_0216b4cc(lVar13);
          lVar8 = *(long *)(lVar13 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        plVar7 = (long *)**(long **)(lVar8 + 0xb8);
        puVar12 = (undefined8 *)PTR_DAT_04caf180;
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          puVar12 = (undefined8 *)PTR_DAT_04caf180;
        }
      }
      else {
        cVar2 = *(char *)(lVar8 + 0x28);
        uVar5 = extraout_var - *(int *)(lVar8 + 0x10);
        uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        if (cVar2 == '\0') {
          uStack_48 = uVar5;
          lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_48);
          if (plVar7 == (long *)0x0) goto LAB_022b1c80;
          if ((lVar8 != 0) &&
             (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
          goto LAB_022b1c88;
          if ((int)plVar7[3] == 0) goto LAB_022b1c84;
          plVar7[4] = lVar8;
          thunk_FUN_02134474(plVar7 + 4,lVar8);
          puVar12 = (undefined8 *)PTR_DAT_04caf198;
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar12 = (undefined8 *)PTR_DAT_04caf198;
          }
        }
        else {
          auStack_44[0] = uVar5;
          lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_44);
          if (plVar7 == (long *)0x0) goto LAB_022b1c80;
          if ((lVar8 != 0) &&
             (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0)) {
LAB_022b1c88:
            uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar9,0);
          }
          if ((int)plVar7[3] == 0) {
LAB_022b1c84:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar7[4] = lVar8;
          thunk_FUN_02134474(plVar7 + 4,lVar8);
          puVar12 = (undefined8 *)PTR_DAT_04caf188;
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar12 = (undefined8 *)PTR_DAT_04caf188;
          }
        }
      }
      uVar9 = Dino_BusSand_App_Lang__Get_215f9c0(*puVar12,plVar7,0);
      uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04caf020,0);
      puVar4 = PTR_DAT_04caec68;
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar9);
      *(int *)(param_3 + 0x70) = param_4;
      if ((*(long *)(param_3 + 0x68) != 0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x68),0),
         lVar8 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
        if ((*(long *)(param_3 + 0x50) != 0) &&
           (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_3 + 0x50),param_4,*(undefined8 *)PTR_DAT_04cad7c8),
           lVar8 != 0)) {
          UnityEngine_Transform__get_position_43d0e48(lVar8,0);
          if (*(long *)(param_3 + 0x68) != 0) {
            UnityEngine_Transform__set_position_43d0f1c(*(long *)(param_3 + 0x68),0);
            plVar7 = *(long **)(param_3 + 0x68);
            if (plVar7 == (long *)0x0) {
              plVar7 = (long *)0x0;
            }
            else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
              plVar7 = (long *)0x0;
            }
            uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                              (param_3,*(undefined8 *)PTR_DAT_04caf190,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar9,1 < param_4);
            uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                              (param_3,*(undefined8 *)PTR_DAT_04caf168,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar9,param_4 < 2);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
            if ((uVar10 & 1) != 0) {
              if (plVar7 == (long *)0x0) goto LAB_022b1c80;
              fVar14 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar7,0);
              fVar15 = -150.0;
              if (1 < param_4) {
                fVar15 = 150.0;
              }
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                        (fVar14 + 0.0,fVar15 + param_2,plVar7,0);
            }
            uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                              (param_3,*(undefined8 *)PTR_DAT_04caf170,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar9,*(undefined8 *)PTR_DAT_04caf160);
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

