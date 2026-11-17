/* IL2CPP: Dino.BusSand.App.UI.KitPop.<Out>d__40$$MoveNext
bool Dino_BusSand_App_UI_KitPop__Out_d__40__MoveNext (Dino_BusSand_App_UI_KitPop__Out_d__40_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPop.<Out>d__40$$MoveNext
   bool Dino_BusSand_App_UI_KitPop__Out_d__40__MoveNext (Dino_BusSand_App_UI_KitPop__Out_d__40_o*
   __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_KitPop__Out_d__40__MoveNext_228fbbc
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((bRam0000000004f9c1b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1b4 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  lVar3 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    fVar8 = *(float *)(param_4 + 0x38);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar11 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
    fVar8 = fVar8 + fVar11;
    *(float *)(param_4 + 0x38) = fVar8;
    if (*(float *)(param_4 + 0x3c) <= fVar8) {
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
        UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*(long *)(lVar3 + 0x68),0);
        Dino_BusSand_App_UI_KitPop__Finish_228f238(lVar3);
        return 0;
      }
      goto LAB_0238fdcc;
    }
    fVar8 = fVar8 / *(float *)(param_4 + 0x3c);
    fVar11 = 1.0;
    if (fVar8 <= 1.0) {
      fVar11 = fVar8;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar8) {
      fVar7 = fVar11;
    }
    if (lVar3 == 0) goto LAB_0238fdcc;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0), lVar2 == 0))
    goto LAB_0238fdcc;
    uVar4 = UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
    *(undefined4 *)(param_4 + 0x28) = uVar4;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
    if (*(long *)(lVar3 + 0x68) == 0) goto LAB_0238fdcc;
    uVar4 = UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(lVar3 + 0x68),0);
    fVar7 = 0.0;
    *(undefined4 *)(param_4 + 0x34) = uVar4;
    *(undefined8 *)(param_4 + 0x38) = _UNK_00e6a3d0;
  }
  lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
  fVar8 = *(float *)(param_4 + 0x30);
  uVar10 = *(undefined8 *)(param_4 + 0x28);
  uVar12 = *(undefined8 *)(lVar3 + 0x4c);
  fVar11 = *(float *)(lVar3 + 0x54);
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
  }
  if (lVar2 != 0) {
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    fVar6 = fVar6 * fVar6;
    fVar9 = (float)uVar10;
    fVar5 = (float)((ulong)uVar10 >> 0x20);
    fVar5 = fVar5 + ((float)((ulong)uVar12 >> 0x20) * 0.92 - fVar5) * fVar6;
    UnityEngine_Transform__set_localScale_43d1be0
              (CONCAT44(fVar5,fVar9 + ((float)uVar12 * 0.92 - fVar9) * fVar6),fVar5,
               fVar8 + fVar6 * (fVar11 * _UNK_00e20830 - fVar8),lVar2,0);
    if (*(long *)(lVar3 + 0x68) != 0) {
      UnityEngine_CanvasGroup__set_alpha_467ad3c
                ((1.0 - fVar7 * fVar7 * fVar7) * *(float *)(param_4 + 0x34),*(long *)(lVar3 + 0x68),
                 0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
LAB_0238fdcc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

