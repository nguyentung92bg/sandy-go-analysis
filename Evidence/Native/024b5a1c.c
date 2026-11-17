/* IL2CPP: Dino.BusSand.View.GrainParticles$$Puff
void Dino_BusSand_View_GrainParticles__Puff (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, UnityEngine_Color32_o color, int32_t n, float size, float apex, float flight, float spread, float delay, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$Puff
   void Dino_BusSand_View_GrainParticles__Puff (Dino_BusSand_View_GrainParticles_o* __this, int32_t
   slot, UnityEngine_Color32_o color, int32_t n, float size, float apex, float flight, float spread,
   float delay, float glow, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__Puff_23b5a1c
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6,
               uint param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  char cVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  
  fVar22 = param_2;
  fVar24 = param_3;
  if ((bRam0000000004f9c984 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c984 = 1;
  }
  if (-1 < (int)param_7) {
    lVar13 = *(long *)(param_6 + 0x138);
    if (lVar13 == 0) {
LAB_024b5d60:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((int)param_7 < *(int *)(lVar13 + 0x18)) {
      uVar16 = *(undefined8 *)(lVar13 + (ulong)param_7 * 8 + 0x20);
      goto LAB_024b5abc;
    }
  }
  uVar16 = 0;
LAB_024b5abc:
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if (((0.0 < param_3) && ((uVar12 & 1) == 0)) &&
     (uVar18 = Dino_BusSand_View_GrainParticles__TargetPos_23b5084(param_6,(ulong)param_7),
     puVar9 = PTR_DAT_04caa208, uVar8 = _UNK_00e208d8, uVar7 = _UNK_00e20754, fVar6 = _UNK_00e20498,
     fVar5 = _UNK_00e201f4, uVar4 = _UNK_00e20180, uVar3 = _UNK_00e20094, fVar2 = _UNK_00e1fe88,
     0 < param_9)) {
    iVar17 = 0;
    do {
      if (0x1fff < *(int *)(param_6 + 0x30)) {
        return;
      }
      fVar23 = 1.0;
      fVar19 = (float)UnityEngine_Random__Range_43b64a8(uVar3,0);
      fVar20 = (float)UnityEngine_Random__get_insideUnitCircle_43b665c(0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(puVar9);
        cRam0000000004f9b65d = '\x01';
      }
      puVar14 = *(undefined4 **)(*(long *)puVar9 + 0xb8);
      uVar28 = *puVar14;
      uVar25 = puVar14[1];
      uVar26 = puVar14[2];
      if (*(int *)(*(long *)PTR_DAT_04cbc358 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar27 = SQRT(fVar19) * param_3;
      uVar11 = Dino_BusSand_View_GrainParticles__Jitter_23b5928(uVar7,param_8);
      fVar21 = (float)UnityEngine_Random__Range_43b64a8(uVar4,uVar8,0);
      Dino_BusSand_View_GrainParticles__EmitBallistic_23b55f8
                (uVar18,fVar22,fVar24,uVar28,uVar25,uVar26,fVar21 * param_1,fVar27 + fVar5,param_6,
                 uVar11);
      cVar10 = cRam0000000004f9b65d;
      lVar13 = *(long *)(param_6 + 0x20);
      if (lVar13 == 0) goto LAB_024b5d60;
      uVar1 = *(int *)(param_6 + 0x30) - 1;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      puVar15 = (undefined1 *)(lVar13 + 0x20 + (long)(int)uVar1 * 0x88);
      *puVar15 = 3;
      *(uint *)(puVar15 + 0x5c) = param_7;
      if (cVar10 == '\0') {
        FUN_02132f7c(puVar9);
        cRam0000000004f9b65d = '\x01';
      }
      fVar19 = fVar19 * param_2;
      lVar13 = lVar13 + 0x20 + (long)(int)uVar1 * 0x88;
      uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
      *(undefined8 *)(lVar13 + 0x28) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
      *(undefined4 *)(lVar13 + 0x30) = uVar25;
      *(float *)(lVar13 + 0x60) = fVar19 * fVar6;
      *(float *)(lVar13 + 0x18) = fVar23 * (param_4 / fVar27);
      fVar23 = (float)iVar17;
      iVar17 = iVar17 + 1;
      *(float *)(lVar13 + 0x10) = fVar20 * (param_4 / fVar27);
      *(float *)(lVar13 + 0x14) = (fVar19 * 4.0) / fVar27;
      *(float *)(lVar13 + 0x40) = -param_5 + fVar23 * fVar2;
      *(float *)(lVar13 + 0x58) = (fVar19 * -8.0) / (fVar27 * fVar27);
    } while (param_9 != iVar17);
  }
  return;
}

