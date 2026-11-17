/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$OnBuy
void Dino_BusSand_App_UI_RemoveAdsPanel__OnBuy (Dino_BusSand_App_UI_RemoveAdsPanel_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$OnBuy
   void Dino_BusSand_App_UI_RemoveAdsPanel__OnBuy (Dino_BusSand_App_UI_RemoveAdsPanel_o* __this,
   int32_t item, const MethodInfo* method); */

long * Dino_BusSand_App_UI_RemoveAdsPanel__OnBuy_22b5308(long *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar23;
  uint uVar24;
  char cVar25;
  int *piVar26;
  long *plVar27;
  undefined8 uVar28;
  long *plVar29;
  uint uVar30;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  plVar17 = param_1;
  if ((bRam0000000004f9c2e4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6268);
    FUN_02132f7c(PTR_DAT_04cb6270);
    plVar17 = (long *)FUN_02132f7c(PTR_DAT_04cb6138);
    bRam0000000004f9c2e4 = 1;
  }
  if ((*(char *)((long)param_1 + 0x3c) != '\0') || (*(char *)((long)param_1 + 0x2c) != '\0')) {
    return plVar17;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb6138 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = Dino_BusSand_App_UI_RemoveAdsPanel__get_Offered_22b3060();
  puVar3 = PTR_DAT_04cac7b8;
  if ((uVar18 & 1) == 0) {
    uVar20 = 0;
    if ((bRam0000000004f9bc92 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004f9bc92 = 1;
      uVar20 = extraout_x1;
    }
    puVar3 = PTR_DAT_04ca9ae8;
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0,uVar20);
      cRam0000000004f9b94d = '\x01';
    }
    puVar4 = PTR_DAT_04cad1b0;
    uVar20 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar17 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
    if (((ulong)plVar17 & 1) == 0) {
      return plVar17;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar5 = PTR_DAT_04cb1b30;
    puVar3 = PTR_DAT_04ca9ae8;
    lVar19 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((bRam0000000004f9bc7a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04caa210);
      FUN_02132f7c(PTR_DAT_04cb1b38);
      FUN_02132f7c(PTR_DAT_04cad3f8);
      FUN_02132f7c(PTR_DAT_04cb1b40);
      FUN_02132f7c(PTR_DAT_04cb1b48);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cb1b50);
      FUN_02132f7c(PTR_DAT_04cb1b58);
      FUN_02132f7c(PTR_DAT_04cb1b60);
      FUN_02132f7c(PTR_DAT_04cb1b30);
      FUN_02132f7c(PTR_DAT_04cad4c0);
      bRam0000000004f9bc7a = 1;
    }
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
    System_Object___ctor_4870e5c(lVar13,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar17 = (long *)UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    if (((ulong)plVar17 & 1) != 0) {
      return plVar17;
    }
    if (param_1 != (long *)0x0) {
      if (*(char *)((long)param_1 + 0x2c) != '\0') {
        return plVar17;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      *(undefined1 *)((long)param_1 + 0x2c) = 1;
      if (lVar19 == 0) goto LAB_022fedc4;
      System_Collections_Generic_List_object___Remove_3a830f8
                (lVar19,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
      (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
      lVar19 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar13 == 0) goto LAB_022fedc4;
      plVar17 = (long *)(lVar13 + 0x10);
      *plVar17 = lVar19;
      thunk_FUN_02134474(plVar17,lVar19);
      if (*plVar17 == 0) goto LAB_022fedc4;
      lVar19 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (*plVar17,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*plVar17 == 0) goto LAB_022fedc4;
      lVar15 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                         (*plVar17,*(undefined8 *)PTR_DAT_04cb1b38);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
      if ((uVar18 & 1) != 0) {
        uVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar20,lVar13,*(undefined8 *)PTR_DAT_04cb1b58,0);
        if (lVar15 == 0) goto LAB_022fedc4;
        uVar18 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar15,uVar20,0);
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          plVar17 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
          if (((ulong)plVar17 & 1) == 0) {
            return plVar17;
          }
          if (lVar19 != 0) {
            if ((bRam0000000004fa82e3 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7608,0,0);
              bRam0000000004fa82e3 = 1;
            }
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar13 = *(long *)(lVar19 + 0x10);
            if (lVar13 != 0) {
              if (pcRam0000000004fa82f0 == (code *)0x0) {
                pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
              }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar17 = (long *)(*pcRam0000000004fa82f0)(lVar13,0);
              return plVar17;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar19,0);
          }
          goto LAB_022fedc4;
        }
      }
      lVar15 = *param_1;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
      if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48))
      {
        bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
        if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50)
           ) goto LAB_022fed94;
      }
      if (*plVar17 != 0) {
        uVar18 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar17,0);
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar18 = UnityEngine_Application__get_isPlaying_4351eec(0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
            if ((uVar18 & 1) != 0) {
              if (lVar19 == 0) goto LAB_022fedc4;
              UnityEngine_Behaviour__set_enabled_43bc50c(lVar19,0,0);
            }
            lVar19 = *plVar17;
            if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar19 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar19,0);
            if (lVar19 != 0) {
              UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar19,0,0);
              plVar17 = (long *)Dino_BusSand_App_UI_UiMotion__Fade_2291234
                                          (0,_UNK_00e207cc,0,lVar19,0);
              lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(lVar19,lVar13,*(undefined8 *)PTR_DAT_04cb1b60,0);
              if (plVar17 != (long *)0x0) {
                plVar17[8] = lVar19;
                thunk_FUN_02134474(plVar17 + 8,lVar19,0);
                return plVar17;
              }
            }
            goto LAB_022fedc4;
          }
        }
LAB_022fed94:
        lVar19 = *plVar17;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar3 = PTR_DAT_04ca9ae8;
        uVar20 = 0;
        if ((bRam0000000004fa8603 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0);
          bRam0000000004fa8603 = 1;
          uVar20 = extraout_x1_00;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar20 = extraout_x1_01;
        }
        puVar3 = PTR_DAT_04cf6418;
        if ((bRam0000000004fa8602 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6418,uVar20);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa8602 = 1;
        }
        if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
          FUN_0216b4cc();
        }
        uVar20 = 0;
        if (lVar19 != 0) {
          uVar20 = *(undefined8 *)(lVar19 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (pcRam0000000004fa8680 == (code *)0x0) {
          pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
        }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar17 = (long *)(*pcRam0000000004fa8680)(0,uVar20);
        return plVar17;
      }
    }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar19 = *(long *)PTR_DAT_04cac7b8;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar19 = *(long *)puVar3;
  }
  lVar19 = **(long **)(lVar19 + 0xb8);
  if (lVar19 == 0) {
LAB_023b5520:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar18 = (**(code **)(lVar19 + 0x18))
                     (*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
  puVar3 = PTR_DAT_04cb6278;
  if ((uVar18 & 1) != 0) {
    *(undefined4 *)(param_1 + 7) = param_2;
    *(undefined2 *)((long)param_1 + 0x3c) = 0x101;
    lVar19 = Dino_BusSand_App_UI_StoreWaitingPanel__Open_22bb848(0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
    if ((uVar18 & 1) != 0) {
      uVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar20,param_1,*(undefined8 *)PTR_DAT_04cb6268,0);
      if (lVar19 == 0) goto LAB_023b5520;
      *(undefined8 *)(lVar19 + 0x38) = uVar20;
      thunk_FUN_02134474((undefined8 *)(lVar19 + 0x38),uVar20);
    }
    lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(lVar19,param_1,*(undefined8 *)PTR_DAT_04cb6270,0);
    if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04cad2f0;
    if ((bRam0000000004f9b907 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac420,lVar19,0);
      FUN_02132f7c(PTR_DAT_04cac5c0);
      FUN_02132f7c(PTR_DAT_04cac498);
      FUN_02132f7c(PTR_DAT_04cad2f8);
      FUN_02132f7c(PTR_DAT_04cad1f0);
      FUN_02132f7c(PTR_DAT_04ca9c20);
      FUN_02132f7c(PTR_DAT_04cac018);
      FUN_02132f7c(PTR_DAT_04cad300);
      FUN_02132f7c(PTR_DAT_04cad2f0);
      FUN_02132f7c(PTR_DAT_04cad0e0);
      FUN_02132f7c(PTR_DAT_04cad268);
      FUN_02132f7c(PTR_DAT_04cad308);
      FUN_02132f7c(PTR_DAT_04cad270);
      FUN_02132f7c(PTR_DAT_04cad310);
      FUN_02132f7c(PTR_DAT_04cad318);
      FUN_02132f7c(PTR_DAT_04cad2a8);
      FUN_02132f7c(PTR_DAT_04cad320);
      FUN_02132f7c(PTR_DAT_04cad328);
      FUN_02132f7c(PTR_DAT_04ca9c30);
      FUN_02132f7c(PTR_DAT_04cad200);
      bRam0000000004f9b907 = 1;
    }
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Object___ctor_4870e5c(lVar13,0);
    puVar4 = PTR_DAT_04cad200;
    puVar3 = PTR_DAT_04cac018;
    if (lVar13 != 0) {
      plVar17 = (long *)(lVar13 + 0x28);
      *plVar17 = lVar19;
      *(undefined4 *)(lVar13 + 0x10) = param_2;
      thunk_FUN_02134474(plVar17,lVar19);
      uVar12 = *(undefined4 *)(lVar13 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar19 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,uVar12,0);
      plVar29 = (long *)(lVar13 + 0x18);
      *plVar29 = lVar19;
      thunk_FUN_02134474(plVar29,lVar19);
      puVar4 = PTR_DAT_04ca9c30;
      puVar3 = PTR_DAT_04ca9c20;
      if (*plVar29 == 0) {
        lVar19 = *plVar17;
        if (lVar19 == 0) {
          return (long *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x0227c364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar17 = (long *)(**(code **)(lVar19 + 0x18))
                                    (*(undefined8 *)(lVar19 + 0x40),0,*(undefined8 *)(lVar19 + 0x28)
                                    );
        return plVar17;
      }
      uVar20 = Dino_BusSand_App_MiniJson__Get_21565a8(*plVar29,*(undefined8 *)PTR_DAT_04cad2a8,0);
      lVar19 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar20,*(undefined8 *)puVar4,0);
      plVar27 = (long *)(lVar13 + 0x20);
      *plVar27 = lVar19;
      thunk_FUN_02134474(plVar27,lVar19);
      plVar14 = (long *)FUN_02133068(*(undefined8 *)puVar3,4);
      puVar4 = PTR_DAT_04cad268;
      if (plVar14 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cad268 != 0) &&
           (lVar19 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar14 + 0x40)),
           lVar19 == 0)) {
LAB_0227c514:
          uVar20 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar20,0);
        }
        if ((int)plVar14[3] != 0) {
          plVar14[4] = *(long *)puVar4;
          thunk_FUN_02134474();
          lVar19 = *plVar27;
          if ((lVar19 != 0) &&
             (lVar15 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0))
          goto LAB_0227c514;
          puVar5 = PTR_DAT_04cad328;
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
            plVar14[5] = lVar19;
            thunk_FUN_02134474(plVar14 + 5,lVar19);
            lVar19 = *(long *)puVar5;
            if ((lVar19 != 0) &&
               (lVar19 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
            goto LAB_0227c514;
            if (2 < *(uint *)(plVar14 + 3)) {
              plVar14[6] = *(long *)puVar5;
              thunk_FUN_02134474();
              uStack_68 = CONCAT44(*(undefined4 *)(lVar13 + 0x10),(undefined4)uStack_68);
              lVar19 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),(long)&uStack_68 + 4);
              if ((lVar19 != 0) &&
                 (lVar15 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0)
                 ) goto LAB_0227c514;
              puVar8 = PTR_DAT_04cad308;
              puVar6 = PTR_DAT_04cac5c0;
              puVar5 = PTR_DAT_04cac498;
              if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                plVar14[7] = lVar19;
                thunk_FUN_02134474(plVar14 + 7,lVar19);
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                puVar7 = PTR_DAT_04cad1f0;
                Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar8,plVar14);
                uVar12 = *(undefined4 *)(lVar13 + 0x10);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_GameTracking__IapClick_221875c(uVar12,0);
                uVar12 = *(undefined4 *)(lVar13 + 0x10);
                if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar18 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar12);
                if ((uVar18 & 1) == 0) {
                  plVar29 = (long *)FUN_02133068(*(undefined8 *)puVar3,4);
                  if (plVar29 != (long *)0x0) {
                    if ((*(long *)puVar4 != 0) &&
                       (lVar19 = thunk_FUN_0216e7a0(*(long *)puVar4,*(undefined8 *)(*plVar29 + 0x40)
                                                   ), lVar19 == 0)) goto LAB_0227c514;
                    if ((int)plVar29[3] != 0) {
                      plVar29[4] = *(long *)puVar4;
                      thunk_FUN_02134474();
                      lVar19 = *plVar27;
                      if ((lVar19 != 0) &&
                         (lVar15 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar15 == 0)) goto LAB_0227c514;
                      if ((*(uint *)(plVar29 + 3) & 0xfffffffe) != 0) {
                        plVar29[5] = lVar19;
                        thunk_FUN_02134474(plVar29 + 5,lVar19);
                        puVar3 = PTR_DAT_04cad0e0;
                        if ((*(long *)PTR_DAT_04cad0e0 != 0) &&
                           (lVar19 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad0e0,
                                                        *(undefined8 *)(*plVar29 + 0x40)),
                           lVar19 == 0)) goto LAB_0227c514;
                        if (2 < *(uint *)(plVar29 + 3)) {
                          plVar29[6] = *(long *)puVar3;
                          thunk_FUN_02134474();
                          puVar3 = PTR_DAT_04cad320;
                          if ((*(long *)PTR_DAT_04cad320 != 0) &&
                             (lVar19 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad320,
                                                          *(undefined8 *)(*plVar29 + 0x40)),
                             lVar19 == 0)) goto LAB_0227c514;
                          if ((*(uint *)(plVar29 + 3) & 0xfffffffc) != 0) {
                            plVar29[7] = *(long *)puVar3;
                            thunk_FUN_02134474();
                            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            Dino_BusSand_App_Analytics__Log_216d0c8
                                      (*(undefined8 *)PTR_DAT_04cad310,plVar29);
                            uVar12 = *(undefined4 *)(lVar13 + 0x10);
                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            plVar29 = (long *)Dino_BusSand_App_Meta_GameTracking__IapFailed_22189dc
                                                        (uVar12,*(undefined8 *)PTR_DAT_04cad318,0,0)
                            ;
                            lVar19 = *plVar17;
                            if (lVar19 == 0) {
                              return plVar29;
                            }
                            plVar17 = (long *)(**(code **)(lVar19 + 0x18))
                                                        (*(undefined8 *)(lVar19 + 0x40),0,
                                                         *(undefined8 *)(lVar19 + 0x28));
                            return plVar17;
                          }
                        }
                      }
                    }
                    goto LAB_0227c510;
                  }
                }
                else {
                  lVar19 = *(long *)puVar7;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar19 = *(long *)puVar7;
                  }
                  puVar16 = (undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x28);
                  *puVar16 = 0;
                  thunk_FUN_02134474(puVar16,0);
                  puVar16 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
                  *puVar16 = 0;
                  thunk_FUN_02134474(puVar16,0);
                  uVar20 = Dino_BusSand_App_MiniJson__Get_21565a8
                                     (*plVar29,*(undefined8 *)PTR_DAT_04cad270,0);
                  iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar20,0,0);
                  if (iVar10 == 9) {
                    lVar19 = *plVar27;
                    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Iap__MarkStarted_217bbbc(lVar19);
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                  lVar19 = *(long *)puVar7;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar19 = *(long *)puVar7;
                  }
                  uVar28 = *(undefined8 *)(lVar13 + 0x20);
                  plVar17 = (long *)**(undefined8 **)(lVar19 + 0xb8);
                  uVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                  System_Action_bool____ctor_35ee0e8
                            (uVar20,lVar13,*(undefined8 *)PTR_DAT_04cad300,0);
                  if (plVar17 != (long *)0x0) {
                    lVar19 = *plVar17;
                    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar18 != 0) {
                      piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_04cad2f8) {
                          puVar16 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                          goto LAB_0227c4dc;
                        }
                        uVar18 = uVar18 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04cad2f8,0);
LAB_0227c4dc:
                    plVar17 = (long *)(*(code *)*puVar16)(plVar17,uVar28,uVar20,puVar16[1]);
                    return plVar17;
                  }
                }
                goto LAB_0227c520;
              }
            }
          }
        }
LAB_0227c510:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
LAB_0227c520:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c302 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6278);
    FUN_02132f7c(PTR_DAT_04cb6280);
    FUN_02132f7c(PTR_DAT_04cb6288);
    FUN_02132f7c(PTR_DAT_04caec20);
    bRam0000000004f9c302 = 1;
  }
  lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  Dino_BusSand_App_UI_StoreTipsPanel_Request___ctor_22bb108(lVar19,0);
  puVar3 = PTR_DAT_04ca9d18;
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar19 + 0x10) = 3;
  lVar15 = *(long *)puVar3;
  lVar13 = *(long *)(lVar15 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar15);
    lVar13 = *(long *)(lVar15 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cab550;
  lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  puVar5 = PTR_DAT_04cb6288;
  uVar20 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar20 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar5,uVar20,0);
  *(undefined8 *)(lVar19 + 0x18) = uVar20;
  thunk_FUN_02134474();
  lVar15 = *(long *)puVar3;
  lVar13 = *(long *)(lVar15 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar15);
    lVar13 = *(long *)(lVar15 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cb6280;
  lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  uVar20 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar4,**(undefined8 **)(lVar13 + 0xb8),0);
  *(undefined8 *)(lVar19 + 0x20) = uVar20;
  thunk_FUN_02134474();
  lVar15 = *(long *)puVar3;
  lVar13 = *(long *)(lVar15 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar15);
    lVar13 = *(long *)(lVar15 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04caec20;
  lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  uVar20 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar13 + 0xb8),0);
  *(undefined8 *)(lVar19 + 0x28) = uVar20;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar19 + 0x30) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar19 + 0x30),0);
  if ((bRam0000000004f9c2ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6468);
    FUN_02132f7c(PTR_DAT_04cb6470);
    FUN_02132f7c(PTR_DAT_04cb6478);
    bRam0000000004f9c2ff = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar13 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  if ((lVar19 == 0) || ((uVar18 & 1) != 0)) {
    return (long *)0x0;
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar18 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                     (lVar13,*(undefined8 *)PTR_DAT_04cb6468);
  if ((uVar18 & 1) != 0) {
    return (long *)0x0;
  }
  lVar15 = *(long *)PTR_DAT_04cb6478;
  lVar23 = *(long *)PTR_DAT_04cb6470;
  if (*(long *)(lVar23 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar23 + 0x38) == 0) {
      FUN_0216b4cc(lVar23);
    }
  }
  puVar3 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar20 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar17 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar20,0);
  uVar20 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar23 + 0x38),0);
  if (plVar17 == (long *)0x0) goto LAB_02a45eb0;
  uVar11 = (**(code **)(*plVar17 + 0x2b8))(plVar17,uVar20,*(undefined8 *)(*plVar17 + 0x2c0));
  puVar4 = PTR_DAT_04ca9ae8;
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar20 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar15,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
    if ((uVar18 & 1) != 0) {
      uVar20 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar15,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar20,0);
      return (long *)0x0;
    }
    uVar28 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar13,4,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    lVar21 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar20,uVar28,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar21 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar13,4,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar21 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar15,uVar20,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar18 = UnityEngine_Object__op_Equality_43c6f30(lVar21,0,0);
    if ((uVar18 & 1) == 0) goto LAB_02a45794;
    plVar17 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar20 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar3 + 0xe0));
    }
    lVar21 = System_Type__GetTypeFromHandle_483f0b4(uVar20,0);
    if (plVar17 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar21 != 0) &&
       (lVar22 = thunk_FUN_0216e7a0(lVar21,*(undefined8 *)(*plVar17 + 0x40)), lVar22 == 0)) {
      uVar20 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar20,0);
    }
    if ((int)plVar17[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar17[4] = lVar21;
    thunk_FUN_02134474(plVar17 + 4,lVar21);
    lVar21 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar21,lVar15,plVar17,0);
    lVar22 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar13,4,0);
    if (((lVar22 == 0) ||
        (lVar22 = UnityEngine_Component__get_gameObject_43bcde8(lVar22,0), lVar22 == 0)) ||
       (uVar12 = UnityEngine_GameObject__get_layer_43c1118(lVar22,0), lVar21 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar21,uVar12,0);
    lVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar21,0);
    uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar13,4,0);
    if (lVar22 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar22,uVar20,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar21,lVar15,0);
  plVar17 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar21,0);
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else if (*plVar17 != *(long *)PTR_DAT_04cabdb0) {
    plVar17 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = UnityEngine_Object__op_Inequality_43c8dec(plVar17,0,0);
  if ((uVar18 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar3 = PTR_DAT_04cacfc0;
    if (plVar17 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar17,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),plVar17,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar3 + 0xb8),
               (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],plVar17,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar3 + 0xb8),
               (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],plVar17,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar22 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar22 + 0xc),*(undefined4 *)(lVar22 + 0x10),
               *(undefined4 *)(lVar22 + 0x14),plVar17,0);
  }
  lVar22 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar21,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar18 = UnityEngine_Object__op_Equality_43c6f30(lVar22,0,0);
  if ((uVar18 & 1) != 0) {
    lVar22 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar21,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar22 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar22,0x19,0);
    if (*(long *)(lVar13 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar13 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar3 = PTR_DAT_04cabac0;
      iVar10 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar3), lVar9 = lStack_80,
            (uVar18 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if ((uVar18 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar9 + 0x2c) == '\0') && (*(int *)(lVar9 + 0x28) == 4)) {
            iVar10 = iVar10 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar22,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar22,iVar10 * 0x14 + 0xfb4,0);
      uVar20 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar21,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
      if ((uVar18 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar21,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar21,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar21,0);
      plVar17 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar21,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
      lVar23 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar21,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar5 = PTR_DAT_04cae1a8;
      puVar3 = PTR_DAT_04cae1a0;
      if (lVar23 != 0) {
        uVar24 = *(uint *)(lVar23 + 0x18);
        if (0 < (int)uVar24) {
          uVar30 = 0;
          do {
            if (uVar24 <= uVar30) goto LAB_02a45eb4;
            lVar22 = *(long *)(lVar23 + (long)(int)uVar30 * 8 + 0x20);
            if (lVar22 == 0) goto LAB_02a45eb0;
            uVar20 = UnityEngine_Component__get_gameObject_43bcde8(lVar22,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar18 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,lVar21,0);
            if ((uVar18 & 1) != 0) {
              uVar20 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar22,*(undefined8 *)puVar3);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
              if ((uVar18 & 1) != 0) {
                lVar22 = UnityEngine_Component__get_gameObject_43bcde8(lVar22,0);
                if (lVar22 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar22,*(undefined8 *)puVar5);
              }
            }
            uVar24 = *(uint *)(lVar23 + 0x18);
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < (int)uVar24);
        }
        if (plVar17 != (long *)0x0) {
          plVar17[4] = lVar15;
          thunk_FUN_02134474(plVar17 + 4,lVar15);
          *(undefined4 *)(plVar17 + 5) = 4;
          lVar13 = *(long *)(lVar13 + 0x38);
          if (lVar13 != 0) {
            lVar23 = *(long *)(lVar13 + 0x10);
            lVar22 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar23 != 0) {
              uVar24 = *(uint *)(lVar13 + 0x18);
              if (uVar24 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar24 + 1;
                plVar29 = (long *)(lVar23 + (long)(int)uVar24 * 8 + 0x20);
                *plVar29 = (long)plVar17;
                thunk_FUN_02134474(plVar29,plVar17);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar13,plVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
              puVar4 = PTR_DAT_04cb4ce0;
              puVar3 = PTR_DAT_04cad7b8;
              if ((uVar11 & 1) == 0) {
                lVar13 = *(long *)PTR_DAT_04cb4ce0;
                cVar25 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar20 = UnityEngine_GameObject__get_transform_43c1048(lVar21,0);
                lVar13 = *(long *)puVar3;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar13);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar20,lVar15,0);
                lVar13 = *(long *)puVar4;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar13);
                  lVar13 = *(long *)puVar4;
                }
                cVar25 = **(char **)(lVar13 + 0xb8);
              }
              acStack_6c[0] = cVar25 != '\0';
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar13);
                lVar13 = *(long *)puVar4;
              }
              lVar15 = *(long *)(lVar13 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar15 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar13);
                  lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
                }
                *(undefined1 *)(lVar15 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar17 + 0x178))(plVar17,lVar19,*(undefined8 *)(*plVar17 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar19 = *(long *)puVar4;
                uVar2 = *puStack_b8;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar19 = *(long *)puVar4;
                }
                *(undefined1 *)(*(long *)(lVar19 + 0xb8) + 1) = uVar2;
              }
              uVar20 = *puStack_b0;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar20,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar19 = *(long *)puVar4;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar19 = *(long *)puVar4;
                  }
                  lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
                  if (lVar19 != 0) {
                    (**(code **)(lVar19 + 0x18))
                              (*(undefined8 *)(lVar19 + 0x40),plVar17,*(undefined8 *)(lVar19 + 0x28)
                              );
                  }
                }
                uVar20 = UnityEngine_GameObject__get_transform_43c1048(lVar21,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar20,0);
                uVar20 = UnityEngine_GameObject__get_transform_43c1048(lVar21,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar20,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar17,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar17,0);
                return plVar17;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

