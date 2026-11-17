/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass115_0$$<UnlockVisual>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass115_0___UnlockVisual_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass115_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass115_0$$<UnlockVisual>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass115_0___UnlockVisual_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass115_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass115_0___UnlockVisual_b__0_23d4234
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca0f = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  fVar6 = 1.0;
  if (param_1 < _UNK_00e2065c) {
    fVar6 = (float)func_0x049b5320((param_1 / _UNK_00e2065c) * _UNK_00e2082c);
    fVar6 = fVar6 * _UNK_00e208d0 + 1.0;
  }
  lVar4 = *(long *)(param_2 + 0x18);
  fVar11 = *(float *)(param_2 + 0x28);
  fVar7 = (param_1 + _UNK_00e1ffc0) / _UNK_00e1fecc;
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  fVar10 = 0.0;
  if (0.0 <= fVar7) {
    fVar10 = fVar8;
  }
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  if ((*(long *)(param_2 + 0x10) != 0) && (lVar4 != 0)) {
    fVar7 = *(float *)(*(long *)(param_2 + 0x10) + 0x50);
    lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar12 = *(float *)(lVar5 + 0x20);
    fVar8 = (float)func_0x049b5320(fVar10 * _UNK_00e2082c);
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    fVar7 = (fVar8 * _UNK_00e1fea8 + fVar10 * _UNK_00e20044) * fVar7;
    fVar8 = (float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar7;
    UnityEngine_Transform__set_position_43d0f1c
              (CONCAT44(fVar8,(float)uVar3 + (float)uVar9 * fVar7),fVar8,fVar11 + fVar12 * fVar7,
               lVar4,0);
    lVar4 = *(long *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x2c);
    fVar7 = *(float *)(param_2 + 0x34);
    fVar8 = (float)Dino_BusSand_Easing__Evaluate_238b7d0(fVar10,4,0);
    if (lVar4 != 0) {
      fVar8 = 1.0 - fVar8;
      fVar11 = (float)((ulong)uVar3 >> 0x20) * fVar6 * fVar8;
      UnityEngine_Transform__set_localScale_43d1be0
                (CONCAT44(fVar11,(float)uVar3 * fVar6 * fVar8),fVar11,fVar6 * fVar7 * fVar8,lVar4,0)
      ;
      lVar4 = *(long *)(param_2 + 0x18);
      UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
      if (lVar4 != 0) {
        if ((bRam0000000004fa8b38 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b38 = 1;
        }
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            if (pcRam0000000004fa8bc0 == (code *)0x0) {
              pcRam0000000004fa8bc0 = (code *)FUN_02132f40(&UNK_00e2b2f8);
            }
            (*pcRam0000000004fa8bc0)(lVar4,&stack0xffffffffffffffd0);
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

