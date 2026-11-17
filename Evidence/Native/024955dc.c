/* IL2CPP: Dino.BusSand.View.ChainRig.<>c__DisplayClass23_1$$<DropParts>b__0
void Dino_BusSand_View_ChainRig___c__DisplayClass23_1___DropParts_b__0 (Dino_BusSand_View_ChainRig___c__DisplayClass23_1_o* __this, float u, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig.<>c__DisplayClass23_1$$<DropParts>b__0
   void Dino_BusSand_View_ChainRig___c__DisplayClass23_1___DropParts_b__0
   (Dino_BusSand_View_ChainRig___c__DisplayClass23_1_o* __this, float u, const MethodInfo* method);
    */

void Dino_BusSand_View_ChainRig___c__DisplayClass23_1___DropParts_b__0_23955dc
               (float param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c8d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8d8 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  fVar7 = 1.0;
  if (param_1 <= 1.0) {
    fVar7 = param_1;
  }
  fVar17 = 0.0;
  if (0.0 <= param_1) {
    fVar17 = fVar7;
  }
  fVar7 = (float)func_0x049b5300(1.0 - fVar17,0x40400000);
  lVar6 = *(long *)(param_2 + 0x10);
  fVar17 = *(float *)(param_2 + 0x20);
  fVar20 = *(float *)(param_2 + 0x2c);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar22 = *(undefined8 *)(param_2 + 0x24);
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  lVar4 = *(long *)(param_2 + 0x50);
  if (lVar4 != 0) {
    fVar11 = 0.0;
    cVar1 = *(char *)(lVar4 + 0x14);
    fVar7 = 1.0 - fVar7;
    fVar8 = 0.0;
    if (cVar1 != '\0') {
      fVar8 = 1.0;
    }
    fVar9 = 0.0;
    if (cVar1 != '\0') {
      fVar9 = fVar7 * 200.0 * *(float *)(param_2 + 0x40) * _UNK_00e20a74;
    }
    fVar15 = *(float *)(param_2 + 0x30);
    fVar23 = *(float *)(param_2 + 0x34);
    fVar21 = *(float *)(param_2 + 0x38);
    fVar16 = *(float *)(param_2 + 0x3c);
    fVar18 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
    uVar19 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
    fVar13 = *(float *)(lVar4 + 0x10);
    fVar12 = 0.0;
    if (cVar1 != '\0') {
      fVar12 = fVar7 * 90.0 * _UNK_00e20a74;
    }
    fVar14 = fVar13;
    fVar9 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(fVar9,0,fVar12,0);
    if (lVar6 != 0) {
      fVar10 = (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar22 >> 0x20) * fVar7 +
               (float)((ulong)uVar19 >> 0x20) * fVar13 * -1.6 * param_1 * param_1 * fVar8;
      UnityEngine_Transform__SetPositionAndRotation_43d2064
                (CONCAT44(fVar10,(float)uVar5 + (float)uVar22 * fVar7 +
                                 (float)uVar19 * fVar13 * -1.6 * param_1 * param_1 * fVar8),fVar10,
                 fVar17 + fVar7 * fVar20 +
                 fVar8 * fVar18 * fVar13 * _UNK_00e20280 * param_1 * param_1,
                 (fVar23 * fVar12 + fVar16 * fVar9 + fVar15 * fVar14) - fVar21 * fVar11,
                 (fVar21 * fVar9 + fVar16 * fVar11 + fVar23 * fVar14) - fVar15 * fVar12,
                 (fVar15 * fVar11 + fVar16 * fVar12 + fVar21 * fVar14) - fVar23 * fVar9,
                 ((fVar16 * fVar14 - fVar15 * fVar9) - fVar23 * fVar11) - fVar21 * fVar12,lVar6,0);
      lVar6 = *(long *)(param_2 + 0x10);
      if (lVar6 != 0) {
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 != 0) {
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar6,&stack0xffffffffffffffd4);
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

