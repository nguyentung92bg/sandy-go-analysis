/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnQuit
void Dino_BusSand_App_Meta_YachtRacingFeature__OnQuit (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnQuit
   void Dino_BusSand_App_Meta_YachtRacingFeature__OnQuit
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__OnQuit_225b59c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long alStack_48 [3];
  
  puVar2 = PTR_DAT_04cb4118;
  if ((bRam0000000004f9c011 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c88);
    FUN_02132f7c(PTR_DAT_04cb2c90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4120);
    FUN_02132f7c(PTR_DAT_04cb4118);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb17e0);
    bRam0000000004f9c011 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar5,0);
  lVar6 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  if (lVar5 != 0) {
    plVar9 = (long *)(lVar5 + 0x10);
    *plVar9 = lVar6;
    thunk_FUN_02134474(plVar9,lVar6);
    if (*plVar9 != 0) {
      Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerFail_22562d0(*plVar9,0);
      if (*plVar9 != 0) {
        Dino_BusSand_App_Meta_YachtRacingCore__HandleGameResult_225814c(*plVar9,0,0);
        uVar7 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
        if ((uVar7 & 1) != 0) {
          if (*plVar9 == 0) goto LAB_0235b598;
          uVar7 = Dino_BusSand_App_Meta_YachtRacingCore__NeedShowSpecialLose_2255600(*plVar9,0);
          if ((uVar7 & 1) != 0) {
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = Dino_BusSand_App_UiAssets__HasPrefab_2163510
                                (*(undefined8 *)PTR_DAT_04cb17e0,0);
              if ((uVar7 & 1) != 0) {
                lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2c88);
                System_Action_object____ctor_35f0008(lVar6,lVar5,*(undefined8 *)PTR_DAT_04cb4120,0);
                if (*(int *)(*(long *)PTR_DAT_04cb2c90 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if ((bRam0000000004f9bdff & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cb2c90,lVar6,0);
                  FUN_02132f7c(PTR_DAT_04cb2d28);
                  FUN_02132f7c(PTR_DAT_04cb2d30);
                  FUN_02132f7c(PTR_DAT_04cb2d38);
                  FUN_02132f7c(PTR_DAT_04cb2d20);
                  FUN_02132f7c(PTR_DAT_04cb2d40);
                  FUN_02132f7c(PTR_DAT_04ca9ae8);
                  FUN_02132f7c(PTR_DAT_04cb2d48);
                  FUN_02132f7c(PTR_DAT_04cb2d50);
                  bRam0000000004f9bdff = 1;
                }
                puVar3 = PTR_DAT_04cb2d40;
                puVar2 = PTR_DAT_04cb2c90;
                alStack_48[0] = 0;
                if (lVar6 == 0) {
                  return;
                }
                iVar12 = 0;
                while( true ) {
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar11 = **(long **)(lVar5 + 0xb8);
                  if (lVar11 == 0) break;
                  if (*(int *)(lVar11 + 0x18) <= iVar12) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
                    }
                    alStack_48[0] = lVar6;
                    thunk_FUN_02134474(alStack_48,lVar6);
                    if (lVar11 != 0) {
                      lVar5 = *(long *)(lVar11 + 0x10);
                      lVar6 = *(long *)PTR_DAT_04cb2d30;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(lVar11 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar5 + 0x28);
                          *plVar9 = alStack_48[0];
                          *(undefined8 *)(lVar5 + 0x20) = 1;
                          thunk_FUN_02134474(plVar9,0);
                        }
                        else {
                          System_Collections_Generic_List_BattleYachtSpecialLose_Entry___AddWithResize_3b105e8
                                    (lVar11,1,alStack_48[0],
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                        }
                        puVar3 = PTR_DAT_04cb2d50;
                        lVar5 = *(long *)PTR_DAT_04cb2d50;
                        lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar5 = *(long *)puVar3;
                        }
                        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                        lVar11 = puVar8[1];
                        if (lVar11 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                          }
                          uVar10 = *puVar8;
                          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2d28);
                          System_Comparison_BattleYachtSpecialLose_Entry____ctor_3329780
                                    (lVar11,uVar10,*(undefined8 *)PTR_DAT_04cb2d48,0);
                          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                          *plVar9 = lVar11;
                          thunk_FUN_02134474(plVar9,lVar11);
                        }
                        if (lVar6 != 0) {
                          System_Collections_Generic_List_BattleYachtSpecialLose_Entry___Sort_3b120f8
                                    (lVar6,lVar11,*(undefined8 *)PTR_DAT_04cb2d38);
                          if (cRam0000000004f9b94d == '\0') {
                            FUN_02132f7c(PTR_DAT_04cad1b0);
                            cRam0000000004f9b94d = '\x01';
                          }
                          lVar5 = *(long *)puVar2;
                          lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar5 = *(long *)puVar2;
                          }
                          if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
                            return;
                          }
                          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            return;
                          }
                          if (lVar6 != 0) {
                            uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar6,0);
                            if ((uVar7 & 1) == 0) {
                              return;
                            }
                            lVar5 = *(long *)puVar2;
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar5 = *(long *)puVar2;
                            }
                            *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 8) = 1;
                            uVar10 = Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_2227a74();
                            UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar6,uVar10,0);
                            return;
                          }
                        }
                      }
                    }
                    break;
                  }
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
                    if (lVar11 == 0) break;
                  }
                  iVar4 = System_Collections_Generic_List_BattleYachtSpecialLose_Entry___get_Item_3b102c8
                                    (lVar11,iVar12,*(undefined8 *)puVar3);
                  iVar12 = iVar12 + 1;
                  if (iVar4 == 1) {
                    return;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
        }
        return;
      }
    }
  }
LAB_0235b598:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

