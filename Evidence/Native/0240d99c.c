/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnItemClick
void Dino_BusSand_App_UI_HudPanel__OnItemClick (Dino_BusSand_App_UI_HudPanel_o* __this, Dino_BusSand_App_UI_HudPanel_ItemBtn_o* it, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0240e0b0) */
/* WARNING: Removing unreachable block (ram,0x0240e0c4) */
/* WARNING: Removing unreachable block (ram,0x0240e0c8) */
/* WARNING: Removing unreachable block (ram,0x0240e0d4) */
/* WARNING: Removing unreachable block (ram,0x0240e0e8) */
/* WARNING: Removing unreachable block (ram,0x0240e0f4) */
/* WARNING: Removing unreachable block (ram,0x0240e0fc) */
/* WARNING: Removing unreachable block (ram,0x0240e114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnItemClick
   void Dino_BusSand_App_UI_HudPanel__OnItemClick (Dino_BusSand_App_UI_HudPanel_o* __this,
   Dino_BusSand_App_UI_HudPanel_ItemBtn_o* it, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_HudPanel__OnItemClick_230d99c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  float fStack_ac;
  long lStack_a8;
  bool abStack_58 [4];
  int iStack_54;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c52b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb81b8);
    bRam0000000004f9c52b = 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  uVar7 = *(ulong *)(param_1 + 0x40);
  if (uVar7 == 0) {
LAB_0240dc2c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(uVar7 + 0x20) != 2) {
    return uVar7;
  }
  uVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked_229bf48(uVar7,0);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  uVar7 = Dino_BusSand_App_UI_HudPanel__get_BoosterBusy_230d5a4(param_1);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  if (param_2 == 0) goto LAB_0240dc2c;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x10)) {
    if (*(int *)(param_1 + 0x48) != 0) {
      return uVar7;
    }
    iVar27 = Dino_BusSand_App_UI_HudPanel__StateOf_230d45c();
    puVar2 = PTR_DAT_04ca9c20;
    if (iVar27 == 3) {
      if ((bRam0000000004f9c52c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac420);
        FUN_02132f7c(PTR_DAT_04cb81c0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cb81c8);
        FUN_02132f7c(PTR_DAT_04cb81d0);
        FUN_02132f7c(PTR_DAT_04cb81d8);
        bRam0000000004f9c52c = 1;
      }
      puVar2 = PTR_DAT_04cb81d8;
      if (*(long *)(param_1 + 0x40) != 0) {
        Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                  (*(long *)(param_1 + 0x40),1,*(undefined8 *)PTR_DAT_04cb81d8,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xa4) = 1;
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          if (param_2 != 0) {
            lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            uVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffcc)
            ;
            puVar3 = PTR_DAT_04ca9ae8;
            if (lVar8 != 0) {
              lVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                (lVar8,*(undefined8 *)PTR_DAT_04cb81d0,2,uVar16,
                                 *(undefined8 *)PTR_DAT_04cb81c8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
              if ((uVar7 & 1) == 0) {
                uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                System_Action_bool____ctor_35ee0e8(uVar16,param_1,*(undefined8 *)PTR_DAT_04cb81c0,0)
                ;
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x38) = uVar16;
                  uVar7 = thunk_FUN_02134474((undefined8 *)(lVar8 + 0x38),uVar16);
                  return uVar7;
                }
              }
              else {
                lVar8 = *(long *)(param_1 + 0x40);
                if (lVar8 != 0) {
                  uVar16 = *(undefined8 *)puVar2;
                  *(undefined1 *)(lVar8 + 0xa4) = 0;
                  uVar7 = Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                                    (lVar8,0,uVar16,0);
                  return uVar7;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (iVar27 != 0) {
      iVar15 = *(int *)(param_2 + 0x10);
      bVar4 = iVar27 == 1;
      if ((bRam0000000004f9c52d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac5c0);
        FUN_02132f7c(PTR_DAT_04ca9d18);
        FUN_02132f7c(PTR_DAT_04caba50);
        FUN_02132f7c(PTR_DAT_04cb6a88);
        FUN_02132f7c(PTR_DAT_04cab550);
        FUN_02132f7c(PTR_DAT_04ca9c20);
        FUN_02132f7c(PTR_DAT_04cac518);
        FUN_02132f7c(PTR_DAT_04cac768);
        FUN_02132f7c(PTR_DAT_04cb81e0);
        FUN_02132f7c(PTR_DAT_04cb81e8);
        FUN_02132f7c(PTR_DAT_04cb81f0);
        FUN_02132f7c(PTR_DAT_04cb27d0);
        bRam0000000004f9c52d = 1;
      }
      plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
      puVar2 = PTR_DAT_04cac768;
      if (plVar9 == (long *)0x0) goto LAB_0240e440;
      if ((*(long *)PTR_DAT_04cac768 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar9 + 0x40)),
         lVar8 == 0)) {
LAB_0240e444:
        uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar16,0);
      }
      if ((int)plVar9[3] != 0) {
        plVar9[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        puVar2 = PTR_DAT_04ca9ac8;
        _abStack_58 = CONCAT44(iVar15,abStack_58);
        lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_54);
        if ((lVar8 != 0) &&
           (lVar17 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_0240e444;
        puVar3 = PTR_DAT_04cb27d0;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
          plVar9[5] = lVar8;
          thunk_FUN_02134474(plVar9 + 5,lVar8);
          lVar8 = *(long *)puVar3;
          if ((lVar8 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
          goto LAB_0240e444;
          if (2 < *(uint *)(plVar9 + 3)) {
            plVar9[6] = *(long *)puVar3;
            thunk_FUN_02134474();
            _abStack_58 = CONCAT71(stack0xffffffffffffffa9,bVar4);
            lVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x28),abStack_58);
            if ((lVar8 != 0) &&
               (lVar17 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
            goto LAB_0240e444;
            puVar3 = PTR_DAT_04cb81f0;
            puVar2 = PTR_DAT_04cac5c0;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
              plVar9[7] = lVar8;
              thunk_FUN_02134474(plVar9 + 7,lVar8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar16 = Dino_BusSand_App_Analytics__L_216fff0(plVar9,0);
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,uVar16,0);
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240e440;
              iVar27 = Dino_BusSand_App_Gameplay_GameplayController__UseItem_229ebbc
                                 (*(long *)(param_1 + 0x40),iVar15,&stack0xffffffffffffffb8,bVar4,0)
              ;
              if (iVar27 == 2) {
                uVar16 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(param_1,iVar15);
                uVar7 = Dino_BusSand_App_UI_FailPanel__NopeButton_2317cf8(uVar16,0);
              }
              else {
                *(int *)(param_1 + 0x48) = iVar15;
                *(bool *)(param_1 + 0x4c) = bVar4;
                if (iVar27 == 0) {
                  Dino_BusSand_App_UI_HudPanel__Consume_230e91c(param_1,iVar15);
                  *(undefined4 *)(param_1 + 0x48) = 0;
                  uVar16 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(param_1,iVar15);
                  if (*(int *)(*(long *)PTR_DAT_04cb6a88 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6a88);
                  }
                  Dino_BusSand_App_UI_HudPanel__PlayBump_230ecd4(uVar16);
                  uVar7 = Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
                  lVar8 = *(long *)(param_1 + 0x128);
                  if (lVar8 != 0) {
                    uVar7 = (**(code **)(lVar8 + 0x18))
                                      (*(undefined8 *)(lVar8 + 0x40),iVar15,
                                       *(undefined8 *)(lVar8 + 0x28));
                  }
                }
                else {
                  Dino_BusSand_App_UI_HudPanel__ShowItemMask_230a1b4(param_1,1);
                  puVar2 = PTR_DAT_04caba50;
                  if (iVar15 == 0x2713) {
                    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b88f == '\0') {
                      FUN_02132f7c(PTR_DAT_04caba50);
                      cRam0000000004f9b88f = '\x01';
                    }
                    lVar8 = *(long *)puVar2;
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar8 = *(long *)puVar2;
                    }
                    lVar18 = *(long *)PTR_DAT_04ca9d18;
                    lVar17 = **(long **)(lVar8 + 0xb8);
                    lVar8 = *(long *)(lVar18 + 0x38);
                    if (lVar8 == 0) {
                      FUN_0216b4cc(lVar18);
                      lVar8 = *(long *)(lVar18 + 0x38);
                    }
                    lVar8 = *(long *)(lVar8 + 0x10);
                    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                      lVar8 = FUN_0216b470();
                    }
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar8 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
                    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                      lVar8 = FUN_0216b470();
                    }
                    uVar16 = **(undefined8 **)(lVar8 + 0xb8);
                    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
                    }
                    uVar16 = Dino_BusSand_App_Lang__Get_215f9c0
                                       (*(undefined8 *)PTR_DAT_04cb81e0,uVar16,0);
                    if (lVar17 == 0) {
LAB_0240e440:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    Dino_BusSand_App_GameApp__Toast_2166a6c(lVar17,uVar16,0);
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b88f == '\0') {
                      FUN_02132f7c(PTR_DAT_04caba50);
                      cRam0000000004f9b88f = '\x01';
                    }
                    lVar8 = *(long *)puVar2;
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar8 = *(long *)puVar2;
                    }
                    if ((**(long **)(lVar8 + 0xb8) == 0) ||
                       (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x28), lVar8 == 0))
                    goto LAB_0240e440;
                    uVar7 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                      (lVar8,*(undefined8 *)PTR_DAT_04cac518);
                    if ((uVar7 & 1) == 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b88f == '\0') {
                        FUN_02132f7c(PTR_DAT_04caba50);
                        cRam0000000004f9b88f = '\x01';
                      }
                      lVar8 = *(long *)puVar2;
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar8 = *(long *)puVar2;
                      }
                      lVar18 = *(long *)PTR_DAT_04ca9d18;
                      lVar17 = **(long **)(lVar8 + 0xb8);
                      lVar8 = *(long *)(lVar18 + 0x38);
                      if (lVar8 == 0) {
                        FUN_0216b4cc(lVar18);
                        lVar8 = *(long *)(lVar18 + 0x38);
                      }
                      lVar8 = *(long *)(lVar8 + 0x10);
                      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                        lVar8 = FUN_0216b470();
                      }
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar8 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                        lVar8 = FUN_0216b470();
                      }
                      uVar16 = **(undefined8 **)(lVar8 + 0xb8);
                      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
                      }
                      uVar16 = Dino_BusSand_App_Lang__Get_215f9c0
                                         (*(undefined8 *)PTR_DAT_04cb81e8,uVar16,0);
                      Dino_BusSand_App_UI_HudPanel__PictureHeight_230eddc(param_1);
                      if (lVar17 == 0) goto LAB_0240e440;
                      Dino_BusSand_App_GameApp__Toast_2169dc0(lVar17,uVar16,0);
                    }
                  }
                  uVar7 = Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
                }
              }
              return uVar7;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    Dino_BusSand_App_UI_FailPanel__NopeButton_2317cf8(*(undefined8 *)(param_2 + 0x20),0);
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = FUN_023d0b9c(0);
    lVar17 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb1c70);
    }
    Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar5,0);
    uVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    if (lVar17 != 0) {
      FUN_01e7704c(lVar17,uVar16);
      FUN_01e76ff0(lVar17,0,uVar16);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar16 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb81b8,lVar17,0);
      if (lVar8 != 0) {
        uVar7 = Dino_BusSand_App_GameApp__Toast_2166a6c(lVar8,uVar16,0);
        return uVar7;
      }
    }
    goto LAB_0240dc2c;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return uVar7;
  }
  Dino_BusSand_App_UI_HudPanel__CancelActive_230dc30(param_1);
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = FUN_022c78f0(0);
  puVar2 = PTR_DAT_04cad568;
  if (lVar8 == 0) {
    return 0;
  }
  uVar16 = 0;
  if ((bRam0000000004f9c84f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,0);
    FUN_02132f7c(PTR_DAT_04cbb588);
    bRam0000000004f9c84f = 1;
    uVar16 = extraout_x1_01;
  }
  puVar3 = PTR_DAT_04cbb588;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar16 = extraout_x1_02;
  }
  puVar2 = PTR_DAT_04cab1f0;
  uVar13 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9c827 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar16);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c827 = 1;
    uVar16 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar16 = extraout_x1_00;
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar16);
    cRam0000000004f9b88a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  uVar16 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c7ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb220);
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cbb120);
    FUN_02132f7c(PTR_DAT_04cad660);
    FUN_02132f7c(PTR_DAT_04cbb128);
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cbb218);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb228);
    FUN_02132f7c(PTR_DAT_04cbb268);
    FUN_02132f7c(PTR_DAT_04cbb230);
    FUN_02132f7c(PTR_DAT_04cbb270);
    bRam0000000004f9c7ef = 1;
  }
  lStack_a8 = 0;
  fStack_ac = 0.0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  iStack_d4 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uVar7 = System_String__IsNullOrEmpty_46d2084(uVar13,0);
  uVar19 = 0;
  if ((uVar7 & 1) != 0) goto LAB_0247539c;
  lVar17 = *(long *)(lVar8 + 0x28);
  uVar16 = Dino_BusSand_AudioHub__Key_23746fc(lVar8,uVar13);
  if (lVar17 == 0) goto LAB_024759b8;
  uVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar17,uVar16,&lStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(lVar8 + 0x40);
    uVar16 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,uVar13,0);
    if (lVar8 == 0) goto LAB_024759b8;
    uVar7 = System_Collections_Generic_HashSet_object___Add_37e654c
                      (lVar8,uVar16,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar7 & 1) != 0) {
      uVar16 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar16,0);
    }
LAB_02475398:
    uVar19 = 0;
    goto LAB_0247539c;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  uVar7 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(lStack_a8 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0);
  puVar2 = PTR_DAT_04cab1f0;
  if ((uVar7 & 1) != 0) {
    Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,lVar8,uVar13);
    uVar19 = 1;
    goto LAB_0247539c;
  }
  lVar17 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
  fVar20 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((lStack_a8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) goto LAB_024759b8;
  uVar16 = *(undefined8 *)(lStack_a8 + 0x10);
  uVar7 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                    (*(long *)(lVar8 + 0x48),uVar16,&fStack_ac,*(undefined8 *)PTR_DAT_04cbb220);
  fVar21 = fVar20 - fStack_ac;
  if ((uVar7 & 1) == 0) {
    fVar21 = _UNK_00e20560;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  if ((0.0 < *(float *)(lStack_a8 + 0x50)) && (fVar21 < *(float *)(lStack_a8 + 0x50)))
  goto LAB_02475398;
  if (*(int *)(lStack_a8 + 0x58) < 1) {
    lVar17 = 0;
  }
  else {
    if (*(long *)(lVar8 + 0x68) == 0) goto LAB_024759b8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_108,*(long *)(lVar8 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    puVar3 = PTR_DAT_04cbb208;
    iVar27 = 0;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    lStack_c0 = lStack_f8;
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
    lVar17 = 0;
    while (lVar10 = lVar17,
          uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_d0,*(undefined8 *)puVar3), lVar18 = lStack_c0, (uVar7 & 1) != 0
          ) {
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar16,0);
      lVar17 = lVar10;
      if (((((uVar7 & 1) == 0) &&
           (uVar7 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar18), (uVar7 & 1) != 0)) &&
          (*(float *)(lVar18 + 0x38) <= 0.0)) &&
         ((iVar27 = iVar27 + 1, lVar17 = lVar18, lVar10 != 0 &&
          (lVar17 = lVar10, *(float *)(lVar18 + 0x30) < *(float *)(lVar10 + 0x30))))) {
        lVar17 = lVar18;
      }
    }
    FUN_01e7a8a8(&uStack_108);
    if (lStack_a8 == 0) goto LAB_024759b8;
    lVar17 = 0;
    if (*(int *)(lStack_a8 + 0x58) <= iVar27) {
      lVar17 = lVar10;
    }
  }
  if (*(float *)(lStack_a8 + 0x68) == 0.0) {
    iVar27 = 0;
  }
  else {
    fVar26 = *(float *)(lStack_a8 + 0x6c);
    if (*(float *)(lStack_a8 + 0x6c) <= 0.0) {
      fVar26 = 1.5;
    }
    if (fVar26 <= fVar21) {
LAB_02475534:
      iVar27 = 0;
    }
    else {
      if (*(long *)(lVar8 + 0x60) == 0) goto LAB_024759b8;
      uVar7 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(lVar8 + 0x60),uVar16,&iStack_d4,*(undefined8 *)PTR_DAT_04cad650);
      if ((uVar7 & 1) == 0) goto LAB_02475534;
      iVar27 = iStack_d4 + 1;
    }
    if ((lStack_a8 == 0) || (*(long *)(lVar8 + 0x60) == 0)) goto LAB_024759b8;
    iVar1 = *(int *)(lStack_a8 + 0x70);
    iVar15 = iVar27;
    if (iVar1 <= iVar27) {
      iVar15 = iVar1;
    }
    if (0 < iVar1) {
      iVar27 = iVar15;
    }
    System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
              (*(long *)(lVar8 + 0x60),uVar16,iVar27,*(undefined8 *)PTR_DAT_04cad660);
  }
  if ((*(long *)(lVar8 + 0x48) == 0) ||
     (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                (fVar20,*(long *)(lVar8 + 0x48),uVar16,*(undefined8 *)PTR_DAT_04cbb128),
     lStack_a8 == 0)) goto LAB_024759b8;
  lVar18 = *(long *)(lStack_a8 + 0x80);
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) < 1)) {
LAB_02475720:
    uVar19 = 0;
  }
  else {
    uVar5 = Dino_BusSand_AudioHub__PickClip_2375c0c(lVar8);
    lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar18,uVar5,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar18 == 0) goto LAB_024759b8;
    lVar10 = Dino_BusSand_AudioHub__Clip_23742fc(lVar8,*(undefined8 *)(lVar18 + 0x10));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar7 & 1) == 0) goto LAB_02475720;
    if (lStack_a8 == 0) goto LAB_024759b8;
    iVar15 = *(int *)(lStack_a8 + 0x5c);
    if (iVar15 < 1) {
      iVar15 = 0x80;
    }
    lVar11 = Dino_BusSand_AudioHub__Acquire_2375f30(lVar8,iVar15);
    uVar19 = 0;
    if (lVar11 != 0) {
      if ((lVar17 != 0) && (lVar17 != lVar11)) {
        *(undefined4 *)(lVar17 + 0x38) = 0x42200000;
      }
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar28 = *(float *)(lStack_a8 + 0x38);
      fVar26 = *(float *)(lVar18 + 0x20);
      fVar21 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x3c),*(undefined4 *)(lStack_a8 + 0x40)
                                 ,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar25 = *(float *)(lStack_a8 + 0x44);
      fVar24 = *(float *)(lVar18 + 0x24);
      fVar22 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x48),*(undefined4 *)(lStack_a8 + 0x4c)
                                 ,0);
      if ((lStack_a8 == 0) || (lVar17 = *(long *)(lVar11 + 0x10), lVar17 == 0)) goto LAB_024759b8;
      fVar29 = *(float *)(lStack_a8 + 0x68);
      uVar7 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar17,0);
      if ((uVar7 & 1) != 0) {
        UnityEngine_AudioSource__Stop_43488b8(lVar17,0);
      }
      UnityEngine_AudioSource__set_clip_434875c(lVar17,lVar10,0);
      UnityEngine_AudioSource__set_loop_4348b90(lVar17,0,0);
      *(undefined8 *)(lVar11 + 0x18) = uVar16;
      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18),uVar16);
      if (lStack_a8 == 0) goto LAB_024759b8;
      uVar7 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a8 + 0x20),0);
      puVar14 = (undefined8 *)PTR_DAT_04cbb228;
      if ((uVar7 & 1) == 0) {
        if (lStack_a8 == 0) goto LAB_024759b8;
        puVar14 = (undefined8 *)(lStack_a8 + 0x20);
      }
      *(undefined8 *)(lVar11 + 0x20) = *puVar14;
      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20));
      lVar12 = *(long *)puVar2;
      *(int *)(lVar11 + 0x28) = iVar15;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar26 = (float)func_0x049b5300(0x41200000,(fVar28 + fVar26 + fVar21) / 20.0);
      fVar26 = fVar26 * 1.0;
      fVar21 = 4.0;
      if (fVar26 <= 4.0) {
        fVar21 = fVar26;
      }
      *(undefined8 *)(lVar11 + 0x34) = _UNK_00e698b8;
      fVar28 = 0.0;
      if (0.0 <= fVar26) {
        fVar28 = fVar21;
      }
      *(float *)(lVar11 + 0x2c) = fVar28;
      *(float *)(lVar11 + 0x30) = fVar20;
      fVar21 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(lVar8,*(undefined8 *)(lVar11 + 0x20));
      fVar28 = fVar28 * fVar21;
      fVar21 = 1.0;
      if (fVar28 <= 1.0) {
        fVar21 = fVar28;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar28) {
        fVar26 = fVar21;
      }
      UnityEngine_AudioSource__set_volume_434840c(fVar26,lVar17,0);
      fVar26 = (float)exp2f((fVar25 + fVar24 + fVar22 + fVar29 * (float)iVar27) / 1200.0);
      fVar26 = fVar26 * 1.0;
      fVar21 = 3.0;
      if (fVar26 <= 3.0) {
        fVar21 = fVar26;
      }
      fVar28 = _UNK_00e20754;
      if (_UNK_00e20754 <= fVar26) {
        fVar28 = fVar21;
      }
      UnityEngine_AudioSource__set_pitch_43484e0(fVar28,lVar17,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar21 = 0.0;
      if (*(char *)(lStack_a8 + 0x60) == '\0') {
        fVar26 = *(float *)(lStack_a8 + 100);
        if (fVar26 <= 0.0) {
          fVar26 = 1.0;
        }
        fVar26 = fVar26 * 0.0;
        fVar28 = 1.0;
        if (fVar26 <= 1.0) {
          fVar28 = fVar26;
        }
        fVar21 = -1.0;
        if (-1.0 <= fVar26) {
          fVar21 = fVar28;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar21,lVar17,0);
      if (lVar10 == 0) goto LAB_024759b8;
      iVar27 = *(int *)(lVar18 + 0x1c);
      fVar26 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar10,0);
      fVar22 = 0.0;
      fVar28 = (float)iVar27 / 1000.0;
      fVar21 = 0.0;
      if (0.0 <= fVar26 + _UNK_00e20000) {
        fVar21 = fVar26 + _UNK_00e20000;
      }
      if (fVar28 <= fVar21) {
        fVar21 = fVar28;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar28) {
        fVar26 = fVar21;
      }
      UnityEngine_AudioSource__set_time_4348598(fVar26,lVar17,0);
      fVar21 = (float)*(int *)(lVar18 + 0x28) / 1000.0 + 0.0;
      if (fVar21 <= _UNK_00e20a7c) {
        UnityEngine_AudioSource__Play_4348894(lVar17,0);
      }
      else {
        dVar23 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
        UnityEngine_AudioSource__PlayScheduled_434889c(dVar23 + (double)fVar21,lVar17,0);
        fVar22 = fVar20 + fVar21 + _UNK_00e2043c;
      }
      *(float *)(lVar11 + 0x3c) = fVar22;
      uVar19 = 1;
    }
  }
  if ((lStack_a8 != 0) &&
     ((*(float *)(lStack_a8 + 0x78) <= 0.0 ||
      (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(lStack_a8 + 0x74),lVar8), lStack_a8 != 0)
      ))) {
    if (*(long *)(lStack_a8 + 0x88) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_f0,*(long *)(lStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
      puVar2 = PTR_DAT_04cab6c8;
      uStack_108 = 0;
      puStack_100 = &uStack_f0;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_f0,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
        uVar6 = Dino_BusSand_AudioHub__PlayDepth_2375064
                          (0x3f800000,0x3f800000,0,0,lVar8,uStack_e0,1);
        uVar19 = uVar19 | uVar6;
      }
      FUN_01e77dbc(&uStack_108);
    }
LAB_0247539c:
    return (ulong)(uVar19 & 1);
  }
LAB_024759b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

