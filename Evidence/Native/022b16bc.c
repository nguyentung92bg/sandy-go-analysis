/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$ToggleTip
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ToggleTip (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, int32_t s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$ToggleTip
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ToggleTip
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, int32_t s, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ToggleTip_21b16bc
               (undefined1 param_1 [16],float param_2,long param_3,int param_4,int param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int extraout_var;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  uint uStack_48;
  uint uStack_44;
  
  puVar2 = PTR_DAT_04ca9ae8;
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
  uVar11 = *(undefined8 *)(param_3 + 0x68);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(param_3 + 0x70) == param_4) {
    if ((*(long *)(param_3 + 0x68) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x68),0),
       lVar6 == 0)) goto LAB_022b1c80;
    uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
    puVar3 = PTR_DAT_04caec68;
    if ((uVar5 & 1) != 0) {
      if ((bRam0000000004f9ba8b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec68);
        bRam0000000004f9ba8b = 1;
      }
      lVar6 = *(long *)puVar3;
      lVar9 = *(long *)(param_3 + 0x68);
      *(undefined4 *)(param_3 + 0x70) = 0xffffffff;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9ba6c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9ba6c = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if ((lVar9 != 0) &&
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar6 != 0)) {
        uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
        if (lVar6 != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
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
  if (*(long *)(param_3 + 0x48) != 0) {
    System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
              (*(long *)(param_3 + 0x48),param_4,*(undefined8 *)PTR_DAT_04caf0a8);
    if ((*(long *)(param_3 + 0x40) != 0) &&
       (lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                          (*(long *)(param_3 + 0x40),0), lVar6 != 0)) {
      if (param_5 == 0) {
        lVar9 = *(long *)PTR_DAT_04ca9d18;
        lVar6 = *(long *)(lVar9 + 0x38);
        if (lVar6 == 0) {
          FUN_0216b4cc(lVar9);
          lVar6 = *(long *)(lVar9 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        plVar10 = (long *)**(long **)(lVar6 + 0xb8);
        puVar8 = (undefined8 *)PTR_DAT_04caf178;
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          puVar8 = (undefined8 *)PTR_DAT_04caf178;
        }
      }
      else if (param_5 == 1) {
        lVar9 = *(long *)PTR_DAT_04ca9d18;
        lVar6 = *(long *)(lVar9 + 0x38);
        if (lVar6 == 0) {
          FUN_0216b4cc(lVar9);
          lVar6 = *(long *)(lVar9 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        plVar10 = (long *)**(long **)(lVar6 + 0xb8);
        puVar8 = (undefined8 *)PTR_DAT_04caf180;
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          puVar8 = (undefined8 *)PTR_DAT_04caf180;
        }
      }
      else {
        cVar1 = *(char *)(lVar6 + 0x28);
        uVar4 = extraout_var - *(int *)(lVar6 + 0x10);
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        plVar10 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        if (cVar1 == '\0') {
          uStack_48 = uVar4;
          lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_48);
          if (plVar10 == (long *)0x0) goto LAB_022b1c80;
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
          goto LAB_022b1c88;
          if ((int)plVar10[3] == 0) goto LAB_022b1c84;
          plVar10[4] = lVar6;
          thunk_FUN_02134474(plVar10 + 4,lVar6);
          puVar8 = (undefined8 *)PTR_DAT_04caf198;
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar8 = (undefined8 *)PTR_DAT_04caf198;
          }
        }
        else {
          uStack_44 = uVar4;
          lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_44);
          if (plVar10 == (long *)0x0) goto LAB_022b1c80;
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
LAB_022b1c88:
            uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar11,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_022b1c84:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar10[4] = lVar6;
          thunk_FUN_02134474(plVar10 + 4,lVar6);
          puVar8 = (undefined8 *)PTR_DAT_04caf188;
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar8 = (undefined8 *)PTR_DAT_04caf188;
          }
        }
      }
      uVar11 = Dino_BusSand_App_Lang__Get_215f9c0(*puVar8,plVar10,0);
      uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)PTR_DAT_04caf020,0);
      puVar3 = PTR_DAT_04caec68;
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar7,uVar11);
      *(int *)(param_3 + 0x70) = param_4;
      if ((*(long *)(param_3 + 0x68) != 0) &&
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x68),0),
         lVar6 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0);
        if ((*(long *)(param_3 + 0x50) != 0) &&
           (lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_3 + 0x50),param_4,*(undefined8 *)PTR_DAT_04cad7c8),
           lVar6 != 0)) {
          UnityEngine_Transform__get_position_43d0e48(lVar6,0);
          if (*(long *)(param_3 + 0x68) != 0) {
            UnityEngine_Transform__set_position_43d0f1c(*(long *)(param_3 + 0x68),0);
            plVar10 = *(long **)(param_3 + 0x68);
            if (plVar10 == (long *)0x0) {
              plVar10 = (long *)0x0;
            }
            else if (*plVar10 != *(long *)PTR_DAT_04cabdb0) {
              plVar10 = (long *)0x0;
            }
            uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_3,*(undefined8 *)PTR_DAT_04caf190,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,1 < param_4);
            uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_3,*(undefined8 *)PTR_DAT_04caf168,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,param_4 < 2);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
            if ((uVar5 & 1) != 0) {
              if (plVar10 == (long *)0x0) goto LAB_022b1c80;
              fVar12 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar10,0);
              fVar13 = -150.0;
              if (1 < param_4) {
                fVar13 = 150.0;
              }
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                        (fVar12 + 0.0,fVar13 + param_2,plVar10,0);
            }
            uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_3,*(undefined8 *)PTR_DAT_04caf170,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar11,*(undefined8 *)PTR_DAT_04caf160);
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

