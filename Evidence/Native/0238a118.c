/* IL2CPP: Dino.BusSand.App.UI.ScreenFade.<Cover>d__11$$MoveNext
bool Dino_BusSand_App_UI_ScreenFade__Cover_d__11__MoveNext (Dino_BusSand_App_UI_ScreenFade__Cover_d__11_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ScreenFade.<Cover>d__11$$MoveNext
   bool Dino_BusSand_App_UI_ScreenFade__Cover_d__11__MoveNext
   (Dino_BusSand_App_UI_ScreenFade__Cover_d__11_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ScreenFade__Cover_d__11__MoveNext_228a118(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  float fVar11;
  undefined4 in_s3;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000004f9c172 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c172 = 1;
  }
  puVar3 = PTR_DAT_04cb5110;
  puVar2 = PTR_DAT_04cad4c0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  lVar5 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) goto LAB_0238a4f8;
      plVar6 = *(long **)(lVar8 + 0x20);
      *(undefined1 *)(lVar8 + 0x28) = 1;
      lVar5 = 0;
      if (plVar6 == (long *)0x0) goto LAB_0238a4f8;
      (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
      puVar2 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Transition_238368c(**(long **)(lVar5 + 0xb8),0);
      }
      plVar6 = *(long **)(lVar8 + 0x20);
      lVar5 = 0;
      if (plVar6 == (long *)0x0) goto LAB_0238a4f8;
      (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
      fVar12 = 0.0;
      *(undefined4 *)(param_1 + 0x30) = in_s3;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      fVar12 = *(float *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
      fVar12 = fVar12 + extraout_s0_00;
      bVar4 = _UNK_00e2065c <= fVar12;
      *(float *)(param_1 + 0x34) = fVar12;
      if (bVar4) {
        if (lVar8 == 0) goto LAB_0238a4f8;
        Dino_BusSand_App_UI_ScreenFade__SetAlpha_2289f94(0x3f800000,lVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_ScreenFade__Invoke_2289ed8(uVar9);
        if (*(int *)(*(long *)PTR_DAT_04cb5110 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_KitPop__FinishLeaving_228a570();
        Dino_BusSand_App_UI_KitPop__ReleaseDim_228a7b0();
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar7 = 2;
        goto LAB_0238a398;
      }
    }
    fVar13 = *(float *)(param_1 + 0x30);
    lVar5 = *(long *)PTR_DAT_04cad4c0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      lVar5 = thunk_FUN_0218fdac();
    }
    if (lVar8 == 0) {
LAB_0238a4f8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(lVar5);
    }
    fVar12 = fVar12 / _UNK_00e2065c;
    fVar10 = 1.0;
    if (fVar12 <= 1.0) {
      fVar10 = fVar12;
    }
    fVar11 = 1.0;
    if (0.0 <= fVar12) {
      fVar11 = 1.0 - fVar10;
    }
    fVar10 = 1.0 - fVar11 * fVar11;
    fVar12 = 1.0;
    if (fVar10 <= 1.0) {
      fVar12 = fVar10;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar10) {
      fVar11 = fVar12;
    }
    Dino_BusSand_App_UI_ScreenFade__SetAlpha_2289f94(fVar13 + fVar11 * (1.0 - fVar13),lVar8);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    if (iVar1 == 2) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar7 = 3;
    }
    else {
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_KitPop__FinishLeaving_228a570();
        fVar12 = 0.0;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      else {
        if (iVar1 != 4) {
          return 0;
        }
        fVar12 = *(float *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar5 = Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
        fVar12 = fVar12 + extraout_s0;
        bVar4 = _UNK_00e200b4 <= fVar12;
        *(float *)(param_1 + 0x34) = fVar12;
        if (bVar4) {
          if (lVar8 != 0) {
            Dino_BusSand_App_UI_ScreenFade__SetAlpha_2289f94(0,lVar8);
            plVar6 = *(long **)(lVar8 + 0x20);
            lVar5 = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0));
              *(undefined1 *)(lVar8 + 0x28) = 0;
              return 0;
            }
          }
          goto LAB_0238a4f8;
        }
      }
      lVar5 = *(long *)PTR_DAT_04cad4c0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        lVar5 = thunk_FUN_0218fdac();
      }
      if (lVar8 == 0) goto LAB_0238a4f8;
      fVar12 = fVar12 / _UNK_00e200b4;
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar13 * _UNK_00e2082c;
      }
      fVar12 = (float)cosf(fVar10);
      Dino_BusSand_App_UI_ScreenFade__SetAlpha_2289f94((fVar12 + -1.0) * 0.5 + 1.0,lVar8);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar7 = 4;
    }
LAB_0238a398:
    *(undefined4 *)(param_1 + 0x10) = uVar7;
  }
  return 1;
}

