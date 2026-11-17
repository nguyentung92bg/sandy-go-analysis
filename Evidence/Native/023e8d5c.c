/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$Update
void Dino_BusSand_App_UI_HomeSideButton__Update (Dino_BusSand_App_UI_HomeSideButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0238e2b4) */
/* WARNING: Removing unreachable block (ram,0x02390c50) */
/* WARNING: Removing unreachable block (ram,0x02390c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$Update
   void Dino_BusSand_App_UI_HomeSideButton__Update (Dino_BusSand_App_UI_HomeSideButton_o* __this,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_HomeSideButton__Update_22e8d5c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  float extraout_s0;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  
  if ((bRam0000000004f9c438 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c438 = 1;
  }
  uVar9 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((extraout_s0 < *(float *)(param_1 + 0x38)) || (*(long *)(param_1 + 0x20) == 0)) {
    return uVar9;
  }
  fVar16 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  puVar3 = PTR_DAT_04ca9ae8;
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  iVar1 = *(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4);
  *(float *)(param_1 + 0x38) = fVar16 + 1.0;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_023e8f48;
    lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    if (lVar11 != 0) {
      plVar14 = *(long **)(param_1 + 0x28);
      lVar11 = (**(code **)(lVar11 + 0x18))
                         (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      if (plVar14 == (long *)0x0) goto LAB_023e8f48;
      lVar6 = *(long *)PTR_DAT_04ca9c30;
      if (lVar11 != 0) {
        lVar6 = lVar11;
      }
      (**(code **)(*plVar14 + 0x518))(plVar14,lVar6,*(undefined8 *)(*plVar14 + 0x520));
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar9 & 1) == 0) {
    return uVar9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    if (lVar11 == 0) {
      return uVar9;
    }
    uVar5 = (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(*(long *)(param_1 + 0x30),0);
      if ((uVar5 & 1) == ((uint)uVar9 & 1)) {
        return uVar9;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar9 = UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x30),uVar5 & 1,0);
        if ((uVar5 & 1) == 0) {
          return uVar9;
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar11 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(param_1 + 0x30),0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          puVar3 = PTR_DAT_04cb5270;
          uVar2 = _UNK_00e207cc;
          uVar17 = _UNK_00e20184;
          uVar10 = _UNK_00e207cc;
          uVar18 = _UNK_00e207cc;
          if ((bRam0000000004f9c1c1 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cac7b0,0,0,0);
            FUN_02132f7c(PTR_DAT_04cac208);
            FUN_02132f7c(PTR_DAT_04caa458);
            FUN_02132f7c(PTR_DAT_04cb5278);
            FUN_02132f7c(PTR_DAT_04cad7b8);
            FUN_02132f7c(PTR_DAT_04cb4e78);
            FUN_02132f7c(PTR_DAT_04cb4e80);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            FUN_02132f7c(PTR_DAT_04cac1e8);
            FUN_02132f7c(PTR_DAT_04cb5280);
            FUN_02132f7c(PTR_DAT_04cb5288);
            FUN_02132f7c(PTR_DAT_04cb5290);
            FUN_02132f7c(PTR_DAT_04cb5298);
            FUN_02132f7c(PTR_DAT_04cb5270);
            FUN_02132f7c(PTR_DAT_04cad4c0);
            FUN_02132f7c(PTR_DAT_04cabdb8);
            bRam0000000004f9c1c1 = 1;
          }
          lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Object___ctor_4870e5c(lVar6,0);
          puVar3 = PTR_DAT_04ca9ae8;
          if (lVar6 != 0) {
            plVar14 = (long *)(lVar6 + 0x18);
            *plVar14 = lVar11;
            thunk_FUN_02134474(plVar14,lVar11);
            lVar11 = *(long *)puVar3;
            lVar15 = *plVar14;
            *(undefined4 *)(lVar6 + 0x20) = uVar2;
            *(undefined4 *)(lVar6 + 0x30) = uVar17;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
            puVar3 = PTR_DAT_04cad7b8;
            if ((uVar9 & 1) != 0) {
              return 0;
            }
            lVar11 = *plVar14;
            if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            auVar19 = Dino_BusSand_App_UI_KitAdopt__OwnerScale_227e1c0(lVar11);
            if ((auVar19._0_8_ & 0xff) == 0) {
              if (*plVar14 == 0) goto LAB_0238e51c;
              uVar17 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar14,0);
            }
            else {
              uVar18 = auVar19._12_4_;
              uVar10 = auVar19._8_4_;
              uVar17 = auVar19._4_4_;
            }
            *(undefined4 *)(lVar6 + 0x24) = uVar17;
            *(undefined4 *)(lVar6 + 0x28) = uVar10;
            *(undefined4 *)(lVar6 + 0x2c) = uVar18;
            if (*(long *)(lVar6 + 0x18) != 0) {
              uVar13 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x18),0);
              puVar4 = PTR_DAT_04cad4c0;
              if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
              }
              uVar13 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar13);
              *(undefined8 *)(lVar6 + 0x38) = uVar13;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x38),uVar13);
              uVar13 = *(undefined8 *)(lVar6 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Tween__KillAll_2161a90(uVar13,0);
              if (*plVar14 != 0) {
                fVar16 = *(float *)(lVar6 + 0x20);
                UnityEngine_Transform__set_localScale_43d1be0
                          (fVar16 * *(float *)(lVar6 + 0x24),fVar16 * *(float *)(lVar6 + 0x28),
                           *(float *)(lVar6 + 0x2c) * fVar16,*plVar14,0);
                if (*(long *)(lVar6 + 0x38) != 0) {
                  UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*(long *)(lVar6 + 0x38),0);
                  lVar11 = *plVar14;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar9 = Dino_BusSand_App_UI_KitAdopt__Edited_227dd34(lVar11);
                  if ((uVar9 & 1) == 0) {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,1);
                    if (lVar11 == 0) goto LAB_0238e51c;
                    if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    uVar17 = *(undefined4 *)(lVar6 + 0x2c);
                    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar6 + 0x24);
                    *(undefined4 *)(lVar11 + 0x28) = uVar17;
                  }
                  plVar14 = (long *)(lVar6 + 0x10);
                  *plVar14 = lVar11;
                  thunk_FUN_02134474(plVar14);
                  if (*plVar14 != 0) {
                    uVar12 = *(undefined8 *)(lVar6 + 0x18);
                    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5278);
                    System_Func_Vector3____ctor_379f5bc
                              (uVar13,lVar6,*(undefined8 *)PTR_DAT_04cb5280,0);
                    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
                    System_Action_Vector3____ctor_35f2828
                              (uVar7,lVar6,*(undefined8 *)PTR_DAT_04cb5288,0);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_UI_KitAdopt__RestScale_227de60(uVar12,uVar13,uVar7);
                  }
                  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                  System_Action_float____ctor_35f1448
                            (uVar13,lVar6,*(undefined8 *)PTR_DAT_04cb5290,0);
                  uVar12 = *(undefined8 *)(lVar6 + 0x18);
                  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  System_Action___ctor_47b5ed0(uVar7,lVar6,*(undefined8 *)PTR_DAT_04cb5298,0);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  puVar3 = PTR_DAT_04cac1e8;
                  if ((bRam0000000004f9c1bd & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04caa210);
                    FUN_02132f7c(PTR_DAT_04cb4ce0);
                    FUN_02132f7c(PTR_DAT_04cac1e8);
                    bRam0000000004f9c1bd = 1;
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar11 = Dino_BusSand_App_Tween__Value_2160f64(uVar2,uVar13,0);
                  if (((lVar11 != 0) &&
                      (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0), lVar11 != 0
                      )) && (lVar11 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,uVar12,0),
                            lVar11 != 0)) {
                    uVar9 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar11,uVar7,0);
                    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar8 = UnityEngine_Application__get_isPlaying_4351eec(0);
                    puVar3 = PTR_DAT_04cb4ce0;
                    if ((uVar8 & 1) != 0) {
                      lVar11 = *(long *)PTR_DAT_04cb4ce0;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar11 = *(long *)puVar3;
                      }
                      if (*(char *)(*(long *)(lVar11 + 0xb8) + 1) == '\0') {
                        return uVar9;
                      }
                    }
                    if (uVar9 != 0) {
                      Dino_BusSand_App_Tween__Kill_2160f04(uVar9,1,0);
                      return uVar9;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
LAB_0238e51c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_023e8f48:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

