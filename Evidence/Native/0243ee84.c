/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Build
void Dino_BusSand_Cheat_AutoPlayHand__Build (Dino_BusSand_Cheat_AutoPlayHand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Build
   void Dino_BusSand_Cheat_AutoPlayHand__Build (Dino_BusSand_Cheat_AutoPlayHand_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__Build_233ee84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar4 = PTR_DAT_04cad748;
  puVar2 = PTR_DAT_04cad730;
  if ((bRam0000000004f9c674 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9550);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb68a0);
    FUN_02132f7c(PTR_DAT_04cb9558);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb9560);
    FUN_02132f7c(PTR_DAT_04cad450);
    FUN_02132f7c(PTR_DAT_04cb6aa8);
    FUN_02132f7c(PTR_DAT_04cb6ab0);
    bRam0000000004f9c674 = 1;
  }
  plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar4,1);
  uVar11 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar7 = System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
  if (plVar6 == (long *)0x0) goto LAB_0243f45c;
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_0243f464:
    uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,0);
  }
  puVar5 = PTR_DAT_04cb9560;
  puVar1 = PTR_DAT_04caa070;
  if ((int)plVar6[3] == 0) {
LAB_0243f460:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar6[4] = lVar7;
  thunk_FUN_02134474(plVar6 + 4,lVar7);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c2310(lVar7,*(undefined8 *)puVar5,plVar6,0);
  puVar5 = PTR_DAT_04cb9558;
  if (lVar7 != 0) {
    lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (lVar7,*(undefined8 *)PTR_DAT_04cb9558);
    plVar6 = (long *)(param_1 + 0x28);
    *plVar6 = lVar7;
    thunk_FUN_02134474(plVar6,lVar7);
    if (*plVar6 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(*plVar6,*(undefined8 *)(param_1 + 0x20),0,0);
      lVar7 = *(long *)(param_1 + 0x28);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar3 = PTR_DAT_04cacfc0;
      if (lVar7 != 0) {
        uVar14 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        UnityEngine_RectTransform__set_anchorMax_43cf768(uVar14,uVar13,lVar7,0);
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(uVar14,uVar13,lVar7,0);
        lVar7 = *plVar6;
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if (lVar7 != 0) {
          UnityEngine_RectTransform__set_sizeDelta_43cfa70
                    (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],lVar7,0);
          if ((*plVar6 != 0) &&
             (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0), lVar7 != 0)) {
            lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (lVar7,*(undefined8 *)PTR_DAT_04cb0890);
            plVar12 = (long *)(param_1 + 0x38);
            *plVar12 = lVar7;
            thunk_FUN_02134474(plVar12,lVar7);
            if (*plVar12 != 0) {
              UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(*plVar12,0,0);
              if (*plVar12 != 0) {
                UnityEngine_CanvasGroup__set_interactable_467aec4(*plVar12,0,0);
                plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar4,1);
                lVar7 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar2,0);
                if (plVar12 != (long *)0x0) {
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_0243f464;
                  puVar2 = PTR_DAT_04cad450;
                  if ((int)plVar12[3] == 0) goto LAB_0243f460;
                  plVar12[4] = lVar7;
                  thunk_FUN_02134474(plVar12 + 4,lVar7);
                  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                  UnityEngine_GameObject___ctor_43c2310(lVar7,*(undefined8 *)puVar2,plVar12,0);
                  if (lVar7 != 0) {
                    lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                      (lVar7,*(undefined8 *)puVar5);
                    plVar12 = (long *)(param_1 + 0x30);
                    *plVar12 = lVar7;
                    thunk_FUN_02134474(plVar12,lVar7);
                    if (*plVar12 != 0) {
                      UnityEngine_Transform__SetParent_43d1e34(*plVar12,*plVar6,0,0);
                      if (*plVar12 != 0) {
                        UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f800000,*plVar12,0);
                        puVar4 = PTR_DAT_04cb6ab0;
                        puVar2 = PTR_DAT_04cab490;
                        if (*plVar12 != 0) {
                          UnityEngine_RectTransform__set_sizeDelta_43cfa70
                                    (0x436e0000,0x43560000,*plVar12,0);
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          puVar1 = PTR_DAT_04ca9ae8;
                          lVar7 = Dino_BusSand_App_UiAssets__Sprite_21636c4(*(undefined8 *)puVar4,0)
                          ;
                          if (lVar7 == 0) {
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            lVar7 = Dino_BusSand_App_UiAssets__Sprite_21636c4
                                              (*(undefined8 *)PTR_DAT_04cb6aa8,0);
                          }
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
                          lVar8 = *plVar12;
                          if ((uVar9 & 1) == 0) {
                            if ((lVar8 == 0) ||
                               (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0),
                               lVar7 == 0)) goto LAB_0243f45c;
                            plVar12 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                        (lVar7,*(undefined8 *)PTR_DAT_04cb68a0);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar2);
                            }
                            uVar11 = Dino_BusSand_App_UiAssets__Texture_2163a34
                                               (*(undefined8 *)PTR_DAT_04cb6aa8,0);
                            if (plVar12 == (long *)0x0) goto LAB_0243f45c;
                            UnityEngine_UI_RawImage__set_texture_468c7f4(plVar12,uVar11,0);
                            puVar2 = PTR_DAT_04cb9550;
                            lVar7 = *(long *)PTR_DAT_04cb9550;
                            if (*(int *)(lVar7 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar7 = *(long *)puVar2;
                            }
                            puVar10 = *(undefined4 **)(lVar7 + 0xb8);
                            UnityEngine_UI_RawImage__set_uvRect_468c8bc
                                      (*puVar10,puVar10[1],puVar10[2],puVar10[3],plVar12,0);
                            (**(code **)(*plVar12 + 0x2c8))
                                      (plVar12,0,*(undefined8 *)(*plVar12 + 0x2d0));
                            lVar7 = plVar12[0x1b];
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
                            if ((uVar9 & 1) != 0) {
                              (**(code **)(*plVar12 + 0x2a8))
                                        (0x3f800000,0x3f800000,0x3f800000,0,plVar12,
                                         *(undefined8 *)(*plVar12 + 0x2b0));
                            }
                          }
                          else {
                            if (((lVar8 == 0) ||
                                (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0),
                                lVar8 == 0)) ||
                               (plVar12 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (lVar8,*(undefined8 *)PTR_DAT_04cacf98),
                               plVar12 == (long *)0x0)) goto LAB_0243f45c;
                            UnityEngine_UI_Image__set_sprite_44a7258(plVar12,lVar7,0);
                            UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar12,1,0);
                            (**(code **)(*plVar12 + 0x2c8))
                                      (plVar12,0,*(undefined8 *)(*plVar12 + 0x2d0));
                          }
                          if ((*plVar6 != 0) &&
                             (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0),
                             lVar7 != 0)) {
                            if ((bRam0000000004fa8360 & 1) == 0) {
                              FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
                              bRam0000000004fa8360 = 1;
                            }
                            if (lVar7 != 0) {
                              lVar8 = *(long *)(lVar7 + 0x10);
                              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                          (lVar7,0);
                              }
                              if (pcRam0000000004fa8430 == (code *)0x0) {
                                pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                              }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam0000000004fa8430)(lVar8,0);
                              return;
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
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
LAB_0243f45c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

