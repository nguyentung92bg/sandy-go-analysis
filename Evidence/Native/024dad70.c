/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Tick
void Dino_BusSand_View_PickUpClaw__Tick (Dino_BusSand_View_PickUpClaw_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Tick
   void Dino_BusSand_View_PickUpClaw__Tick (Dino_BusSand_View_PickUpClaw_o* __this, float dt, const
   MethodInfo* method); */

void Dino_BusSand_View_PickUpClaw__Tick_23dad70
               (float param_1,undefined1 param_2 [16],float param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((bRam0000000004f9ca3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca3e = 1;
  }
  if (*(char *)(param_5 + 0x3c) != '\0') {
    return;
  }
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  iVar1 = *(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4);
  *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) + param_1;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if (((uVar5 & 1) != 0) || (fVar11 = *(float *)(param_5 + 0x38), 3.0 < fVar11)) {
LAB_024dadf8:
    *(undefined1 *)(param_5 + 0x3c) = 1;
    return;
  }
  if (_UNK_00e205ac < fVar11) {
    if (*(long *)(param_5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_5 + 0x28) + 0x2c) != 2) goto LAB_024dadf8;
  }
                    /* try { // try from 024dae40 to 025dae47 has its CatchHandler @ 024daf00 */
  fVar12 = _UNK_00e205ac;
  if ((bRam0000000004f9ca3f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca3f = 1;
  }
  if ((*(long *)(param_5 + 0x28) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_5 + 0x28) + 0x38), lVar3 != 0)) {
    fVar8 = (float)UnityEngine_Transform__get_position_43d0e48(lVar3,0);
    if (_UNK_00e204e8 <= fVar11) {
      if (_UNK_00e204f0 <= fVar11) {
        fVar9 = 0.0;
        fVar15 = (fVar11 + _UNK_00e20074) / _UNK_00e20328;
        fVar11 = 1.0;
        if (fVar15 <= 1.0) {
          fVar11 = fVar15;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar15) {
          fVar13 = fVar11;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar13) {
          fVar11 = fVar13;
        }
        fVar15 = fVar11 * 3.0 + -6.0;
      }
      else {
        if (*(long *)(param_5 + 0x10) == 0) goto LAB_024dab64;
        fVar15 = (fVar11 + _UNK_00e2003c) / _UNK_00e205f0;
        fVar11 = (float)UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_5 + 0x10),0);
        fVar9 = (float)func_0x049b5320(fVar15 * _UNK_00e2082c);
        fVar9 = fVar9 * fVar11 * _UNK_00e206c4;
        param_4 = 0x42080000;
        fVar15 = fVar15 * fVar15 * (3.0 - (fVar15 + fVar15)) * -40.0 + 34.0;
      }
    }
    else {
      fVar15 = 34.0;
      fVar9 = fVar11 / _UNK_00e2003c + 1.0;
      fVar9 = fVar9 * fVar9 * fVar9 * 9.0;
    }
    lVar3 = *(long *)(param_5 + 0x10);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    fVar11 = _UNK_00e20a74;
    uVar14 = 0;
    fVar16 = *(float *)(param_5 + 0x30);
    fVar13 = *(float *)(param_5 + 0x34) * _UNK_00e20a74;
    lVar6 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar18 = *(float *)(lVar6 + 0x18);
    fVar19 = *(float *)(lVar6 + 0x1c);
    fVar17 = *(float *)(lVar6 + 0x20);
    uVar10 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar13,0,0);
    puVar2 = PTR_DAT_04ca9ae8;
    if (lVar3 != 0) {
      fVar9 = fVar9 + fVar16;
      UnityEngine_Transform__SetPositionAndRotation_43d2064
                (fVar8 + fVar18 * fVar9,fVar12 + fVar19 * fVar9,param_3 + fVar17 * fVar9,uVar10,
                 fVar13,uVar14,param_4,lVar3,0);
      uVar5 = 0;
      while (lVar3 = *(long *)(param_5 + 0x18), lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_024dab68;
        uVar7 = *(undefined8 *)(lVar3 + uVar5 * 8 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
          lVar3 = *(long *)(param_5 + 0x18);
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_024dab68:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar6 = *(long *)(param_5 + 0x20);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_024dab68;
          lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x20);
          UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                    (fVar15 * fVar11,*(float *)(lVar6 + uVar5 * 4 + 0x20) * fVar11,0,0);
          if (lVar3 == 0) break;
          UnityEngine_Transform__set_localRotation_43d156c(lVar3,0);
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == 3) {
          return;
        }
      }
    }
  }
LAB_024dab64:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

