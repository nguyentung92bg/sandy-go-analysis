/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$TrySpecialLose
void Dino_BusSand_App_Meta_BattleRoyaleFeature__TrySpecialLose (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$TrySpecialLose
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__TrySpecialLose
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__TrySpecialLose_22266ac(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  
  if ((bRam0000000004f9bde1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c88);
    FUN_02132f7c(PTR_DAT_04cb2c90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb2c98);
    FUN_02132f7c(PTR_DAT_04cb2ca0);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cae588);
    bRam0000000004f9bde1 = 1;
  }
  uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
    if (lVar6 == 0) {
LAB_023268b8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowBattleResult_2221aa4();
    if ((uVar5 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cae588,0);
        puVar2 = PTR_DAT_04cb2ca0;
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)PTR_DAT_04cb2ca0;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          puVar8 = *(undefined8 **)(lVar6 + 0xb8);
          lVar9 = puVar8[1];
          if (lVar9 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            }
            uVar10 = *puVar8;
            lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2c88);
            System_Action_object____ctor_35f0008(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cb2c98,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar7 = lVar9;
            thunk_FUN_02134474(plVar7,lVar9);
          }
          if (*(int *)(*(long *)PTR_DAT_04cb2c90 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if ((bRam0000000004f9bdff & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cb2c90,lVar9,0);
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
          if (lVar9 == 0) {
            return;
          }
          iVar12 = 0;
          while( true ) {
            lVar6 = *(long *)puVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar2;
            }
            lVar11 = **(long **)(lVar6 + 0xb8);
            if (lVar11 == 0) break;
            if (*(int *)(lVar11 + 0x18) <= iVar12) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
              }
              alStack_48[0] = lVar9;
              thunk_FUN_02134474(alStack_48,lVar9);
              if (lVar11 != 0) {
                lVar6 = *(long *)(lVar11 + 0x10);
                lVar9 = *(long *)PTR_DAT_04cb2d30;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    plVar7 = (long *)(lVar6 + 0x28);
                    *plVar7 = alStack_48[0];
                    *(undefined8 *)(lVar6 + 0x20) = 0;
                    thunk_FUN_02134474(plVar7,0);
                  }
                  else {
                    System_Collections_Generic_List_BattleYachtSpecialLose_Entry___AddWithResize_3b105e8
                              (lVar11,0,alStack_48[0],
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  puVar3 = PTR_DAT_04cb2d50;
                  lVar6 = *(long *)PTR_DAT_04cb2d50;
                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar6 = *(long *)puVar3;
                  }
                  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                  lVar11 = puVar8[1];
                  if (lVar11 == 0) {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                    }
                    uVar10 = *puVar8;
                    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2d28);
                    System_Comparison_BattleYachtSpecialLose_Entry____ctor_3329780
                              (lVar11,uVar10,*(undefined8 *)PTR_DAT_04cb2d48,0);
                    plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                    *plVar7 = lVar11;
                    thunk_FUN_02134474(plVar7,lVar11);
                  }
                  if (lVar9 != 0) {
                    System_Collections_Generic_List_BattleYachtSpecialLose_Entry___Sort_3b120f8
                              (lVar9,lVar11,*(undefined8 *)PTR_DAT_04cb2d38);
                    if (cRam0000000004f9b94d == '\0') {
                      FUN_02132f7c(PTR_DAT_04cad1b0);
                      cRam0000000004f9b94d = '\x01';
                    }
                    lVar6 = *(long *)puVar2;
                    lVar9 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar6 = *(long *)puVar2;
                    }
                    if (*(char *)(*(long *)(lVar6 + 0xb8) + 8) != '\0') {
                      return;
                    }
                    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
                    if ((uVar5 & 1) != 0) {
                      return;
                    }
                    if (lVar9 != 0) {
                      uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar9,0);
                      if ((uVar5 & 1) == 0) {
                        return;
                      }
                      lVar6 = *(long *)puVar2;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar6 = *(long *)puVar2;
                      }
                      *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 8) = 1;
                      uVar10 = Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_2227a74();
                      UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar9,uVar10,0);
                      return;
                    }
                  }
                }
              }
              break;
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
              if (lVar11 == 0) break;
            }
            iVar4 = System_Collections_Generic_List_BattleYachtSpecialLose_Entry___get_Item_3b102c8
                              (lVar11,iVar12,*(undefined8 *)puVar3);
            iVar12 = iVar12 + 1;
            if (iVar4 == 0) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      Dino_BusSand_App_Meta_BattleRoyaleFeature__ApplySpecialLose_22268ec(param_1);
      lVar6 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
      if (lVar6 == 0) goto LAB_023268b8;
      Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_38);
    }
  }
  return;
}

