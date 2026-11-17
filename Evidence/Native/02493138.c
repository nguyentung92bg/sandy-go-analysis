/* IL2CPP: Dino.BusSand.View.Fx$$Sparks
void Dino_BusSand_View_Fx__Sparks (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o dir, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$Sparks
   void Dino_BusSand_View_Fx__Sparks (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   UnityEngine_Vector3_o dir, int32_t n, const MethodInfo* method); */

void Dino_BusSand_View_Fx__Sparks_2393138
               (undefined4 param_1,float param_2,uint param_3,float param_4,float param_5,
               float param_6,long param_7,int param_8)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fStack_54;
  
                    /* try { // try from 0249313c to 02593147 has its CatchHandler @ 02492b2c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02493134 with catch @ 02493144
                        */
  if ((bRam0000000004f9c8f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    bRam0000000004f9c8f1 = 1;
  }
  puVar7 = PTR_DAT_04cbc100;
  puVar6 = PTR_DAT_04caa208;
  puVar5 = PTR_DAT_04caa200;
  fVar4 = _UNK_00e20a08;
  fVar3 = _UNK_00e2098c;
  uVar2 = _UNK_00e208d0;
  uVar22 = _UNK_00e205f0;
  fVar1 = _UNK_00e20390;
  uVar16 = _UNK_00e201f4;
  uVar15 = _UNK_00e20174;
  fVar19 = _UNK_00e200f8;
  if (0 < param_8) {
    fVar11 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
    uVar14 = (ulong)(uint)(param_4 / fVar11);
    fVar12 = param_5 / fVar11;
    do {
      fVar13 = (float)uVar14;
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(puVar5);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar17 = param_4 / fVar11;
      fVar20 = param_5 / fVar11;
      fVar23 = param_6 / fVar11;
      if (fVar11 <= fVar4) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(puVar6);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar6 + 0xb8);
        fVar17 = *pfVar8;
        fVar20 = pfVar8[1];
        fVar23 = pfVar8[2];
      }
      fStack_54 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(puVar5);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fStack_54 = fVar17 * fVar3 + fStack_54;
      fVar12 = fVar20 * fVar3 + fVar12;
      fVar13 = fVar23 * fVar3 + fVar13;
      fVar17 = SQRT(fVar13 * fVar13 + fStack_54 * fStack_54 + fVar12 * fVar12);
      if (fVar17 <= fVar4) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(puVar6);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar6 + 0xb8);
        fStack_54 = *pfVar8;
        fVar20 = pfVar8[1];
        fVar13 = pfVar8[2];
      }
      else {
        fStack_54 = fStack_54 / fVar17;
        fVar20 = fVar12 / fVar17;
        fVar13 = fVar13 / fVar17;
      }
      UnityEngine_Random__get_value_43b6570(0);
      uVar10 = *(undefined8 *)(param_7 + 0x30);
      fVar17 = (float)UnityEngine_Random__Range_43b64a8(0x40200000,0x40e00000,0);
      fVar18 = *(float *)(param_7 + 0x58);
      fVar23 = (float)UnityEngine_Random__Range_43b64a8(uVar15,uVar22,0);
      fVar21 = *(float *)(param_7 + 0x58);
      UnityEngine_Random__Range_43b64a8(uVar16,uVar2,0);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = (ulong)param_3;
      fVar12 = param_2;
      Dino_BusSand_View_Fx__Emit_23988c0
                (param_1,param_2,uVar14,fStack_54 * fVar17 * fVar18,
                 (ABS(fVar20) * fVar19 + fVar1) * fVar17 * fVar18,fVar13 * fVar17 * fVar18,
                 fVar23 * fVar21,uVar10);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  uVar10 = *(undefined8 *)(param_7 + 0x48);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  fVar19 = *(float *)(param_7 + 0x58);
  puVar9 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
  uVar15 = *puVar9;
  uVar16 = puVar9[1];
  uVar22 = puVar9[2];
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_Fx__Emit_23988c0
            (param_1,param_2,param_3,uVar15,uVar16,uVar22,fVar19 * _UNK_00e1fea8,uVar10);
  return;
}

