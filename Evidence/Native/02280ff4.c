/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$Update
void Dino_BusSand_App_UI_KitIdle__Update (Dino_BusSand_App_UI_KitIdle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$Update
   void Dino_BusSand_App_UI_KitIdle__Update (Dino_BusSand_App_UI_KitIdle_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitIdle__Update_2180ff4(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  
  if ((bRam0000000004f9b92a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b92a = 1;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    Dino_BusSand_App_UI_KitIdle__Init_2180e5c(param_1);
  }
  fVar4 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  uVar8 = (ulong)(uint)*(float *)(param_1 + 0x24);
  NEON_fmov(0x3f800000,4);
  fVar5 = 0.0;
  iVar1 = *(int *)(param_1 + 0x20);
  fVar4 = fVar4 + *(float *)(param_1 + 0x24);
  uVar6 = (ulong)(uint)fVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar6 = func_0x049b5320((fVar4 * _UNK_00e2082c + fVar4 * _UNK_00e2082c) / _UNK_00e1feac);
      fVar10 = 5.0;
    }
    else {
      if (iVar1 != 1) goto LAB_0228126c;
      fVar4 = fVar4 * _UNK_00e2082c + fVar4 * _UNK_00e2082c;
      fVar5 = (float)func_0x049b5320(fVar4 / _UNK_00e1ff60);
      fVar5 = fVar5 * 6.0;
      uVar6 = func_0x049b5320(fVar4 / _UNK_00e20660);
      fVar10 = 1.5;
    }
    uVar8 = (ulong)(uint)fVar10;
    fVar10 = (float)uVar6 * fVar10;
    goto LAB_02281270;
  }
  if (iVar1 == 2) {
    fVar10 = 0.0;
    fVar4 = fVar4 - (float)(int)(fVar4 / _UNK_00e2009c) * _UNK_00e2009c;
    fVar7 = _UNK_00e2009c;
    if (fVar4 <= _UNK_00e2009c) {
      fVar7 = fVar4;
    }
    uVar6 = 0;
    if (0.0 <= fVar4) {
      uVar6 = (ulong)(uint)fVar7;
    }
    uVar8 = (ulong)(uint)_UNK_00e20094;
    if ((float)uVar6 < _UNK_00e20094) {
      fVar5 = (float)uVar6 / _UNK_00e20094;
      fVar4 = (float)func_0x049b5320(fVar5 * _UNK_00e2082c * 5.0);
      uVar6 = (ulong)(uint)(fVar4 * 7.0);
      fVar5 = 1.0 - fVar5;
      uVar8 = (ulong)(uint)fVar5;
      fVar5 = fVar5 * fVar4 * 7.0;
    }
    goto LAB_02281270;
  }
  if (iVar1 == 3) {
    fVar4 = fVar4 - (float)(int)(fVar4 / 3.0) * 3.0;
    fVar10 = 3.0;
    if (fVar4 <= 3.0) {
      fVar10 = fVar4;
    }
    uVar6 = 0;
    if (0.0 <= fVar4) {
      uVar6 = (ulong)(uint)fVar10;
    }
    fVar4 = (float)uVar6;
    if (_UNK_00e20754 <= fVar4) {
      if (fVar4 < _UNK_00e2094c) {
        uVar6 = func_0x049b5320(((fVar4 + _UNK_00e207d8) / _UNK_00e20590) * _UNK_00e2082c);
        uVar9 = NEON_fmov(0x3f800000,4);
        fVar5 = 0.0;
        fVar10 = (float)uVar6;
        uVar8 = CONCAT44((float)((ulong)_UNK_00e69a00 >> 0x20) * fVar10 +
                         (float)((ulong)uVar9 >> 0x20),(float)_UNK_00e69a00 * fVar10 + (float)uVar9)
        ;
        fVar10 = fVar10 * 14.0;
        goto LAB_02281270;
      }
      uVar8 = (ulong)(uint)_UNK_00e20094;
      if (_UNK_00e20094 <= fVar4) goto LAB_0228126c;
      fVar4 = (float)func_0x049b5320(((fVar4 + _UNK_00e2044c) / _UNK_00e20328) * _UNK_00e2082c);
      uVar9 = _UNK_00e69600;
    }
    else {
      fVar4 = fVar4 / _UNK_00e20754;
      uVar9 = _UNK_00e69828;
    }
    uVar8 = NEON_fmov(0x3f800000,4);
    uVar6 = CONCAT44((float)(uVar8 >> 0x20) - (float)((ulong)uVar9 >> 0x20) * fVar4,
                     (float)uVar8 - (float)uVar9 * fVar4);
  }
LAB_0228126c:
  fVar10 = 0.0;
LAB_02281270:
  plVar2 = (long *)UnityEngine_Component__get_transform_43bcd18(uVar6,uVar8,param_1,0);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (*(float *)(param_1 + 0x28) + 0.0,fVar10 + *(float *)(param_1 + 0x2c),plVar2,0);
    lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0,fVar5 * _UNK_00e20a74,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__set_localRotation_43d156c(lVar3,0);
      lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (lVar3 != 0) {
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 != 0) {
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

