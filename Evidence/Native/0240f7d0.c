/* IL2CPP: Dino.BusSand.App.UI.HudPanel.<>c__DisplayClass62_0$$<AddItem>b__0
void Dino_BusSand_App_UI_HudPanel___c__DisplayClass62_0___AddItem_b__0 (Dino_BusSand_App_UI_HudPanel___c__DisplayClass62_0_o* __this, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.UI.HudPanel.<>c__DisplayClass62_0$$<AddItem>b__0
   void Dino_BusSand_App_UI_HudPanel___c__DisplayClass62_0___AddItem_b__0
   (Dino_BusSand_App_UI_HudPanel___c__DisplayClass62_0_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_HudPanel___c__DisplayClass62_0___AddItem_b__0_230f7d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 uVar17;
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
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = *(long *)(param_1 + 0x18);
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
  uVar17 = *(undefined8 *)(lVar14 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar17,0,0);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  uVar7 = *(ulong *)(lVar14 + 0x40);
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
  uVar7 = Dino_BusSand_App_UI_HudPanel__get_BoosterBusy_230d5a4(lVar14);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  if (lVar13 == 0) goto LAB_0240dc2c;
  if (*(int *)(lVar14 + 0x48) != *(int *)(lVar13 + 0x10)) {
    if (*(int *)(lVar14 + 0x48) != 0) {
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
      if (*(long *)(lVar14 + 0x40) != 0) {
        Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                  (*(long *)(lVar14 + 0x40),1,*(undefined8 *)PTR_DAT_04cb81d8,0);
        if (*(long *)(lVar14 + 0x40) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0x40) + 0xa4) = 1;
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          if (lVar13 != 0) {
            lVar13 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            uVar17 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffcc)
            ;
            puVar3 = PTR_DAT_04ca9ae8;
            if (lVar13 != 0) {
              lVar13 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                 (lVar13,*(undefined8 *)PTR_DAT_04cb81d0,2,uVar17,
                                  *(undefined8 *)PTR_DAT_04cb81c8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
              if ((uVar7 & 1) == 0) {
                uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                System_Action_bool____ctor_35ee0e8(uVar17,lVar14,*(undefined8 *)PTR_DAT_04cb81c0,0);
                if (lVar13 != 0) {
                  *(undefined8 *)(lVar13 + 0x38) = uVar17;
                  uVar7 = thunk_FUN_02134474((undefined8 *)(lVar13 + 0x38),uVar17);
                  return uVar7;
                }
              }
              else {
                lVar14 = *(long *)(lVar14 + 0x40);
                if (lVar14 != 0) {
                  uVar17 = *(undefined8 *)puVar2;
                  *(undefined1 *)(lVar14 + 0xa4) = 0;
                  uVar7 = Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                                    (lVar14,0,uVar17,0);
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
      iVar16 = *(int *)(lVar13 + 0x10);
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
      plVar8 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
      puVar2 = PTR_DAT_04cac768;
      if (plVar8 == (long *)0x0) goto LAB_0240e440;
      if ((*(long *)PTR_DAT_04cac768 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar8 + 0x40)),
         lVar13 == 0)) {
LAB_0240e444:
        uVar17 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar17,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        puVar2 = PTR_DAT_04ca9ac8;
        _abStack_58 = CONCAT44(iVar16,abStack_58);
        lVar13 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_54);
        if ((lVar13 != 0) &&
           (lVar18 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar18 == 0))
        goto LAB_0240e444;
        puVar3 = PTR_DAT_04cb27d0;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar13;
          thunk_FUN_02134474(plVar8 + 5,lVar13);
          lVar13 = *(long *)puVar3;
          if ((lVar13 != 0) &&
             (lVar13 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
          goto LAB_0240e444;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = *(long *)puVar3;
            thunk_FUN_02134474();
            _abStack_58 = CONCAT71(stack0xffffffffffffffa9,bVar4);
            lVar13 = FUN_02133100(*(undefined8 *)(puVar2 + 0x28),abStack_58);
            if ((lVar13 != 0) &&
               (lVar18 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar18 == 0))
            goto LAB_0240e444;
            puVar3 = PTR_DAT_04cb81f0;
            puVar2 = PTR_DAT_04cac5c0;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
              plVar8[7] = lVar13;
              thunk_FUN_02134474(plVar8 + 7,lVar13);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar17 = Dino_BusSand_App_Analytics__L_216fff0(plVar8,0);
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,uVar17,0);
              if (*(long *)(lVar14 + 0x40) == 0) goto LAB_0240e440;
              iVar27 = Dino_BusSand_App_Gameplay_GameplayController__UseItem_229ebbc
                                 (*(long *)(lVar14 + 0x40),iVar16,&stack0xffffffffffffffb8,bVar4,0);
              if (iVar27 == 2) {
                uVar17 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(lVar14,iVar16);
                uVar7 = Dino_BusSand_App_UI_FailPanel__NopeButton_2317cf8(uVar17,0);
              }
              else {
                *(int *)(lVar14 + 0x48) = iVar16;
                *(bool *)(lVar14 + 0x4c) = bVar4;
                if (iVar27 == 0) {
                  Dino_BusSand_App_UI_HudPanel__Consume_230e91c(lVar14,iVar16);
                  *(undefined4 *)(lVar14 + 0x48) = 0;
                  uVar17 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(lVar14,iVar16);
                  if (*(int *)(*(long *)PTR_DAT_04cb6a88 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6a88);
                  }
                  Dino_BusSand_App_UI_HudPanel__PlayBump_230ecd4(uVar17);
                  uVar7 = Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(lVar14);
                  lVar14 = *(long *)(lVar14 + 0x128);
                  if (lVar14 != 0) {
                    uVar7 = (**(code **)(lVar14 + 0x18))
                                      (*(undefined8 *)(lVar14 + 0x40),iVar16,
                                       *(undefined8 *)(lVar14 + 0x28));
                  }
                }
                else {
                  Dino_BusSand_App_UI_HudPanel__ShowItemMask_230a1b4(lVar14,1);
                  puVar2 = PTR_DAT_04caba50;
                  if (iVar16 == 0x2713) {
                    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b88f == '\0') {
                      FUN_02132f7c(PTR_DAT_04caba50);
                      cRam0000000004f9b88f = '\x01';
                    }
                    lVar13 = *(long *)puVar2;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar13 = *(long *)puVar2;
                    }
                    lVar9 = *(long *)PTR_DAT_04ca9d18;
                    lVar18 = **(long **)(lVar13 + 0xb8);
                    lVar13 = *(long *)(lVar9 + 0x38);
                    if (lVar13 == 0) {
                      FUN_0216b4cc(lVar9);
                      lVar13 = *(long *)(lVar9 + 0x38);
                    }
                    lVar13 = *(long *)(lVar13 + 0x10);
                    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_0216b470();
                    }
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar13 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_0216b470();
                    }
                    uVar17 = **(undefined8 **)(lVar13 + 0xb8);
                    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
                    }
                    uVar17 = Dino_BusSand_App_Lang__Get_215f9c0
                                       (*(undefined8 *)PTR_DAT_04cb81e0,uVar17,0);
                    if (lVar18 == 0) {
LAB_0240e440:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    Dino_BusSand_App_GameApp__Toast_2166a6c(lVar18,uVar17,0);
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b88f == '\0') {
                      FUN_02132f7c(PTR_DAT_04caba50);
                      cRam0000000004f9b88f = '\x01';
                    }
                    lVar13 = *(long *)puVar2;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar13 = *(long *)puVar2;
                    }
                    if ((**(long **)(lVar13 + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(lVar13 + 0xb8) + 0x28), lVar13 == 0))
                    goto LAB_0240e440;
                    uVar7 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                      (lVar13,*(undefined8 *)PTR_DAT_04cac518);
                    if ((uVar7 & 1) == 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b88f == '\0') {
                        FUN_02132f7c(PTR_DAT_04caba50);
                        cRam0000000004f9b88f = '\x01';
                      }
                      lVar13 = *(long *)puVar2;
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar13 = *(long *)puVar2;
                      }
                      lVar9 = *(long *)PTR_DAT_04ca9d18;
                      lVar18 = **(long **)(lVar13 + 0xb8);
                      lVar13 = *(long *)(lVar9 + 0x38);
                      if (lVar13 == 0) {
                        FUN_0216b4cc(lVar9);
                        lVar13 = *(long *)(lVar9 + 0x38);
                      }
                      lVar13 = *(long *)(lVar13 + 0x10);
                      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_0216b470();
                      }
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar13 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_0216b470();
                      }
                      uVar17 = **(undefined8 **)(lVar13 + 0xb8);
                      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
                      }
                      uVar17 = Dino_BusSand_App_Lang__Get_215f9c0
                                         (*(undefined8 *)PTR_DAT_04cb81e8,uVar17,0);
                      Dino_BusSand_App_UI_HudPanel__PictureHeight_230eddc(lVar14);
                      if (lVar18 == 0) goto LAB_0240e440;
                      Dino_BusSand_App_GameApp__Toast_2169dc0(lVar18,uVar17,0);
                    }
                  }
                  uVar7 = Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(lVar14);
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
    Dino_BusSand_App_UI_FailPanel__NopeButton_2317cf8(*(undefined8 *)(lVar13 + 0x20),0);
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar14 = FUN_023d0b9c(0);
    lVar18 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uVar5 = *(undefined4 *)(lVar13 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb1c70);
    }
    Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar5,0);
    uVar17 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    if (lVar18 != 0) {
      FUN_01e7704c(lVar18,uVar17);
      FUN_01e76ff0(lVar18,0,uVar17);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb81b8,lVar18,0);
      if (lVar14 != 0) {
        uVar7 = Dino_BusSand_App_GameApp__Toast_2166a6c(lVar14,uVar17,0);
        return uVar7;
      }
    }
    goto LAB_0240dc2c;
  }
  if (*(char *)(lVar14 + 0x4c) != '\0') {
    return uVar7;
  }
  Dino_BusSand_App_UI_HudPanel__CancelActive_230dc30(lVar14);
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar14 = FUN_022c78f0(0);
  puVar2 = PTR_DAT_04cad568;
  if (lVar14 == 0) {
    return 0;
  }
  uVar17 = 0;
  if ((bRam0000000004f9c84f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,0);
    FUN_02132f7c(PTR_DAT_04cbb588);
    bRam0000000004f9c84f = 1;
    uVar17 = extraout_x1_01;
  }
  puVar3 = PTR_DAT_04cbb588;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar17 = extraout_x1_02;
  }
  puVar2 = PTR_DAT_04cab1f0;
  uVar12 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9c827 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar17);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c827 = 1;
    uVar17 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar17 = extraout_x1_00;
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar17);
    cRam0000000004f9b88a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar2;
  }
  uVar17 = **(undefined8 **)(lVar14 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
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
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar2;
  }
  lVar14 = **(long **)(lVar14 + 0xb8);
  if (lVar14 == 0) {
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
  uVar7 = System_String__IsNullOrEmpty_46d2084(uVar12,0);
  uVar19 = 0;
  if ((uVar7 & 1) != 0) goto LAB_0247539c;
  lVar13 = *(long *)(lVar14 + 0x28);
  uVar17 = Dino_BusSand_AudioHub__Key_23746fc(lVar14,uVar12);
  if (lVar13 == 0) goto LAB_024759b8;
  uVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar13,uVar17,&lStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
  if ((uVar7 & 1) == 0) {
    lVar14 = *(long *)(lVar14 + 0x40);
    uVar17 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,uVar12,0);
    if (lVar14 == 0) goto LAB_024759b8;
    uVar7 = System_Collections_Generic_HashSet_object___Add_37e654c
                      (lVar14,uVar17,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar7 & 1) != 0) {
      uVar17 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar17,0);
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
    Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,lVar14,uVar12);
    uVar19 = 1;
    goto LAB_0247539c;
  }
  lVar13 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
  fVar20 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((lStack_a8 == 0) || (*(long *)(lVar14 + 0x48) == 0)) goto LAB_024759b8;
  uVar17 = *(undefined8 *)(lStack_a8 + 0x10);
  uVar7 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                    (*(long *)(lVar14 + 0x48),uVar17,&fStack_ac,*(undefined8 *)PTR_DAT_04cbb220);
  fVar21 = fVar20 - fStack_ac;
  if ((uVar7 & 1) == 0) {
    fVar21 = _UNK_00e20560;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  if ((0.0 < *(float *)(lStack_a8 + 0x50)) && (fVar21 < *(float *)(lStack_a8 + 0x50)))
  goto LAB_02475398;
  if (*(int *)(lStack_a8 + 0x58) < 1) {
    lVar13 = 0;
  }
  else {
    if (*(long *)(lVar14 + 0x68) == 0) goto LAB_024759b8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_108,*(long *)(lVar14 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    puVar3 = PTR_DAT_04cbb208;
    iVar27 = 0;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    lStack_c0 = lStack_f8;
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
    lVar13 = 0;
    while (lVar9 = lVar13,
          uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_d0,*(undefined8 *)puVar3), lVar18 = lStack_c0, (uVar7 & 1) != 0
          ) {
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar17,0);
      lVar13 = lVar9;
      if (((((uVar7 & 1) == 0) &&
           (uVar7 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar18), (uVar7 & 1) != 0)) &&
          (*(float *)(lVar18 + 0x38) <= 0.0)) &&
         ((iVar27 = iVar27 + 1, lVar13 = lVar18, lVar9 != 0 &&
          (lVar13 = lVar9, *(float *)(lVar18 + 0x30) < *(float *)(lVar9 + 0x30))))) {
        lVar13 = lVar18;
      }
    }
    FUN_01e7a8a8(&uStack_108);
    if (lStack_a8 == 0) goto LAB_024759b8;
    lVar13 = 0;
    if (*(int *)(lStack_a8 + 0x58) <= iVar27) {
      lVar13 = lVar9;
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
      if (*(long *)(lVar14 + 0x60) == 0) goto LAB_024759b8;
      uVar7 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(lVar14 + 0x60),uVar17,&iStack_d4,*(undefined8 *)PTR_DAT_04cad650)
      ;
      if ((uVar7 & 1) == 0) goto LAB_02475534;
      iVar27 = iStack_d4 + 1;
    }
    if ((lStack_a8 == 0) || (*(long *)(lVar14 + 0x60) == 0)) goto LAB_024759b8;
    iVar1 = *(int *)(lStack_a8 + 0x70);
    iVar16 = iVar27;
    if (iVar1 <= iVar27) {
      iVar16 = iVar1;
    }
    if (0 < iVar1) {
      iVar27 = iVar16;
    }
    System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
              (*(long *)(lVar14 + 0x60),uVar17,iVar27,*(undefined8 *)PTR_DAT_04cad660);
  }
  if ((*(long *)(lVar14 + 0x48) == 0) ||
     (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                (fVar20,*(long *)(lVar14 + 0x48),uVar17,*(undefined8 *)PTR_DAT_04cbb128),
     lStack_a8 == 0)) goto LAB_024759b8;
  lVar18 = *(long *)(lStack_a8 + 0x80);
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) < 1)) {
LAB_02475720:
    uVar19 = 0;
  }
  else {
    uVar5 = Dino_BusSand_AudioHub__PickClip_2375c0c(lVar14);
    lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar18,uVar5,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar18 == 0) goto LAB_024759b8;
    lVar9 = Dino_BusSand_AudioHub__Clip_23742fc(lVar14,*(undefined8 *)(lVar18 + 0x10));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar7 & 1) == 0) goto LAB_02475720;
    if (lStack_a8 == 0) goto LAB_024759b8;
    iVar16 = *(int *)(lStack_a8 + 0x5c);
    if (iVar16 < 1) {
      iVar16 = 0x80;
    }
    lVar10 = Dino_BusSand_AudioHub__Acquire_2375f30(lVar14,iVar16);
    uVar19 = 0;
    if (lVar10 != 0) {
      if ((lVar13 != 0) && (lVar13 != lVar10)) {
        *(undefined4 *)(lVar13 + 0x38) = 0x42200000;
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
      if ((lStack_a8 == 0) || (lVar13 = *(long *)(lVar10 + 0x10), lVar13 == 0)) goto LAB_024759b8;
      fVar29 = *(float *)(lStack_a8 + 0x68);
      uVar7 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar13,0);
      if ((uVar7 & 1) != 0) {
        UnityEngine_AudioSource__Stop_43488b8(lVar13,0);
      }
      UnityEngine_AudioSource__set_clip_434875c(lVar13,lVar9,0);
      UnityEngine_AudioSource__set_loop_4348b90(lVar13,0,0);
      *(undefined8 *)(lVar10 + 0x18) = uVar17;
      thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar17);
      if (lStack_a8 == 0) goto LAB_024759b8;
      uVar7 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a8 + 0x20),0);
      puVar15 = (undefined8 *)PTR_DAT_04cbb228;
      if ((uVar7 & 1) == 0) {
        if (lStack_a8 == 0) goto LAB_024759b8;
        puVar15 = (undefined8 *)(lStack_a8 + 0x20);
      }
      *(undefined8 *)(lVar10 + 0x20) = *puVar15;
      thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20));
      lVar11 = *(long *)puVar2;
      *(int *)(lVar10 + 0x28) = iVar16;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar26 = (float)func_0x049b5300(0x41200000,(fVar28 + fVar26 + fVar21) / 20.0);
      fVar26 = fVar26 * 1.0;
      fVar21 = 4.0;
      if (fVar26 <= 4.0) {
        fVar21 = fVar26;
      }
      *(undefined8 *)(lVar10 + 0x34) = _UNK_00e698b8;
      fVar28 = 0.0;
      if (0.0 <= fVar26) {
        fVar28 = fVar21;
      }
      *(float *)(lVar10 + 0x2c) = fVar28;
      *(float *)(lVar10 + 0x30) = fVar20;
      fVar21 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(lVar14,*(undefined8 *)(lVar10 + 0x20));
      fVar28 = fVar28 * fVar21;
      fVar21 = 1.0;
      if (fVar28 <= 1.0) {
        fVar21 = fVar28;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar28) {
        fVar26 = fVar21;
      }
      UnityEngine_AudioSource__set_volume_434840c(fVar26,lVar13,0);
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
      UnityEngine_AudioSource__set_pitch_43484e0(fVar28,lVar13,0);
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
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar21,lVar13,0);
      if (lVar9 == 0) goto LAB_024759b8;
      iVar27 = *(int *)(lVar18 + 0x1c);
      fVar26 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar9,0);
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
      UnityEngine_AudioSource__set_time_4348598(fVar26,lVar13,0);
      fVar21 = (float)*(int *)(lVar18 + 0x28) / 1000.0 + 0.0;
      if (fVar21 <= _UNK_00e20a7c) {
        UnityEngine_AudioSource__Play_4348894(lVar13,0);
      }
      else {
        dVar23 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
        UnityEngine_AudioSource__PlayScheduled_434889c(dVar23 + (double)fVar21,lVar13,0);
        fVar22 = fVar20 + fVar21 + _UNK_00e2043c;
      }
      *(float *)(lVar10 + 0x3c) = fVar22;
      uVar19 = 1;
    }
  }
  if ((lStack_a8 != 0) &&
     ((*(float *)(lStack_a8 + 0x78) <= 0.0 ||
      (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(lStack_a8 + 0x74),lVar14), lStack_a8 != 0
      )))) {
    if (*(long *)(lStack_a8 + 0x88) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_f0,*(long *)(lStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
      puVar2 = PTR_DAT_04cab6c8;
      uStack_108 = 0;
      puStack_100 = &uStack_f0;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_f0,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
        uVar6 = Dino_BusSand_AudioHub__PlayDepth_2375064
                          (0x3f800000,0x3f800000,0,0,lVar14,uStack_e0,1);
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

