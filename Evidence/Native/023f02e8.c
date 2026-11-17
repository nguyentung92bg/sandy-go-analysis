/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$LateUpdate
void Dino_BusSand_App_UI_HomeStage__LateUpdate (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$LateUpdate
   void Dino_BusSand_App_UI_HomeStage__LateUpdate (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__LateUpdate_22f02e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c465 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb7718);
    FUN_02132f7c(PTR_DAT_04cb7720);
    FUN_02132f7c(PTR_DAT_04cb76d8);
    FUN_02132f7c(PTR_DAT_04cb7728);
    FUN_02132f7c(PTR_DAT_04cb7730);
    bRam0000000004f9c465 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar11 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (fVar11 <= 0.0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  puVar3 = PTR_DAT_04cb74a8;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04cb74a8;
  iVar5 = *(int *)(lVar7 + 0xe4);
  *(float *)(param_1 + 0x88) = fVar11 + *(float *)(param_1 + 0x88);
  if (iVar5 == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar8 = *(long *)puVar2;
  uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar10,param_1,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_UI_HomeStage__get_LoadingUp_22ef734();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
      fVar17 = 1.0;
      if ((uVar6 & 1) != 0) goto LAB_023f04b4;
    }
    else {
LAB_023f04b4:
      fVar17 = 0.0;
    }
    lVar7 = *(long *)puVar3;
    iVar5 = *(int *)(lVar7 + 0xe4);
    if (iVar5 == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
      iVar5 = *(int *)(lVar7 + 0xe4);
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    fVar12 = *(float *)(lVar7 + 0x10);
    fVar15 = _UNK_00e2098c;
    if (fVar17 <= fVar12) {
      fVar15 = 8.0;
    }
    fVar16 = -(fVar11 * fVar15);
    if (0.0 <= fVar17 - fVar12) {
      fVar16 = fVar11 * fVar15;
    }
    fVar16 = fVar12 + fVar16;
    if (ABS(fVar17 - fVar12) <= fVar11 * fVar15) {
      fVar16 = fVar17;
    }
    if (iVar5 == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    puVar2 = PTR_DAT_04cad568;
    *(float *)(lVar7 + 0x10) = fVar16;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 != 0) {
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar3;
      }
      Dino_BusSand_GameAudio__SeaAmbience_23858e4
                (*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x10),lVar7,0);
    }
  }
  uVar6 = Dino_BusSand_App_UI_HomeStage__Frame_22f0810(param_1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_UI_HomeStage__get_LoadingUp_22ef734();
    if ((uVar6 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 0;
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_023f080c;
      Dino_BusSand_App_UI_HomeBus__Arrive_22e0684
                (0xc1b00000,0x3f800000,_UNK_00e207cc,*(long *)(param_1 + 0x78),0);
    }
  }
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x90);
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0xf8) == '\0') {
        uVar6 = Dino_BusSand_App_UI_HomeAtelier__get_Browsing_22d44c0(lVar8,0);
        lVar7 = *(long *)(param_1 + 0x78);
        if ((uVar6 & 1) == 0) {
          if (lVar7 == 0) goto LAB_023f080c;
          uVar4 = Dino_BusSand_App_UI_HomeBus__get_Arriving_22e0974(lVar7,0);
          lVar7 = *(long *)(param_1 + 0x78);
          uVar4 = uVar4 ^ 1;
        }
        else {
          uVar4 = 0;
                    /* try { // try from 023f0650 to 024f08f3 has its CatchHandler @ 023f0650
                       catch() { ... } // from try @ 023f0650 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0940 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0db8 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0e28 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0e58 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0e84 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0eb4 with catch @ 023f0650
                       catch() { ... } // from try @ 023f0ee0 with catch @ 023f0650 */
        }
        if (lVar7 == 0) goto LAB_023f080c;
      }
      else {
        uVar4 = 0;
      }
      Dino_BusSand_App_UI_HomeBus__Step_22e230c
                (fVar11,*(undefined4 *)(param_1 + 0x88),lVar7,uVar4 & 1,0);
      if (*(long *)(param_1 + 0x80) != 0) {
        Dino_BusSand_App_UI_HomePuffs__Step_22e607c
                  (fVar11,*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x20));
        Dino_BusSand_App_UI_HomeStage__Ruts_22f0d3c(fVar11,param_1);
        lVar7 = *(long *)(param_1 + 0x40);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (lVar7 != 0) {
          lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
          UnityEngine_Material__SetVector_4383100
                    (*(undefined4 *)(lVar8 + 4),*(undefined4 *)(lVar8 + 8),
                     *(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(param_1 + 0x88),lVar7,
                     *(undefined8 *)PTR_DAT_04cb7718,0);
          if (*(long *)(param_1 + 0x40) != 0) {
            UnityEngine_Material__SetVector_4383100
                      (0x40f00000,_UNK_00e1ff60,0x40d00000,0,*(long *)(param_1 + 0x40),
                       *(undefined8 *)PTR_DAT_04cb7720,0);
            puVar2 = PTR_DAT_04cb7200;
            lVar7 = *(long *)(param_1 + 0x40);
            if (*(int *)(*(long *)PTR_DAT_04cb7200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (lVar7 != 0) {
              fVar11 = -*(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
              uVar14 = 0x3b800000;
              UnityEngine_Material__SetVector_4383100
                        (0,0x3b800000,fVar11,lVar7,*(undefined8 *)PTR_DAT_04cb7728,0);
              if (*(long *)(param_1 + 0x78) != 0) {
                lVar7 = *(long *)(param_1 + 0x40);
                Dino_BusSand_App_UI_HomeBus__get_Shadow_22dffdc(*(long *)(param_1 + 0x78),0);
                if (lVar7 != 0) {
                  UnityEngine_Material__SetVector_4383100(lVar7,*(undefined8 *)PTR_DAT_04cb7730,0);
                  uVar13 = Dino_BusSand_App_UI_HomeStage__get_Sun_22ee3e8(param_1);
                  if (*(long *)(param_1 + 0x40) != 0) {
                    UnityEngine_Material__SetVector_4383100
                              (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb76d8,0);
                    if (*(long *)(param_1 + 0x78) != 0) {
                      Dino_BusSand_App_UI_HomeBus__Light_22dff60
                                (uVar13,uVar14,fVar11,*(long *)(param_1 + 0x78),0,0);
                      if ((bRam0000000004f9c466 & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04caa210);
                        FUN_02132f7c(PTR_DAT_04cb7738);
                        FUN_02132f7c(PTR_DAT_04cb19a8);
                        FUN_02132f7c(PTR_DAT_04cb76e8);
                        bRam0000000004f9c466 = 1;
                      }
                      puVar2 = PTR_DAT_04cb76e8;
                      if (*(long *)(param_1 + 0xb8) == 0) {
LAB_023f11e0:
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      if (*(int *)(param_1 + 0xc0) < *(int *)(*(long *)(param_1 + 0xb8) + 0x18)) {
                        if (*(long *)(param_1 + 0x40) == 0) goto LAB_023f11e0;
                        uVar6 = UnityEngine_Material__IsKeywordEnabled_437cfa8
                                          (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb76e8
                                           ,0);
                        puVar3 = PTR_DAT_04cb19a8;
                        if ((uVar6 & 1) == 0) {
                          if (*(int *)(*(long *)PTR_DAT_04cb19a8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          if (cRam0000000004f9c49b == '\0') {
                            FUN_02132f7c(PTR_DAT_04cb19a8);
                            cRam0000000004f9c49b = '\x01';
                          }
                          lVar7 = *(long *)puVar3;
                          if (*(int *)(lVar7 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar7 = *(long *)puVar3;
                          }
                          if (*(char *)(*(long *)(lVar7 + 0xb8) + 1) == '\0') {
                            uVar4 = *(uint *)(param_1 + 0xc0);
                            *(uint *)(param_1 + 0xc0) = uVar4 + 1;
                            if (-1 < (int)uVar4) {
                              lVar7 = *(long *)(param_1 + 0xb8);
                              uVar14 = UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
                              if (lVar7 != 0) {
                                if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_023f11e4:
                    /* WARNING: Subroutine does not return */
                                  FUN_0213322c();
                                }
                                lVar8 = *(long *)(param_1 + 0xb8);
                                *(undefined4 *)(lVar7 + (ulong)uVar4 * 4 + 0x20) = uVar14;
                                if (lVar8 != 0) {
                                  if (*(int *)(param_1 + 0xc0) < *(int *)(lVar8 + 0x18)) {
                                    return;
                                  }
                                  System_Array__Sort_float__2687fe0
                                            (lVar8,*(undefined8 *)PTR_DAT_04cb7738);
                                  lVar7 = *(long *)(param_1 + 0xb8);
                                  if (lVar7 != 0) {
                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                    uVar4 = uVar1;
                                    if ((int)uVar1 < 0) {
                                      uVar4 = uVar1 + 1;
                                    }
                                    if (uVar1 <= (uint)((int)uVar4 >> 1)) goto LAB_023f11e4;
                                    fVar11 = *(float *)(lVar7 + (long)((int)uVar4 >> 1) * 4 + 0x20);
                                    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    iVar5 = UnityEngine_Application__get_targetFrameRate_4352c24(0);
                                    if (iVar5 < 0x1f) {
                                      iVar5 = 0x1e;
                                    }
                                    if (fVar11 <= _UNK_00e2068c / (float)iVar5) {
                                      return;
                                    }
                                    lVar7 = *(long *)(param_1 + 0x40);
                                    if (lVar7 != 0) {
                                      lVar8 = *(long *)puVar2;
                                      if ((bRam0000000004fa6d64 & 1) == 0) {
                                        FUN_02132f7c(PTR_DAT_04cf6620,lVar8,0);
                                        FUN_02132f7c(PTR_DAT_04cab588);
                                        FUN_02132f7c(PTR_DAT_04cf5680);
                                        FUN_02132f7c(PTR_DAT_04cd5630);
                                        bRam0000000004fa6d64 = 1;
                                      }
                                      uStack_50 = 0;
                                      uStack_48 = 0;
                                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02133224();
                                      }
                                      lVar9 = *(long *)(lVar7 + 0x10);
                                      if (lVar9 != 0) {
                                        if (lVar8 == 0) {
                                          uStack_50 = 0;
                                          uStack_48 = 0;
                                        }
                                        else if (*(int *)(lVar8 + 0x10) == 0) {
                                          uVar10 = System_UIntPtr__op_Explicit_488617c(1,0);
                                          uVar10 = System_UIntPtr__op_Explicit_4886184(uVar10,0);
                                          UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                                                    (&stack0xffffffffffffffd0,uVar10,0,0);
                                          uStack_48 = 0;
                                          uStack_50 = 0;
                                        }
                                        else {
                                          if (cRam0000000004fa1b52 == '\0') {
                                            FUN_02132f7c(PTR_DAT_04cc73d8);
                                            cRam0000000004fa1b52 = '\x01';
                                          }
                                          System_String__GetRawStringData_46cfab8(lVar8,0);
                                          uVar14 = *(undefined4 *)(lVar8 + 0x10);
                                          uVar10 = 
                                                  System_ReadOnlySpan_char___GetPinnableReference_2de139c
                                                            (&stack0xffffffffffffffc0,
                                                             *(undefined8 *)PTR_DAT_04cf5680);
                                          UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                                                    (&uStack_50,uVar10,uVar14,0);
                                        }
                                        if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        if (pcRam0000000004fa6e50 == (code *)0x0) {
                                          pcRam0000000004fa6e50 =
                                               (code *)FUN_02132f40(&UNK_00e21456);
                                        }
                                        (*pcRam0000000004fa6e50)(lVar9,&uStack_50);
                                        return;
                                      }
                    /* WARNING: Subroutine does not return */
                                      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                                (lVar7,0);
                                    }
                                  }
                                }
                              }
                              goto LAB_023f11e0;
                            }
                          }
                        }
                      }
                      return;
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
LAB_023f080c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

