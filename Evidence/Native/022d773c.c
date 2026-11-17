/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnFreeClick
void Dino_BusSand_App_UI_PassportPanel__OnFreeClick (Dino_BusSand_App_UI_PassportPanel_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023a8ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnFreeClick
   void Dino_BusSand_App_UI_PassportPanel__OnFreeClick (Dino_BusSand_App_UI_PassportPanel_o* __this,
   int32_t i, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__OnFreeClick_21d773c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  int *piVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if ((bRam0000000004f9bb60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0828);
    FUN_02132f7c(PTR_DAT_04cb0830);
    bRam0000000004f9bb60 = 1;
  }
  if ((*(char *)(param_4 + 0x49) != '\0') || (*(char *)(param_4 + 0x48) != '\0')) {
    return;
  }
  if (*(long *)(param_4 + 0x40) == 0) {
LAB_022d7880:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 022d77a0 to 023d7813 has its CatchHandler @ 022d7b14 */
  uVar5 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFree_2247144
                    (*(long *)(param_4 + 0x40),param_5,0);
  lVar6 = *(long *)(param_4 + 0x40);
  if ((uVar5 & 1) != 0) {
    if (lVar6 != 0) {
      uVar7 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(lVar6,param_5,0,0);
      if (*(long *)(param_4 + 0x40) != 0) {
        uVar5 = Dino_BusSand_App_Meta_PassportFeature__ClaimFree_2247974
                          (*(long *)(param_4 + 0x40),param_5,0);
        puVar1 = PTR_DAT_04cab1e8;
        if ((uVar5 & 1) == 0) {
          return;
        }
        if ((bRam0000000004f9bb65 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cab1e8);
          FUN_02132f7c(PTR_DAT_04caec68);
          FUN_02132f7c(PTR_DAT_04cad7c8);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cae880);
          FUN_02132f7c(PTR_DAT_04cb0728);
          FUN_02132f7c(PTR_DAT_04cb0738);
          FUN_02132f7c(PTR_DAT_04cb06d8);
          FUN_02132f7c(PTR_DAT_04cb0838);
          FUN_02132f7c(PTR_DAT_04cb0840);
          FUN_02132f7c(PTR_DAT_04cb0848);
          bRam0000000004f9bb65 = 1;
        }
        puVar2 = PTR_DAT_04cae880;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar2,0);
        if ((*(long *)(param_4 + 0x78) != 0) &&
           (lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_4 + 0x78),param_5,*(undefined8 *)PTR_DAT_04cad7c8),
           puVar1 = PTR_DAT_04ca9ae8, lVar6 != 0)) {
          lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cb0838,0);
          Dino_BusSand_App_UI_PassportPanel__RefreshStage_21d5994(param_4,param_5);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar2 = PTR_DAT_04caec68;
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar6 == 0) goto LAB_022d7b4c;
            uVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cb06d8,0);
            lVar13 = *(long *)puVar2;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar13);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar8,0,0);
            uVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cb0738,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar8,1,0);
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar8,*(undefined8 *)PTR_DAT_04cb0848,0);
            uVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cb0728,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar8,0,0);
          }
          plVar9 = (long *)Dino_BusSand_App_UI_PassportUi__FlyList_21d8358(uVar7);
          lVar13 = *(long *)puVar1;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar13);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar5 & 1) == 0) {
            lVar6 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
          }
          if (lVar6 != 0) {
            uVar17 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if ((bRam0000000004f9c298 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04caf5d8,0,0,0);
              FUN_02132f7c(PTR_DAT_04caf7a0);
              FUN_02132f7c(PTR_DAT_04caca60);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              bRam0000000004f9c298 = 1;
            }
            puVar1 = PTR_DAT_04ca9ae8;
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
            if ((plVar9 != (long *)0x0) && ((uVar5 & 1) == 0)) {
              lVar13 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04caf5d8) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_023a8e4c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
              iVar4 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if (iVar4 != 0) {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar6,0);
                if ((uVar5 & 1) != 0) {
                  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
                  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                            (uVar7,plVar9,*(undefined8 *)PTR_DAT_04caf7a0);
                  lVar13 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                                     (uVar17,param_2,param_3,lVar6,uVar7,0,0);
                  if (lVar13 == 0) {
                    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                    uVar8 = thunk_FUN_0216e89c();
                    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                    System_NullReferenceException___ctor_483267c(uVar8,uVar7,0);
                  }
                  else {
                    uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                    if ((uVar5 & 1) != 0) {
                      if ((bRam0000000004fa84ef & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf7890);
                        bRam0000000004fa84ef = 1;
                      }
                      if (lVar6 != 0) {
                        lVar16 = *(long *)(lVar6 + 0x10);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                    (lVar6,0);
                        }
                        if (pcRam0000000004fa8560 == (code *)0x0) {
                          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000004fa8560)(lVar16,lVar13);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                    uVar8 = thunk_FUN_0216e89c();
                    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                    System_ArgumentException___ctor_47b660c(uVar8,uVar7,0);
                  }
                  uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar8,uVar7);
                }
              }
            }
            return;
          }
        }
LAB_022d7b4c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    goto LAB_022d7880;
  }
  if (lVar6 == 0) goto LAB_022d7880;
  iVar4 = Dino_BusSand_App_Meta_PassportFeature__FreeBox_2245294(lVar6,param_5,0);
  lVar6 = *(long *)(param_4 + 0x40);
  if (iVar4 < 1) {
    if (lVar6 == 0) goto LAB_022d7880;
    uVar5 = Dino_BusSand_App_Meta_PassportFeature__IsFreeClaimed_2246fe4(lVar6,param_5,0);
    puVar1 = PTR_DAT_04caba50;
    puVar10 = (undefined8 *)PTR_DAT_04cb0828;
    if ((uVar5 & 1) == 0) {
      puVar10 = (undefined8 *)PTR_DAT_04cb0830;
    }
    uVar7 = *puVar10;
    if ((bRam0000000004f9bb5e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9d18);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04cab550);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04caa398);
      FUN_02132f7c(PTR_DAT_04ca9bc0);
      bRam0000000004f9bb5e = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar2 = PTR_DAT_04ca9ae8;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar2 = PTR_DAT_04ca9d18;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    lVar16 = *(long *)puVar2;
    lVar13 = *(long *)(lVar16 + 0x38);
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar13 == 0) {
      FUN_0216b4cc(lVar16);
      lVar13 = *(long *)(lVar16 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_0216b470();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cab550;
    lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_0216b470();
    }
    uVar8 = **(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar13 = Dino_BusSand_App_Lang__Get_215f9c0(uVar7,uVar8,0);
    if ((lVar13 == 0) ||
       (lVar13 = System_String__Replace_46d4a70
                           (lVar13,*(undefined8 *)PTR_DAT_04ca9bc0,*(undefined8 *)PTR_DAT_04caa398,0
                           ), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    if (lVar6 == 0) goto LAB_022d7880;
    Dino_BusSand_App_Meta_PassportFeature__FreeBox_2245294(lVar6,param_5,0);
    lVar13 = Dino_BusSand_App_UI_PassportPanel__BoxText_21d7b50();
    puVar1 = PTR_DAT_04caba50;
                    /* try { // try from 022d7840 to 023d788b has its CatchHandler @ 022d7b18 */
    if ((bRam0000000004f9bb62 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9bb62 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar2 = PTR_DAT_04ca9ae8;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = System_String__IsNullOrEmpty_46d2084(lVar13,0), (uVar5 & 1) != 0)) {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  puVar1 = PTR_DAT_04cabb08;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar13,0);
    bRam0000000004f9b87c = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar17 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar13,0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabb08);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cafbb8);
    FUN_02132f7c(PTR_DAT_04cb6578);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb64b8);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c314 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  puVar2 = PTR_DAT_04cabb08;
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04cabb08;
  lVar16 = *(long *)PTR_DAT_04ca9c30;
  if (lVar13 != 0) {
    lVar16 = lVar13;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar2;
  }
  **(long **)(lVar11 + 0xb8) = lVar16;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar16);
  uVar18 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar18;
  if (lVar6 == 0) goto LAB_023bd530;
  uVar7 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar6,4,0);
  plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar8 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
  if (plVar9 == (long *)0x0) goto LAB_023bd530;
  if ((lVar6 != 0) &&
     (lVar16 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar16 == 0)) {
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar9[4] = lVar6;
  thunk_FUN_02134474(plVar9 + 4,lVar6);
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar6,*(undefined8 *)PTR_DAT_04cb6578,plVar9,0);
  if ((lVar6 == 0) || (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0), lVar16 == 0)
     ) goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar16,uVar7,0,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
  if (plVar9 == (long *)0x0) goto LAB_023bd530;
  if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar9);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar17,plVar9,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar17,plVar9,0);
  puVar3 = PTR_DAT_04cad330;
  lVar16 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar3;
  }
  puVar14 = *(undefined4 **)(lVar16 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar14,puVar14[1],puVar14[2],puVar14[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar16 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar9,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar13,*(undefined8 *)PTR_DAT_04cad4a8,
                      &uStack_80,0x202,0);
  if (lVar16 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar16,1,0);
  fVar20 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar16,lVar13,0);
  fVar19 = 150.0;
  if (150.0 <= fVar20 + 70.0) {
    fVar19 = fVar20 + 70.0;
  }
  lVar13 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar16,0);
  if (lVar13 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar19 + -50.0,lVar13,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar19,plVar9,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fVar20 = 1.0;
  if (fVar19 / 241.0 <= 1.0) {
    fVar20 = fVar19 / 241.0;
  }
  lVar13 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                     (0x44660000,fVar19,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                      (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar20,plVar9,
                      *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar13 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar13,0);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    fVar19 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar2;
    }
    if (_UNK_00e200f8 < fVar19 - *(float *)(*(long *)(lVar13 + 0xb8) + 0x18)) goto LAB_023bd36c;
  }
  else {
LAB_023bd36c:
    puVar3 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar3;
    }
    if (**(long **)(lVar13 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar13 + 0xb8),0);
    }
  }
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar2;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10));
  }
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar2;
  }
  plVar12 = (long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  *plVar12 = lVar6;
  thunk_FUN_02134474(plVar12,lVar6);
  uVar17 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar4 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar17;
  if (iVar4 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar13 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar6,0);
  if (lVar13 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar13,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar9,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar9,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar6);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

