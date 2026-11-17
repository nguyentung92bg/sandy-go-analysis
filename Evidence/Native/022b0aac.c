/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$RefreshItem
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshItem (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$RefreshItem
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshItem
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshItem_21b0aac
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [12];
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auStack_70 [12];
  undefined4 uStack_58;
  int iStack_54;
  
  if ((bRam0000000004f9ba85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf0c0);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04caf0a8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caebf0);
    FUN_02132f7c(PTR_DAT_04caf0c8);
    FUN_02132f7c(PTR_DAT_04caf0d0);
    FUN_02132f7c(PTR_DAT_04caf0d8);
    FUN_02132f7c(PTR_DAT_04caf0e0);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04caf0e8);
    FUN_02132f7c(PTR_DAT_04caf0f0);
    FUN_02132f7c(PTR_DAT_04caf0f8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cacfb8);
    FUN_02132f7c(PTR_DAT_04caf100);
    FUN_02132f7c(PTR_DAT_04caf108);
    FUN_02132f7c(PTR_DAT_04caf110);
    FUN_02132f7c(PTR_DAT_04caf118);
    FUN_02132f7c(PTR_DAT_04caf120);
    FUN_02132f7c(PTR_DAT_04caf128);
    FUN_02132f7c(PTR_DAT_04caf130);
    FUN_02132f7c(PTR_DAT_04caf0a0);
    bRam0000000004f9ba85 = 1;
  }
  auStack_70._8_4_ = 0;
  auStack_70._0_8_ = 0;
  iStack_54 = 0;
  auVar2 = ZEXT812(0);
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                      (*(long *)(param_1 + 0x50),param_2,*(undefined8 *)PTR_DAT_04cad7c8);
    puVar3 = PTR_DAT_04ca9ae8;
    auVar2._8_4_ = auStack_70._8_4_;
    auVar2._0_8_ = auStack_70._0_8_;
    if (lVar8 != 0) {
      lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadc80,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
      auVar2._8_4_ = auStack_70._8_4_;
      auVar2._0_8_ = auStack_70._0_8_;
      if ((uVar9 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        auVar20 = System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                            (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_04caf0a8);
        auStack_70 = auVar20;
        uVar7 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__StateOf_21b09d8(param_1,param_2);
        auVar2 = auStack_70;
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar10 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                             (*(long *)(param_1 + 0x40),0);
          auVar2 = auStack_70;
          if (lVar8 != 0) {
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf120,0);
            puVar4 = PTR_DAT_04caec68;
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar7 != 1);
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf110,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar7 == 1);
            lVar12 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf128,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar12,uVar7 == 0);
            if (uVar7 == 0) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_GiftPackUi__Sample_21adb38
                        (lVar12,*(undefined8 *)PTR_DAT_04caf0a0,1);
              auVar2 = auStack_70;
              if (lVar12 == 0) goto LAB_022b1294;
              uVar11 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caf0e8,0)
              ;
              Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0);
            }
            uVar1 = uVar7 & 0xfffffffe;
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf0d0,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar1 == 2);
            if (uVar1 == 2) {
              plVar13 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
              uStack_58 = auVar20._4_4_;
              lVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_58);
              auVar2 = auStack_70;
              if (plVar13 == (long *)0x0) goto LAB_022b1294;
              if (lVar12 != 0) {
                lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar14 == 0) {
                  uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar11,0);
                }
              }
              if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar13[4] = lVar12;
              thunk_FUN_02134474(plVar13 + 4,lVar12);
              if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar15 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04caf0f0,plVar13,0)
              ;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15);
            }
            lVar12 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf118,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar12,uVar1 == 2);
            if (uVar1 == 2) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
              if ((uVar9 & 1) != 0) {
                auVar2 = auStack_70;
                if (lVar12 == 0) goto LAB_022b1294;
                plVar13 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                            (lVar12,*(undefined8 *)PTR_DAT_04caf0c0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar3);
                }
                uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
                if ((uVar9 & 1) != 0) {
                  auVar2 = auStack_70;
                  if (plVar13 == (long *)0x0) goto LAB_022b1294;
                  UnityEngine_UI_Slider__set_minValue_4695bc8(0,plVar13,0);
                  UnityEngine_UI_Slider__set_maxValue_4695c60(0x3f800000,plVar13,0);
                  fVar19 = 0.0;
                  if (0 < (int)auStack_70._4_4_) {
                    auVar2 = auStack_70;
                    if (lVar10 == 0) goto LAB_022b1294;
                    fVar17 = (float)*(int *)(lVar10 + 0x10) / (float)(int)auStack_70._4_4_;
                    fVar18 = 1.0;
                    if (fVar17 <= 1.0) {
                      fVar18 = fVar17;
                    }
                    fVar19 = 0.0;
                    if (0.0 <= fVar17) {
                      fVar19 = fVar18;
                    }
                  }
                  (**(code **)(*plVar13 + 0x428))(fVar19,plVar13,*(undefined8 *)(*plVar13 + 0x430));
                }
                uVar11 = UnityEngine_Transform__Find_43d4bec
                                   (lVar12,*(undefined8 *)PTR_DAT_04caebf0,0);
                auVar2 = auStack_70;
                if (lVar10 == 0) goto LAB_022b1294;
                iStack_54 = *(int *)(lVar10 + 0x10);
                if ((int)auStack_70._4_4_ <= *(int *)(lVar10 + 0x10)) {
                  iStack_54 = auStack_70._4_4_;
                }
                uVar15 = System_Int32__ToString_482d750(&iStack_54,0);
                uVar16 = System_Int32__ToString_482d750((ulong)auStack_70 | 4,0);
                uVar15 = System_String__Concat_46d2b84
                                   (uVar15,*(undefined8 *)PTR_DAT_04cabd10,uVar16,0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar4);
                }
                Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15);
              }
            }
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf0d8,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar7 == 1);
            lVar12 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf0e0,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
            if ((uVar9 & 1) != 0) {
              auVar2 = auStack_70;
              if (lVar12 == 0) goto LAB_022b1294;
              uVar11 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cacfb8,0)
              ;
              uVar5 = auStack_70._8_4_;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,(int)uVar5 < 1);
              uVar11 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caf130,0)
              ;
              Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0 < (int)auStack_70._8_4_);
              uVar11 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caf0f8,0)
              ;
              uVar15 = System_Int32__ToString_482d750(auStack_70 + 8,0);
              Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15);
              uVar11 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caf100,0)
              ;
              uVar15 = System_Int32__ToString_482d750(auStack_70 + 8,0);
              Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15);
            }
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04caf108,0);
            auVar2 = auStack_70;
            if (lVar10 != 0) {
              if (*(char *)(lVar10 + 0x28) == '\0') {
                bVar6 = true;
              }
              else {
                bVar6 = *(char *)(lVar10 + 0x41) != '\0';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,bVar6);
              if (bVar6 == false) {
                return;
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_GiftPackUi__Sample_21adb38
                        (uVar11,*(undefined8 *)PTR_DAT_04caf0c8,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_022b1294:
  auStack_70 = auVar2;
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

