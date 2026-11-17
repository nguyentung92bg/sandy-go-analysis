/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$LateUpdate
void Dino_BusSand_App_UI_HomePanel__LateUpdate (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$LateUpdate
   void Dino_BusSand_App_UI_HomePanel__LateUpdate (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__LateUpdate_22ebcdc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float in_s3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c441 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb74b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c441 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x40) != 0) {
          plVar3 = (long *)UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_1 + 0x40),0);
          puVar1 = PTR_DAT_04cabdb0;
          if (plVar3 == (long *)0x0) {
            if (*(long *)(param_1 + 0x40) != 0) {
              UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x40),0);
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
          else {
            if (*plVar3 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar3);
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x40),0);
              fVar7 = in_s3;
              UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
              if (*(long *)(param_1 + 0x78) != 0) {
                lVar6 = *(long *)(param_1 + 0x70);
                fVar7 = fVar7 * *(float *)(*(long *)(param_1 + 0x78) + 0x20);
                fVar8 = 1.0;
                if (1.0 <= fVar7) {
                  fVar8 = fVar7;
                }
                fVar7 = 1.0;
                if (1.0 <= in_s3 / fVar8) {
                  fVar7 = in_s3 / fVar8;
                }
                if (cRam0000000004f9b65e == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65e = '\x01';
                }
                if (lVar6 != 0) {
                  lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
                  fVar8 = *(float *)(lVar4 + 0x10) / fVar7;
                  UnityEngine_Transform__set_localScale_43d1be0
                            (*(float *)(lVar4 + 0xc) / fVar7,fVar8,*(float *)(lVar4 + 0x14) / fVar7,
                             lVar6,0);
                  plVar3 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
                  if (plVar3 != (long *)0x0) {
                    if (*plVar3 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
                      FUN_021335a4(plVar3);
                    }
                    lVar4 = *(long *)(param_1 + 0x40);
                    UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
                    puVar1 = PTR_DAT_04cb74b0;
                    lVar6 = *(long *)PTR_DAT_04cb74b0;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar6 = *(long *)puVar1;
                    }
                    UnityEngine_Transform__TransformPoint_43d3c44
                              (0,fVar8 + 384.0 + *(float *)(*(long *)(lVar6 + 0xb8) + 0xc) * 0.5,0,
                               plVar3,0);
                    if (lVar4 != 0) {
                      UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar4,0);
                      if (*(long *)(param_1 + 0x40) != 0) {
                        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x40),0);
                        lVar6 = *(long *)(param_1 + 0x70);
                        if (lVar6 != 0) {
                          if ((bRam0000000004fa8a88 & 1) == 0) {
                            FUN_02132f7c(PTR_DAT_04cf7bc8,0);
                            bRam0000000004fa8a88 = 1;
                          }
                          if (lVar6 != 0) {
                            lVar6 = *(long *)(lVar6 + 0x10);
                            if (lVar6 != 0) {
                              if (pcRam0000000004fa8ad0 == (code *)0x0) {
                                pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
                              }
                              (*pcRam0000000004fa8ad0)(lVar6,&stack0xffffffffffffffe8);
                              return;
                            }
                    /* WARNING: Subroutine does not return */
                            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
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
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

