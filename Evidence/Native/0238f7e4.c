/* IL2CPP: Dino.BusSand.App.UI.KitPop.HeldDimGuard$$Update
void Dino_BusSand_App_UI_KitPop_HeldDimGuard__Update (Dino_BusSand_App_UI_KitPop_HeldDimGuard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPop.HeldDimGuard$$Update
   void Dino_BusSand_App_UI_KitPop_HeldDimGuard__Update (Dino_BusSand_App_UI_KitPop_HeldDimGuard_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop_HeldDimGuard__Update_228f7e4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,float param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9c1b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    FUN_02132f7c(PTR_DAT_04cb5310);
    bRam0000000004f9c1b1 = 1;
  }
  puVar2 = PTR_DAT_04cabb00;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cb5110;
  puVar2 = PTR_DAT_04ca9ae8;
  uVar4 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848();
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar8 == 0) goto LAB_0238fae0;
      uVar4 = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(lVar8,0);
      if ((((uVar4 & 1) != 0) ||
          (uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                             (lVar8,*(undefined8 *)PTR_DAT_04cac7c8), (uVar4 & 1) != 0)) ||
         (uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                            (lVar8,*(undefined8 *)PTR_DAT_04cb5310), (uVar4 & 1) != 0))
      goto LAB_0238f8b0;
    }
    fVar11 = *(float *)(param_5 + 0x20);
    fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar11 = fVar11 + fVar10;
    param_2 = 0x3f800000;
    lVar8 = *(long *)puVar1;
    *(float *)(param_5 + 0x20) = fVar11;
    if (1.0 < fVar11) {
      param_2 = 0x3f800000;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        param_2 = 0x3f800000;
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x18) = 1;
    }
  }
  else {
LAB_0238f8b0:
    if (param_5 == 0) goto LAB_0238fae0;
    lVar8 = *(long *)puVar1;
    *(undefined4 *)(param_5 + 0x20) = 0;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar8 + 0xb8);
  if (*(char *)(lVar6 + 0x18) != '\0') {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (plVar5 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        plVar5 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        fVar11 = (fVar10 / _UNK_00e20328) * _UNK_00e1fdd0;
        fVar10 = -((fVar10 / _UNK_00e20328) * _UNK_00e1fdd0);
        if (0.0 <= 0.0 - param_4) {
          fVar10 = fVar11;
        }
        fVar10 = param_4 + fVar10;
        if (ABS(0.0 - param_4) <= fVar11) {
          fVar10 = 0.0;
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2a8))
                    (uVar9,param_2,param_3,fVar10,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
          plVar5 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
            if (0.0 < fVar10) {
              return;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar2 = PTR_DAT_04cb5110;
            if ((bRam0000000004f9c1a9 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cb5110);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              bRam0000000004f9c1a9 = 1;
            }
            puVar1 = PTR_DAT_04ca9ae8;
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar2;
            }
            lVar6 = *(long *)puVar1;
            uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar6);
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
              lVar8 = *(long *)puVar1;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar8);
              }
              UnityEngine_Object__Destroy_43c8114(uVar7,0);
            }
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar2;
            }
            puVar3 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
            *puVar3 = 0;
            thunk_FUN_02134474(puVar3,0);
            *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0;
            return;
          }
        }
      }
LAB_0238fae0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

