/* IL2CPP: Dino.BusSand.App.UI.CommerceRewardFly$$FindTarget
UnityEngine_Transform_o* Dino_BusSand_App_UI_CommerceRewardFly__FindTarget (int32_t itemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceRewardFly$$FindTarget
   UnityEngine_Transform_o* Dino_BusSand_App_UI_CommerceRewardFly__FindTarget (int32_t itemId, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceRewardFly__FindTarget_22a8ff4(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((bRam0000000004f9c299 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5d90);
    FUN_02132f7c(PTR_DAT_04cb5de0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cad9d0);
    FUN_02132f7c(PTR_DAT_04cadf58);
    bRam0000000004f9c299 = 1;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  plVar10 = (long *)PTR_DAT_04cad9d0;
  if ((param_1 == 0x3e9) || (plVar10 = (long *)PTR_DAT_04cadf58, param_1 == 0x3ea)) {
    lVar12 = *plVar10;
  }
  else {
    lVar12 = 0;
  }
  lVar14 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  puVar3 = PTR_DAT_04cb5de0;
  uVar6 = 0;
  if (((uVar5 & 1) == 0) && (lVar12 != 0)) {
    if (lVar14 == 0) {
LAB_023a931c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar6);
    }
    iVar11 = 4;
    do {
      lVar7 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar14,iVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar7 == 0) goto LAB_023a931c;
        iVar4 = UnityEngine_Transform__get_childCount_43d4480(lVar7,0);
        if (-1 < iVar4 + -1) {
          do {
            iVar4 = iVar4 + -1;
            lVar8 = UnityEngine_Transform__GetChild_43d5294(lVar7,iVar4,0);
            uVar6 = 0;
            if (lVar8 == 0) goto LAB_023a931c;
            lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
            uVar6 = 0;
            if (lVar9 == 0) goto LAB_023a931c;
            uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar9,0);
            if ((uVar6 & 1) != 0) {
              lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar8,*(undefined8 *)puVar3);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
              if ((uVar6 & 1) == 0) {
                if (lVar9 == 0) goto LAB_023a931c;
                if (*(char *)(lVar9 + 0x2c) == '\0') {
                  lVar8 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar8,lVar12,0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                  if ((uVar6 & 1) == 0) {
                    if (lVar8 == 0) goto LAB_023a931c;
                    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                    uVar6 = 0;
                    if (lVar9 == 0) goto LAB_023a931c;
                    uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar9,0);
                    if ((uVar6 & 1) != 0) {
                      lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                                         (lVar8,*(undefined8 *)PTR_DAT_04cb5d90);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar2);
                      }
                      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                      puVar3 = PTR_DAT_04ca9ae8;
                      if ((uVar6 & 1) == 0) {
                        lVar12 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                                           (lVar8,*(undefined8 *)PTR_DAT_04cae5d0,0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar2);
                        }
                        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                        if ((uVar6 & 1) == 0) {
                          return lVar8;
                        }
                        return lVar12;
                      }
                      if (lVar12 != 0) {
                        if ((bRam0000000004f9c28e & 1) == 0) {
                          FUN_02132f7c(PTR_DAT_04ca9ae8);
                          bRam0000000004f9c28e = 1;
                        }
                        uVar13 = *(undefined8 *)(lVar12 + 0x30);
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
                        if ((uVar6 & 1) == 0) {
                          if ((bRam0000000004fa8306 & 1) == 0) {
                            FUN_02132f7c(PTR_DAT_04cf7648,0);
                            FUN_02132f7c(PTR_DAT_04cf5c60);
                            bRam0000000004fa8306 = 1;
                          }
                          puVar2 = PTR_DAT_04cf5c60;
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
                          }
                          lVar14 = *(long *)(lVar12 + 0x10);
                          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                      (lVar12,0);
                          }
                          if (pcRam0000000004fa8310 == (code *)0x0) {
                            pcRam0000000004fa8310 = (code *)FUN_02132f40(&UNK_00e2fdd4);
                          }
                          uVar6 = (*pcRam0000000004fa8310)(lVar14);
                          lVar12 = *(long *)puVar2;
                          if (*(long *)(lVar12 + 0x38) == 0) {
                            FUN_0216b4cc(lVar12);
                          }
                          if (uVar6 != 0) {
                            if (cRam0000000004f9d849 == '\0') {
                              FUN_02132f7c(&DAT_04ddbd40);
                              cRam0000000004f9d849 = '\x01';
                            }
                            if ((uVar6 & 1) == 0) {
                              plVar10 = (long *)System_IntPtr__op_Explicit_487833c();
                              lVar14 = *plVar10;
                            }
                            else {
                              lVar14 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc
                                                 (uVar6,0);
                            }
                            lVar12 = **(long **)(lVar12 + 0x38);
                            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                              lVar12 = FUN_0216b470(lVar12);
                            }
                            if (lVar14 != 0) {
                              lVar7 = thunk_FUN_0216e7a0(lVar14,lVar12);
                              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_021335a4(lVar14,lVar12);
                              }
                              return lVar7;
                            }
                          }
                          return 0;
                        }
                        return *(long *)(lVar12 + 0x30);
                      }
                      goto LAB_023a931c;
                    }
                  }
                }
              }
            }
          } while (0 < iVar4);
        }
      }
      bVar1 = iVar11 != 0;
      iVar11 = iVar11 + -1;
    } while (bVar1);
  }
  return 0;
}

