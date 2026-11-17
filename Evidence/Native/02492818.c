/* IL2CPP: Dino.BusSand.View.Fx$$Stars
void Dino_BusSand_View_Fx__Stars (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, int32_t n, float speed, float size, UnityEngine_Vector3_o carry, System_Nullable_Color__o tint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$Stars
   void Dino_BusSand_View_Fx__Stars (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   int32_t n, float speed, float size, UnityEngine_Vector3_o carry, System_Nullable_Color__o tint,
   const MethodInfo* method); */

void Dino_BusSand_View_Fx__Stars_2392818
               (undefined4 param_1,ulong param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,long param_9,int param_10,char *param_11)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar19 = param_2;
  fVar20 = param_3;
  if ((bRam0000000004f9c8ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    bRam0000000004f9c8ef = 1;
  }
  puVar9 = PTR_DAT_04cbc100;
  puVar8 = PTR_DAT_04caa208;
  puVar7 = PTR_DAT_04caa200;
  fVar6 = _UNK_00e20a08;
  fVar5 = _UNK_00e20660;
  uVar4 = _UNK_00e2038c;
  uVar3 = _UNK_00e20178;
  fVar2 = _UNK_00e20094;
  if (0 < param_10) {
    uVar12 = 0;
    iVar13 = 2;
    do {
      fVar15 = (float)uVar19;
      fVar14 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
      if (*param_11 == '\0') {
        iVar1 = *(int *)(*(long *)puVar9 + 0xe4);
        if (iVar13 + (uVar12 / 3) * 3 == 0) {
          if (iVar1 == 0) {
            thunk_FUN_0218fdac();
          }
        }
        else {
          if (iVar1 == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_Random__get_value_43b6570(0);
        }
      }
      uVar11 = *(undefined8 *)(param_9 + 0x28);
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(puVar7);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar15 = ABS(fVar15) * fVar5 + fVar2;
      fVar18 = SQRT(fVar20 * fVar20 + fVar14 * fVar14 + fVar15 * fVar15);
      if (fVar18 <= fVar6) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(puVar8);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar10 = *(float **)(*(long *)puVar8 + 0xb8);
        fVar14 = *pfVar10;
        fVar15 = pfVar10[1];
        fVar18 = pfVar10[2];
      }
      else {
        fVar14 = fVar14 / fVar18;
        fVar15 = fVar15 / fVar18;
        fVar18 = fVar20 / fVar18;
      }
      fVar21 = *(float *)(param_9 + 0x58);
      fVar16 = (float)UnityEngine_Random__Range_43b64a8(0x3f000000,0x3f800000,0);
      fVar22 = *(float *)(param_9 + 0x58);
      fVar17 = (float)UnityEngine_Random__Range_43b64a8(0x3f400000,uVar3,0);
      UnityEngine_Random__Range_43b64a8(fVar2,uVar4,0);
      UnityEngine_Random__Range_43b64a8(0xc1a00000,0x41a00000,0);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02492b2c to 02592e2f has its CatchHandler @ 02492b2c
                       catch() { ... } // from try @ 02492b2c with catch @ 02492b2c
                       catch() { ... } // from try @ 02492f0c with catch @ 02492b2c
                       catch() { ... } // from try @ 02492fa8 with catch @ 02492b2c
                       catch() { ... } // from try @ 02492fe8 with catch @ 02492b2c
                       catch() { ... } // from try @ 0249313c with catch @ 02492b2c */
      uVar19 = param_2 & 0xffffffff;
      fVar20 = param_3;
      Dino_BusSand_View_Fx__Emit_23988c0
                (param_1,uVar19,param_3,param_6 + fVar14 * param_4 * fVar21 * fVar16,
                 param_7 + fVar15 * param_4 * fVar21 * fVar16,
                 param_8 + fVar18 * param_4 * fVar21 * fVar16,fVar22 * param_5 * fVar17,uVar11);
      param_10 = param_10 + -1;
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + -1;
    } while (param_10 != 0);
  }
  return;
}

