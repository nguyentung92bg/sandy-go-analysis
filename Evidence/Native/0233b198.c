/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$BindHall
void Dino_BusSand_App_Meta_GiftPackFeature__BindHall (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022ad358) */
/* WARNING: Removing unreachable block (ram,0x022ad374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$BindHall
   void Dino_BusSand_App_Meta_GiftPackFeature__BindHall (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__BindHall_223b198
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  puVar1 = PTR_DAT_04caec68;
  if ((bRam0000000004f9becf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    bRam0000000004f9becf = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caeec8;
  if ((bRam0000000004f9ba68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,0);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caeed0);
    FUN_02132f7c(PTR_DAT_04caeed8);
    FUN_02132f7c(PTR_DAT_04caeec8);
    FUN_02132f7c(PTR_DAT_04caeee0);
    FUN_02132f7c(PTR_DAT_04caeee8);
    FUN_02132f7c(PTR_DAT_04caeef0);
    FUN_02132f7c(PTR_DAT_04caeef8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9ba68 = 1;
  }
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar12,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar12 != 0) {
    plVar22 = (long *)(lVar12 + 0x10);
    *plVar22 = param_5;
    thunk_FUN_02134474(plVar22,param_5);
    lVar23 = *plVar22;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar23,0,0);
    if ((uVar13 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    puVar2 = PTR_DAT_04caec68;
    lVar23 = *plVar22;
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar23 = Dino_BusSand_App_UI_GiftPackUi__Ticker_21acea4(lVar23,*(undefined8 *)PTR_DAT_04caeef0);
    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar14,lVar12,*(undefined8 *)PTR_DAT_04caeed0,0);
    if (lVar23 != 0) {
      *(undefined8 *)(lVar23 + 0x20) = uVar14;
      thunk_FUN_02134474((undefined8 *)(lVar23 + 0x20),uVar14);
      puVar5 = PTR_DAT_04caeee8;
      puVar4 = PTR_DAT_04caeee0;
      puVar3 = PTR_DAT_04cad948;
      lVar23 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar23 != 0) {
        if (0 < (int)*(ulong *)(lVar23 + 0x18)) {
          uVar13 = 0;
          uVar20 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
          do {
            if (uVar20 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            uVar14 = *(undefined8 *)(lVar23 + 0x20 + uVar13 * 8);
            lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
            System_Object___ctor_4870e5c(lVar15,0);
            if (*plVar22 == 0) goto LAB_022ace94;
            lVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(*plVar22,uVar14,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar20 = UnityEngine_Object__op_Equality_43c6f30(lVar16,0,0);
            if ((uVar20 & 1) == 0) {
              if (lVar15 == 0) goto LAB_022ace94;
              *(undefined8 *)(lVar15 + 0x10) = uVar14;
              thunk_FUN_02134474((undefined8 *)(lVar15 + 0x10),uVar14);
              if (lVar16 == 0) goto LAB_022ace94;
              uVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
              uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(uVar17,lVar15,*(undefined8 *)puVar4,0);
              Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar14,uVar17,1,*(undefined8 *)puVar3,0);
            }
            uVar20 = (ulong)*(uint *)(lVar23 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar23 + 0x18));
        }
        if (*plVar22 != 0) {
          lVar23 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                             (*plVar22,*(undefined8 *)PTR_DAT_04caeef8,0);
          plVar24 = (long *)(lVar12 + 0x18);
          *plVar24 = lVar23;
          thunk_FUN_02134474(plVar24,lVar23);
          puVar2 = PTR_DAT_04caec68;
          lVar23 = *plVar24;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar23,0,0);
          if ((uVar13 & 1) != 0) {
            if (*plVar24 == 0) goto LAB_022ace94;
            uVar14 = UnityEngine_Component__get_gameObject_43bcde8(*plVar24,0);
            uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar17,lVar12,*(undefined8 *)PTR_DAT_04caeed8,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                      (uVar14,uVar17,1,*(undefined8 *)PTR_DAT_04cad948,0);
          }
          lVar12 = *plVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar1 = PTR_DAT_04caec48;
          if ((bRam0000000004f9ba69 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cac7b8);
            FUN_02132f7c(PTR_DAT_04cada30);
            FUN_02132f7c(PTR_DAT_04caec48);
            FUN_02132f7c(PTR_DAT_04caec68);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            FUN_02132f7c(PTR_DAT_04caef08);
            FUN_02132f7c(PTR_DAT_04caef10);
            FUN_02132f7c(PTR_DAT_04caef18);
            FUN_02132f7c(PTR_DAT_04caeef8);
            bRam0000000004f9ba69 = 1;
          }
          puVar2 = PTR_DAT_04ca9ae8;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar23 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
          puVar1 = PTR_DAT_04caec68;
          if ((uVar13 & 1) != 0) {
            return;
          }
          lVar15 = *(long *)PTR_DAT_04caec68;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar15 = *(long *)puVar1;
          }
          fVar26 = _UNK_00e1fea0;
          lVar15 = **(long **)(lVar15 + 0xb8);
          if (lVar15 != 0) {
            if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
              uVar13 = 0;
              uVar20 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
              do {
                if (uVar20 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                if (lVar12 == 0) goto LAB_022ad874;
                uVar14 = *(undefined8 *)(lVar15 + 0x20 + uVar13 * 8);
                lVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar12,uVar14,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar20 = UnityEngine_Object__op_Equality_43c6f30(lVar16,0,0);
                if ((uVar20 & 1) == 0) {
                  if (lVar23 == 0) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = Dino_BusSand_App_Meta_GiftPackFeature__HallIconPackId_223b204
                                      (lVar23,uVar14,0);
                  }
                  if ((lVar16 == 0) ||
                     (lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0), lVar18 == 0)
                     ) goto LAB_022ad874;
                  bVar7 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar18,0);
                  if (0 < iVar8 != (bool)(bVar7 & 1)) {
                    lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
                    if (lVar18 == 0) goto LAB_022ad874;
                    UnityEngine_GameObject__SetActive_43c1408(lVar18,0 < iVar8,0);
                  }
                  if (0 < iVar8) {
                    UnityEngine_Transform__SetAsLastSibling_43d4684(lVar16,0);
                    fVar25 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar16,0);
                    if (cRam0000000004f9b65d == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa208);
                      cRam0000000004f9b65d = '\x01';
                    }
                    puVar1 = PTR_DAT_04caa208;
                    pfVar21 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                    param_3 = param_3 - pfVar21[2];
                    fVar27 = param_2 - pfVar21[1];
                    param_2 = param_3 * param_3;
                    if (param_2 + (fVar25 - *pfVar21) * (fVar25 - *pfVar21) + fVar27 * fVar27 <
                        fVar26) {
                      if (cRam0000000004f9b65e == '\0') {
                        FUN_02132f7c(PTR_DAT_04caa208);
                        cRam0000000004f9b65e = '\x01';
                        pfVar21 = *(float **)(*(long *)puVar1 + 0xb8);
                      }
                      param_2 = pfVar21[4];
                      param_3 = pfVar21[5];
                      UnityEngine_Transform__set_localScale_43d1be0(pfVar21[3],lVar16,0);
                    }
                    if (lVar23 == 0) goto LAB_022ad874;
                    lVar18 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar23,iVar8,0);
                    uVar14 = UnityEngine_Transform__Find_43d4bec
                                       (lVar16,*(undefined8 *)PTR_DAT_04caef08,0);
                    bVar6 = false;
                    if (lVar18 != 0) {
                      bVar6 = *(int *)(lVar18 + 0x14) == 1;
                    }
                    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar14,bVar6);
                    uVar20 = Dino_BusSand_App_Meta_GiftPackFeature__ConsumeIconFirstShow_223b474
                                       (lVar23,iVar8,0);
                    if ((uVar20 & 1) != 0) {
                      lVar18 = UnityEngine_Component__GetComponent_object__26f97e8
                                         (lVar16,*(undefined8 *)PTR_DAT_04cada30);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar2);
                      }
                      uVar20 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
                      if ((uVar20 & 1) != 0) {
                        if (lVar18 == 0) goto LAB_022ad874;
                        uVar14 = UnityEngine_Animation__get_clip_43341a8(lVar18,0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar2);
                        }
                        uVar20 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
                        if ((uVar20 & 1) != 0) {
                          lVar19 = UnityEngine_Animation__get_clip_43341a8(lVar18,0);
                          if (lVar19 == 0) goto LAB_022ad874;
                          uVar14 = UnityEngine_Object__get_name_43c71a4(lVar19,0);
                          if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
                          }
                          Dino_BusSand_App_UI_CommerceUi__Play_22a8904(lVar18,uVar14,0);
                        }
                      }
                    }
                    uVar14 = UnityEngine_Transform__Find_43d4bec
                                       (lVar16,*(undefined8 *)PTR_DAT_04caef10,0);
                    uVar17 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                                       (lVar23,iVar8,0);
                    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
                    }
                    uVar17 = Dino_BusSand_App_Countdown__Text_214f5d0(uVar17,0);
                    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar14,uVar17);
                  }
                }
                uVar20 = (ulong)*(uint *)(lVar15 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)*(uint *)(lVar15 + 0x18));
            }
            if (lVar12 != 0) {
              lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                 (lVar12,*(undefined8 *)PTR_DAT_04caeef8,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
              if ((uVar13 & 1) == 0) {
                return;
              }
              if (lVar23 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenHallVisible_223b520(lVar23,0);
              }
              if ((lVar12 != 0) &&
                 (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar15 != 0)) {
                uVar10 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
                if ((uVar9 & 1) != (uVar10 & 1)) {
                  lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
                  if (lVar15 == 0) goto LAB_022ad874;
                  UnityEngine_GameObject__SetActive_43c1408(lVar15,uVar9 & 1,0);
                }
                if ((uVar9 & 1) == 0) {
                  return;
                }
                fVar26 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar12,0);
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65d = '\x01';
                }
                puVar1 = PTR_DAT_04caa208;
                pfVar21 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                if ((param_3 - pfVar21[2]) * (param_3 - pfVar21[2]) +
                    (fVar26 - *pfVar21) * (fVar26 - *pfVar21) +
                    (param_2 - pfVar21[1]) * (param_2 - pfVar21[1]) < _UNK_00e1fea0) {
                  if (cRam0000000004f9b65e == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9b65e = '\x01';
                    pfVar21 = *(float **)(*(long *)puVar1 + 0xb8);
                  }
                  UnityEngine_Transform__set_localScale_43d1be0
                            (pfVar21[3],pfVar21[4],pfVar21[5],lVar12,0);
                }
                uVar14 = UnityEngine_Transform__Find_43d4bec
                                   (lVar12,*(undefined8 *)PTR_DAT_04caef10,0);
                if (lVar23 != 0) {
                  uVar11 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar23,0)
                  ;
                  uVar17 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                                     (lVar23,uVar11,0);
                  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
                  }
                  uVar17 = Dino_BusSand_App_Countdown__Text_214f5d0(uVar17,0);
                  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar14,uVar17);
                  lVar12 = UnityEngine_Transform__Find_43d4bec
                                     (lVar12,*(undefined8 *)PTR_DAT_04caef18,0);
                  uVar9 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenRedPoint_223b634(lVar23,0);
                  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
                  }
                  puVar1 = PTR_DAT_04ca9ae8;
                  uVar9 = uVar9 & 1;
                  if ((bRam0000000004f9ba6c & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    bRam0000000004f9ba6c = 1;
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                  if ((uVar13 & 1) == 0) {
                    return;
                  }
                  if ((lVar12 != 0) &&
                     (lVar23 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar23 != 0)
                     ) {
                    uVar10 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar23,0);
                    if ((uVar10 & 1) == uVar9) {
                      return;
                    }
                    lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
                    if (lVar12 != 0) {
                      if ((bRam0000000004fa8360 & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf5bd0,uVar9,0);
                        bRam0000000004fa8360 = 1;
                      }
                      if (lVar12 != 0) {
                        lVar23 = *(long *)(lVar12 + 0x10);
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                    (lVar12,0);
                        }
                        if (pcRam0000000004fa8430 == (code *)0x0) {
                          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000004fa8430)(lVar23,uVar9);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
LAB_022ad874:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_022ace94:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

