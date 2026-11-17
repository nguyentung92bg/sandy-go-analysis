/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnItemChanged
void Dino_BusSand_App_UI_MainHudPanel__OnItemChanged (Dino_BusSand_App_UI_MainHudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnItemChanged
   void Dino_BusSand_App_UI_MainHudPanel__OnItemChanged (Dino_BusSand_App_UI_MainHudPanel_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__OnItemChanged_22fc6c4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  
  if ((bRam0000000004f9c4a5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c4a5 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 != 0x3ea) {
    if ((param_2 != 0x3e9) || (*(char *)(param_1 + 0x58) != '\0')) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
    plVar12 = (long *)(param_1 + 0x60);
    if (*plVar12 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar12,0);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    thunk_FUN_02134474(plVar12,0);
    if ((*(long *)(param_1 + 0x50) != lVar8) &&
       (uVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar9 & 1) != 0))
    {
      uVar10 = Dino_BusSand_App_UI_MainHudPanel__CountCoins_22fc910
                         (0x3f000000,param_1,*(undefined8 *)(param_1 + 0x50),lVar8);
      uVar10 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar10,0);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)plVar12 >> 0xc & 0x3f),
                     ((ulong)plVar12 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9c4a7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cae520);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c4a7 = 1;
    }
    lVar6 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x50) = lVar8;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    plVar12 = *(long **)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM_22fc804(lVar8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Could not recover jumptable at 0x023fbb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x518))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x520));
    return;
  }
  if ((bRam0000000004f9c4ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb7a88);
    FUN_02132f7c(PTR_DAT_04cb7a90);
    FUN_02132f7c(PTR_DAT_04cb7a98);
    FUN_02132f7c(PTR_DAT_04cb7aa0);
    FUN_02132f7c(PTR_DAT_04cb7aa8);
    FUN_02132f7c(PTR_DAT_04cb7ab0);
    bRam0000000004f9c4ac = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cae520;
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
  uVar4 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
    uVar14 = (uint)(iVar5 <= iVar3);
    uVar11 = uVar14;
  }
  else {
    uVar14 = 0;
    uVar11 = 2;
  }
  lVar8 = *(long *)puVar2;
  *(uint *)(param_1 + 0x70) = uVar11;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM_22fc804((long)iVar3);
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar7 = UnityEngine_Transform__Find_43d4bec
                      (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7a90,0);
    Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar7,uVar10);
    if (*(long *)(param_1 + 0x68) != 0) {
      uVar7 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7a88,0);
      Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar7,uVar10);
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar10 = UnityEngine_Transform__Find_43d4bec
                           (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7aa8,0);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
        iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
        }
        iVar3 = System_Math__Max_4830fc8(0,iVar5 - iVar3,0);
        uVar7 = Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM_22fc804((long)iVar3);
        Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar10,uVar7);
        if (*(long *)(param_1 + 0x68) != 0) {
          uVar10 = UnityEngine_Transform__Find_43d4bec
                             (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7ab0,0);
          Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar10,uVar4 & 1);
          if (*(long *)(param_1 + 0x68) != 0) {
            uVar10 = UnityEngine_Transform__Find_43d4bec
                               (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7aa0,0);
            Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar10,uVar14);
            if (*(long *)(param_1 + 0x68) != 0) {
              uVar10 = UnityEngine_Transform__Find_43d4bec
                                 (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7a98,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar10,((uVar4 | uVar14) ^ 1) & 1)
              ;
              puVar1 = PTR_DAT_04ca9ae8;
              if ((bRam0000000004f9c4ad & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cae520);
                FUN_02132f7c(PTR_DAT_04caa200);
                FUN_02132f7c(PTR_DAT_04ca9ae8);
                FUN_02132f7c(PTR_DAT_04cabaf8);
                FUN_02132f7c(PTR_DAT_04cb7ad8);
                FUN_02132f7c(PTR_DAT_04cb7ae0);
                bRam0000000004f9c4ad = 1;
              }
              uVar10 = *(undefined8 *)(param_1 + 0x68);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
              if ((uVar9 & 1) != 0) {
                return;
              }
              if (*(int *)(param_1 + 0x70) == 2) {
                if (*(long *)(param_1 + 0x68) != 0) {
                  lVar8 = UnityEngine_Transform__Find_43d4bec
                                    (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7ae0,0);
                  puVar1 = PTR_DAT_04cabaf8;
                  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar6 = *(long *)puVar1;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar6 = *(long *)puVar1;
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                  if (lVar6 != 0) {
                    lVar13 = *(long *)(lVar6 + 0x38);
                    lVar6 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
                    }
                    lVar6 = System_Math__Max_4830fd4(0,lVar13 - lVar6,0);
                    if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae520);
                    }
                    goto code_r0x023fbba8;
                  }
                }
              }
              else {
                if (*(int *)(param_1 + 0x70) != 0) {
                  return;
                }
                if (*(long *)(param_1 + 0x68) != 0) {
                  lVar8 = UnityEngine_Transform__Find_43d4bec
                                    (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7ad8,0);
                  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
                  }
                  iVar3 = Dino_BusSand_App_Meta_Profile__SecondsToNextHeart_2272b38(0);
                  if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae520);
                  }
                  lVar6 = (long)iVar3;
code_r0x023fbba8:
                  uVar10 = Dino_BusSand_App_UI_MainHudPanel__TimeString_22fcdf0(lVar6);
                  puVar1 = PTR_DAT_04ca9ae8;
                  if ((bRam0000000004f9c4bb & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cada48);
                    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    bRam0000000004f9c4bb = 1;
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                  if ((uVar9 & 1) == 0) {
                    if ((lVar8 == 0) ||
                       (lVar8 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                                          (lVar8,1,*(undefined8 *)PTR_DAT_04cada48), lVar8 == 0)) {
LAB_023fbc90:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    uVar4 = *(uint *)(lVar8 + 0x18);
                    if (0 < (int)uVar4) {
                      lVar6 = 0;
                      do {
                        if (uVar4 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
                          FUN_0213322c();
                        }
                        plVar12 = *(long **)(lVar8 + 0x20 + lVar6 * 8);
                        if (plVar12 == (long *)0x0) goto LAB_023fbc90;
                        (**(code **)(*plVar12 + 0x518))
                                  (plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x520));
                        uVar4 = *(uint *)(lVar8 + 0x18);
                        lVar6 = lVar6 + 1;
                      } while ((int)lVar6 < (int)uVar4);
                    }
                  }
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

