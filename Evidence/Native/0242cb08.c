/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass30_0$$<OnOpen>b__1
void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__1 (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0242ad84) */
/* WARNING: Removing unreachable block (ram,0x0242ad88) */
/* WARNING: Removing unreachable block (ram,0x0242ad90) */
/* WARNING: Removing unreachable block (ram,0x0242ad9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass30_0$$<OnOpen>b__1
   void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__1
   (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__1_232cb08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_04cb8f18;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c602 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208,1,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad4b8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8f20);
    FUN_02132f7c(PTR_DAT_04cb8f18);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caf238);
    FUN_02132f7c(PTR_DAT_04caf258);
    FUN_02132f7c(PTR_DAT_04caf280);
    FUN_02132f7c(PTR_DAT_04cb8e00);
    FUN_02132f7c(PTR_DAT_04cb8e40);
    FUN_02132f7c(PTR_DAT_04caf2e8);
    FUN_02132f7c(PTR_DAT_04cb8ef8);
    FUN_02132f7c(PTR_DAT_04caf308);
    FUN_02132f7c(PTR_DAT_04caf330);
    FUN_02132f7c(PTR_DAT_04caf338);
    FUN_02132f7c(PTR_DAT_04caf340);
    bRam0000000004f9c602 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass48_0___ctor_232ce28(lVar6,0);
  uVar12 = *(undefined8 *)(lVar10 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((((uVar7 & 1) != 0) || (*(char *)(lVar10 + 0x2c) != '\0')) ||
     (*(char *)(lVar10 + 0x41) != '\0')) {
    return;
  }
  *(undefined1 *)(lVar10 + 0x42) = 0;
  if ((*(long *)(lVar10 + 0x68) != 0) &&
     (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x68),0), lVar8 != 0)
     ) {
    UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
    if (*(long *)(lVar10 + 0x68) != 0) {
      UnityEngine_Transform__SetAsLastSibling_43d4684(*(long *)(lVar10 + 0x68),0);
      if (*(long *)(lVar10 + 0x68) != 0) {
        uVar12 = UnityEngine_Transform__Find_43d4bec
                           (*(long *)(lVar10 + 0x68),*(undefined8 *)PTR_DAT_04caf280,0);
        lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cad4b8,7);
        puVar1 = PTR_DAT_04caa038;
        lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,1);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) != 0) {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cb8e00;
            thunk_FUN_02134474();
            if (lVar8 == 0) goto LAB_0242aef8;
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(long *)(lVar8 + 0x20) = lVar9;
              thunk_FUN_02134474((long *)(lVar8 + 0x20),lVar9);
              lVar9 = FUN_02133068(*(undefined8 *)puVar1,2);
              if (lVar9 == 0) goto LAB_0242aef8;
              if (*(int *)(lVar9 + 0x18) != 0) {
                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cb8e40;
                thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_04caf308;
                  thunk_FUN_02134474();
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                    *(long *)(lVar8 + 0x28) = lVar9;
                    thunk_FUN_02134474((long *)(lVar8 + 0x28),lVar9);
                    lVar9 = FUN_02133068(*(undefined8 *)puVar1,1);
                    if (lVar9 == 0) goto LAB_0242aef8;
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04caf2e8;
                      thunk_FUN_02134474();
                      if (2 < *(uint *)(lVar8 + 0x18)) {
                        *(long *)(lVar8 + 0x30) = lVar9;
                        thunk_FUN_02134474((long *)(lVar8 + 0x30),lVar9);
                        lVar9 = FUN_02133068(*(undefined8 *)puVar1,2);
                        if (lVar9 == 0) goto LAB_0242aef8;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cb8ef8;
                          thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_04caf258;
                            thunk_FUN_02134474();
                            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
                              *(long *)(lVar8 + 0x38) = lVar9;
                              thunk_FUN_02134474((long *)(lVar8 + 0x38),lVar9);
                              lVar9 = FUN_02133068(*(undefined8 *)puVar1,1);
                              if (lVar9 == 0) goto LAB_0242aef8;
                              if (*(int *)(lVar9 + 0x18) != 0) {
                                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04caf338;
                                thunk_FUN_02134474();
                                if (4 < *(uint *)(lVar8 + 0x18)) {
                                  *(long *)(lVar8 + 0x40) = lVar9;
                                  thunk_FUN_02134474((long *)(lVar8 + 0x40),lVar9);
                                  lVar9 = FUN_02133068(*(undefined8 *)puVar1,2);
                                  if (lVar9 == 0) goto LAB_0242aef8;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04caf330;
                                    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
                                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar9 + 0x28) =
                                           *(undefined8 *)PTR_DAT_04caf238;
                                      thunk_FUN_02134474();
                                      if (5 < *(uint *)(lVar8 + 0x18)) {
                                        *(long *)(lVar8 + 0x48) = lVar9;
                                        thunk_FUN_02134474((long *)(lVar8 + 0x48),lVar9);
                                        lVar9 = FUN_02133068(*(undefined8 *)puVar1,1);
                                        if (lVar9 == 0) goto LAB_0242aef8;
                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                          *(undefined8 *)(lVar9 + 0x20) =
                                               *(undefined8 *)PTR_DAT_04caf340;
                                          thunk_FUN_02134474();
                                          if (6 < *(uint *)(lVar8 + 0x18)) {
                                            *(long *)(lVar8 + 0x50) = lVar9;
                                            thunk_FUN_02134474((long *)(lVar8 + 0x50),lVar9);
                                            puVar1 = PTR_DAT_04cad4c0;
                                            if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                                            Dino_BusSand_App_UI_UiMotion__Beats_2290f98
                                                      (_UNK_00e20754,_UNK_00e20aec,uVar12,lVar8,0);
                                            if ((*(long *)(lVar10 + 0x58) != 0) &&
                                               (lVar8 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10),
                                               lVar8 != 0)) {
                                              uVar12 = UnityEngine_Component__get_gameObject_43bcde8
                                                                 (lVar8,0);
                                              lVar8 = *(long *)puVar1;
                                              if (*(int *)(lVar8 + 0xe4) == 0) {
                                                thunk_FUN_0218fdac(lVar8);
                                              }
                                              lVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38
                                                                (uVar12,0);
                                              if (lVar8 != 0) {
                                                UnityEngine_CanvasGroup__set_alpha_467ad3c
                                                          (0,lVar8,0);
                                                if (*(long *)(lVar10 + 0x68) != 0) {
                                                  uVar12 = 
                                                  UnityEngine_Component__get_gameObject_43bcde8
                                                            (*(long *)(lVar10 + 0x68),0);
                                                  lVar8 = *(long *)puVar1;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac(lVar8);
                                                  }
                                                  lVar8 = 
                                                  Dino_BusSand_App_UI_UiMotion__Group_228db38
                                                            (uVar12,0);
                                                  if (lVar6 != 0) {
                                                    plVar11 = (long *)(lVar6 + 0x10);
                                                    *plVar11 = lVar8;
                                                    thunk_FUN_02134474(plVar11,lVar8);
                                                    if (*plVar11 != 0) {
                                                      UnityEngine_CanvasGroup__set_alpha_467ad3c
                                                                (0,*plVar11,0);
                                                      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                                   PTR_DAT_04cac208)
                                                      ;
                                                      System_Action_float____ctor_35f1448
                                                                (uVar12,lVar6,
                                                                 *(undefined8 *)PTR_DAT_04cb8f20,0);
                                                      if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_0218fdac();
                                                      }
                                                      lVar6 = Dino_BusSand_App_Tween__Value_2160f64
                                                                        (0x3e800000,uVar12,0);
                                                      if ((lVar6 != 0) &&
                                                         (lVar6 = 
                                                  Dino_BusSand_App_Tween__SetUnscaled_2160eb8
                                                            (lVar6,1,0), lVar6 != 0)) {
                                                    Dino_BusSand_App_Tween__SetOwner_2160ec0
                                                              (lVar6,lVar10,0);
                                                    puVar1 = PTR_DAT_04cabaf8;
                                                    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    if (cRam0000000004f9b894 == '\0') {
                                                      FUN_02132f7c(PTR_DAT_04cabaf8);
                                                      cRam0000000004f9b894 = '\x01';
                                                    }
                                                    lVar10 = *(long *)puVar1;
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                      lVar10 = *(long *)puVar1;
                                                    }
                                                    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) +
                                                                      0x10);
                                                    if (lVar10 != 0) {
                                                      *(undefined1 *)(lVar10 + 0x194) = 1;
                                                      puVar1 = PTR_DAT_04cabaf8;
                                                      if ((bRam0000000004f9c0ed & 1) == 0) {
                                                        FUN_02132f7c(PTR_DAT_04cac008);
                                                        FUN_02132f7c(PTR_DAT_04cabaf8);
                                                        FUN_02132f7c(PTR_DAT_04cabb68);
                                                        FUN_02132f7c(PTR_DAT_04cb4730);
                                                        bRam0000000004f9c0ed = 1;
                                                      }
                                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                        thunk_FUN_0218fdac();
                                                      }
                                                      if (cRam0000000004f9b894 == '\0') {
                                                        FUN_02132f7c(PTR_DAT_04cabaf8);
                                                        cRam0000000004f9b894 = '\x01';
                                                      }
                                                      lVar10 = *(long *)puVar1;
                                                      if (*(int *)(lVar10 + 0xe4) == 0) {
                                                        thunk_FUN_0218fdac();
                                                        lVar10 = *(long *)puVar1;
                                                      }
                                                      puVar2 = PTR_DAT_04cabb68;
                                                      if (*(long *)(*(long *)(lVar10 + 0xb8) + 0x10)
                                                          != 0) {
                                                        if (*(int *)(lVar10 + 0xe4) == 0) {
                                                          thunk_FUN_0218fdac();
                                                        }
                                                        uVar12 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0
                                                            ();
                                                  uVar12 = System_String__Concat_46c82e0
                                                                     (uVar12,*(undefined8 *)puVar2,0
                                                                     );
                                                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac(*(long *)puVar1);
                                                  }
                                                  if (cRam0000000004f9b894 == '\0') {
                                                    FUN_02132f7c(PTR_DAT_04cabaf8);
                                                    cRam0000000004f9b894 = '\x01';
                                                  }
                                                  lVar10 = *(long *)puVar1;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac();
                                                    lVar10 = *(long *)puVar1;
                                                  }
                                                  uVar4 = UnityEngine_JsonUtility__ToJson_44323ac
                                                                    (*(undefined8 *)
                                                                      (*(long *)(lVar10 + 0xb8) +
                                                                      0x10),0);
                                                  if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  uVar4 = Dino_BusSand_DataPack__Seal_237a35c
                                                                    (uVar4,0);
                                                  uVar5 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0
                                                            ();
                                                  iVar3 = UnityEngine_PlayerPrefs__GetInt_43b5358
                                                                    (uVar5,0,0);
                                                  System_IO_File__WriteAllBytes_47f9a38
                                                            (uVar12,uVar4,0);
                                                  if (iVar3 == 0) {
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    uVar5 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0
                                                            ();
                                                  uVar5 = System_String__Concat_46c82e0
                                                                    (uVar5,*(undefined8 *)
                                                                            PTR_DAT_04cb4730,0);
                                                  System_IO_File__WriteAllBytes_47f9a38
                                                            (uVar5,uVar4,0);
                                                  }
                                                  else {
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    uVar4 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0
                                                            ();
                                                  uVar7 = System_IO_File__Exists_47f230c(uVar4,0);
                                                  if ((uVar7 & 1) != 0) {
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    uVar4 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0
                                                            ();
                                                  uVar5 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0
                                                            ();
                                                  uVar5 = System_String__Concat_46c82e0
                                                                    (uVar5,*(undefined8 *)
                                                                            PTR_DAT_04cb4730,0);
                                                  System_IO_File__Copy_47f89f0(uVar4,uVar5,1,0);
                                                  }
                                                  }
                                                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  uVar4 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0
                                                            ();
                                                  System_IO_File__Copy_47f89f0(uVar12,uVar4,1,0);
                                                  System_IO_File__Delete_47f8b84(uVar12,0);
                                                  if (iVar3 == 0) {
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    uVar12 = 
                                                  Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0
                                                            ();
                                                  UnityEngine_PlayerPrefs__SetInt_43b5300
                                                            (uVar12,1,0);
                                                  UnityEngine_PlayerPrefs__Save_43b5e3c(0);
                                                  }
                                                  lVar10 = *(long *)puVar1;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac();
                                                    lVar10 = *(long *)puVar1;
                                                  }
                                                  *(undefined1 *)(*(long *)(lVar10 + 0xb8) + 0x28) =
                                                       0;
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                            goto LAB_0242aef8;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
LAB_0242aef8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

