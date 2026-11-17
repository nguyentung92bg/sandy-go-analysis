/* IL2CPP: Dino.BusSand.View.Fx$$StarsFlat
void Dino_BusSand_View_Fx__StarsFlat (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, int32_t n, float speed, float size, System_Nullable_Color__o tint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$StarsFlat
   void Dino_BusSand_View_Fx__StarsFlat (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   int32_t n, float speed, float size, System_Nullable_Color__o tint, const MethodInfo* method); */

void Dino_BusSand_View_Fx__StarsFlat_2398d44
               (undefined4 param_1,float param_2,undefined4 param_3,float param_4,float param_5,
               long param_6,uint param_7,char *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  
  puVar9 = PTR_DAT_04cbc230;
                    /* try { // try from 02498d48 to 02598d73 has its CatchHandler @ 02499244 */
                    /* try { // try from 02498d88 to 02598daf has its CatchHandler @ 02499240 */
  fVar23 = param_2;
  if ((bRam0000000004f9c8f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
                    /* try { // try from 02498dc4 to 02598deb has its CatchHandler @ 0249923c */
    FUN_02132f7c(PTR_DAT_04cbc230);
    bRam0000000004f9c8f0 = 1;
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Physics__get_gravity_443e828(0);
                    /* try { // try from 02498df8 to 02598e03 has its CatchHandler @ 024991cc */
  if (*(long *)(param_6 + 0x28) != 0) {
                    /* try { // try from 02498e04 to 02598e17 has its CatchHandler @ 024991c8 */
    uStack_a8 = UnityEngine_ParticleSystem__get_main_443295c(*(long *)(param_6 + 0x28),0);
    UnityEngine_ParticleSystem_MainModule__get_gravityModifier_4437a2c(&uStack_f0,&uStack_a8,0);
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    fVar16 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant_4438170(&uStack_d0,0);
                    /* try { // try from 02498e40 to 02598e47 has its CatchHandler @ 0249918c */
    fVar17 = (float)UnityEngine_Random__Range_43b64a8(0,_UNK_00e1fdf4,0);
    puVar10 = PTR_DAT_04cbc100;
    puVar9 = PTR_DAT_04caa208;
    uVar8 = _UNK_00e208e8;
    uVar7 = _UNK_00e208d8;
    uVar6 = _UNK_00e20864;
    fVar5 = _UNK_00e2082c;
    uVar4 = _UNK_00e207cc;
    uVar3 = _UNK_00e200f8;
    uVar2 = _UNK_00e20094;
    if (0 < (int)param_7) {
                    /* try { // try from 02498e7c to 02598e8b has its CatchHandler @ 0249917c */
      uVar14 = 0;
      iVar15 = 2;
                    /* try { // try from 02498e98 to 02598e9f has its CatchHandler @ 02499178 */
                    /* try { // try from 02498eb4 to 02598ec3 has its CatchHandler @ 02499180 */
                    /* try { // try from 02498ed4 to 02598ee3 has its CatchHandler @ 02499174 */
      do {
        fVar18 = (float)UnityEngine_Random__Range_43b64a8(uVar6,uVar4,0);
                    /* try { // try from 02498ef4 to 02598f03 has its CatchHandler @ 02499188 */
                    /* try { // try from 02498f04 to 02598f17 has its CatchHandler @ 02499184 */
        fVar18 = ((fVar18 + (float)(int)uVar14) / (float)(int)param_7) * fVar5;
        fVar19 = (float)UnityEngine_Random__Range_43b64a8(uVar8,uVar3,0);
                    /* try { // try from 02498f28 to 02598f37 has its CatchHandler @ 02499170 */
        sincosf(fVar17 + fVar18 + fVar18,&fStack_f4,&fStack_f8);
        fVar11 = fStack_f4;
        fVar20 = *(float *)(param_6 + 0x58);
                    /* try { // try from 02498f4c to 02598f53 has its CatchHandler @ 0249916c */
        fVar21 = (float)UnityEngine_Random__Range_43b64a8(uVar2,0x3f800000,0);
        fVar18 = fStack_f8;
        if (cRam0000000004f9bcf8 == '\0') {
                    /* try { // try from 02498f6c to 02598f73 has its CatchHandler @ 02499168 */
          FUN_02132f7c(puVar9);
          cRam0000000004f9bcf8 = '\x01';
        }
        lVar12 = *(long *)(*(long *)puVar9 + 0xb8);
        fVar24 = *(float *)(lVar12 + 0x20);
                    /* try { // try from 02498f84 to 02598f8f has its CatchHandler @ 02499164 */
        uVar25 = *(undefined8 *)(lVar12 + 0x18);
        if (*param_8 == '\0') {
          iVar1 = *(int *)(*(long *)puVar10 + 0xe4);
          if (iVar15 + (uVar14 / 3) * 3 == 0) {
            if (iVar1 == 0) {
              thunk_FUN_0218fdac();
            }
          }
          else {
            if (iVar1 == 0) {
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 02498fbc to 02598fbf has its CatchHandler @ 024992a8 */
            UnityEngine_Random__get_value_43b6570(0);
                    /* try { // try from 02498fe0 to 02598feb has its CatchHandler @ 02499270 */
                    /* try { // try from 02498fec to 0259903b has its CatchHandler @ 02498270 */
          }
        }
        uVar13 = *(undefined8 *)(param_6 + 0x28);
        fVar26 = *(float *)(param_6 + 0x58);
                    /* try { // try from 0249903c to 0259904b has its CatchHandler @ 0249915c */
        fVar22 = (float)UnityEngine_Random__Range_43b64a8(uVar3,uVar7,0);
        UnityEngine_Random__Range_43b64a8(0xc1a00000,0x41a00000,0);
                    /* try { // try from 02499064 to 0259906b has its CatchHandler @ 02499154 */
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0249906c to 0259907f has its CatchHandler @ 02499150 */
                    /* try { // try from 02499080 to 02599087 has its CatchHandler @ 02498270 */
                    /* try { // try from 02499088 to 0259908b has its CatchHandler @ 024992e4 */
                    /* try { // try from 0249908c to 0259908f has its CatchHandler @ 024992e0 */
                    /* try { // try from 02499090 to 02599093 has its CatchHandler @ 024992c0 */
                    /* try { // try from 02499094 to 02599097 has its CatchHandler @ 024992a4 */
                    /* try { // try from 02499098 to 0259909b has its CatchHandler @ 024992a0 */
        fVar21 = fVar20 * param_4 * fVar21;
                    /* try { // try from 0249909c to 0259909f has its CatchHandler @ 0249929c */
        fVar19 = ABS(fVar23) * fVar16 * fVar19 * 0.5;
                    /* try { // try from 024990a0 to 025990a3 has its CatchHandler @ 02499294 */
                    /* try { // try from 024990a4 to 025990a7 has its CatchHandler @ 02499290 */
                    /* try { // try from 024990a8 to 025990ab has its CatchHandler @ 0249928c */
                    /* try { // try from 024990ac to 025990af has its CatchHandler @ 02499288 */
                    /* try { // try from 024990b0 to 025990b3 has its CatchHandler @ 02499284 */
                    /* try { // try from 024990b4 to 025990b7 has its CatchHandler @ 024992b4 */
        fVar20 = fVar21 * 0.0 + (float)((ulong)uVar25 >> 0x20) * fVar19;
                    /* try { // try from 024990b8 to 025990bb has its CatchHandler @ 024992c4 */
                    /* try { // try from 024990bc to 025990bf has its CatchHandler @ 0249927c */
                    /* try { // try from 024990c0 to 025990c3 has its CatchHandler @ 024992a8 */
                    /* try { // try from 024990c4 to 025990c7 has its CatchHandler @ 02499274 */
                    /* try { // try from 024990c8 to 025990cb has its CatchHandler @ 02499264 */
                    /* try { // try from 024990cc to 025990cf has its CatchHandler @ 02499260 */
                    /* try { // try from 024990d0 to 025990d3 has its CatchHandler @ 0249925c */
                    /* try { // try from 024990d4 to 025990d7 has its CatchHandler @ 02499258 */
        Dino_BusSand_View_Fx__Emit_23988c0
                  (param_1,param_2,param_3,CONCAT44(fVar20,fVar18 * fVar21 + (float)uVar25 * fVar19)
                   ,fVar20,fVar21 * fVar11 + fVar19 * fVar24,fVar26 * param_5 * fVar22,uVar13);
                    /* try { // try from 024990d8 to 025990db has its CatchHandler @ 02499254 */
                    /* try { // try from 024990dc to 025990df has its CatchHandler @ 02499250 */
        uVar14 = uVar14 + 1;
                    /* try { // try from 024990e0 to 025990e3 has its CatchHandler @ 02499224 */
        iVar15 = iVar15 + -1;
                    /* try { // try from 024990e4 to 025990e7 has its CatchHandler @ 02499220 */
                    /* try { // try from 024990e8 to 025990eb has its CatchHandler @ 024991f4 */
      } while (param_7 != uVar14);
    }
                    /* try { // try from 024990ec to 025990ef has its CatchHandler @ 024991f0 */
                    /* try { // try from 024990f0 to 025990f3 has its CatchHandler @ 02499268 */
                    /* try { // try from 024990f4 to 025990f7 has its CatchHandler @ 024991ec */
                    /* try { // try from 024990f8 to 025990fb has its CatchHandler @ 024991e8 */
                    /* try { // try from 024990fc to 025990ff has its CatchHandler @ 024991e4 */
                    /* try { // try from 02499100 to 02599103 has its CatchHandler @ 024991e0 */
                    /* try { // try from 02499104 to 02599107 has its CatchHandler @ 024991dc */
                    /* try { // try from 02499108 to 0259910b has its CatchHandler @ 024991d4 */
                    /* try { // try from 0249910c to 0259910f has its CatchHandler @ 024991d0 */
                    /* try { // try from 02499110 to 02599113 has its CatchHandler @ 024991c0 */
                    /* try { // try from 02499114 to 02599117 has its CatchHandler @ 024991bc */
                    /* try { // try from 02499118 to 0259911b has its CatchHandler @ 024991ac */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0249911c to 0259911f has its CatchHandler @ 024991a8 */
  FUN_02133224();
}

