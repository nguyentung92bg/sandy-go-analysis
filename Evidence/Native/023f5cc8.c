/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$ApplyCap
void Dino_BusSand_App_UI_HomeToonRig__ApplyCap (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$ApplyCap
   void Dino_BusSand_App_UI_HomeToonRig__ApplyCap (Dino_BusSand_App_UI_HomeToonRig_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__ApplyCap_22f5cc8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c489 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c489 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xa8),0), lVar3 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    fVar5 = *(float *)(param_1 + 0xbc);
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar5 = fVar5 + fVar5;
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar5) {
        fVar7 = fVar6;
      }
      if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar6 = 1.0 - fVar7 * fVar7 * (fVar7 * _UNK_00e200a8 + _UNK_00e203f0);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(float *)(param_1 + 0xb0) + 0.0,fVar6 * _UNK_00e20170 + *(float *)(param_1 + 0xb4)
                 ,*(float *)(param_1 + 0xb8) + 0.0,*(long *)(param_1 + 0xa8),0);
      lVar3 = *(long *)(param_1 + 0xa8);
      UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                (fVar6 * -6.0 * _UNK_00e20a74,0,fVar6 * -3.0 * _UNK_00e20a74,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__set_localRotation_43d156c(lVar3,0);
        lVar3 = *(long *)(param_1 + 0xa8);
        if (lVar3 != 0) {
          if ((bRam0000000004fa8b3e & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b3e = 1;
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
          if (pcRam0000000004fa8bf0 == (code *)0x0) {
            pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
          }
          (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

