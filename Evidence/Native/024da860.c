/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Pose
void Dino_BusSand_View_PickUpClaw__Pose (Dino_BusSand_View_PickUpClaw_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Pose
   void Dino_BusSand_View_PickUpClaw__Pose (Dino_BusSand_View_PickUpClaw_o* __this, float t, const
   MethodInfo* method); */

void Dino_BusSand_View_PickUpClaw__Pose_23da860
               (float param_1,float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
                    /* try { // try from 024da874 to 025da89b has its CatchHandler @ 024da954 */
  if ((bRam0000000004f9ca3f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024da89c to 025da933 has its CatchHandler @ 024da670 */
    bRam0000000004f9ca3f = 1;
  }
  if ((*(long *)(param_5 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x38), lVar2 != 0)) {
    fVar7 = (float)UnityEngine_Transform__get_position_43d0e48(lVar2,0);
    if (_UNK_00e204e8 <= param_1) {
      if (_UNK_00e204f0 <= param_1) {
                    /* catch() { ... } // from try @ 024da970 with catch @ 024da994 */
                    /* try { // try from 024da998 to 025da99f has its CatchHandler @ 024da9a8 */
        fVar8 = 0.0;
                    /* try { // try from 024da9a0 to 025da9ab has its CatchHandler @ 024da670 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024da998 with catch @ 024da9a8
                        */
        fVar13 = (param_1 + _UNK_00e20074) / _UNK_00e20328;
        fVar9 = 1.0;
        if (fVar13 <= 1.0) {
          fVar9 = fVar13;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar13) {
          fVar11 = fVar9;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar11) {
          fVar9 = fVar11;
        }
        fVar9 = fVar9 * 3.0 + -6.0;
      }
      else {
        if (*(long *)(param_5 + 0x10) == 0) goto LAB_024dab64;
                    /* try { // try from 024da934 to 025da937 has its CatchHandler @ 024da948 */
        fVar13 = (param_1 + _UNK_00e2003c) / _UNK_00e205f0;
                    /* try { // try from 024da938 to 025da93b has its CatchHandler @ 024da944 */
        fVar9 = (float)UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_5 + 0x10),0);
                    /* try { // try from 024da93c to 025da96f has its CatchHandler @ 024da670 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024da854 with catch @ 024da940
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024da938 with catch @ 024da944
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024da934 with catch @ 024da948
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024da858 with catch @ 024da94c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024da830 with catch @ 024da950
                        */
        fVar8 = (float)func_0x049b5320(fVar13 * _UNK_00e2082c);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024da874 with catch @ 024da954
                        */
                    /* try { // try from 024da970 to 025da973 has its CatchHandler @ 024da994 */
                    /* try { // try from 024da974 to 025da997 has its CatchHandler @ 024da670 */
        fVar8 = fVar8 * fVar9 * _UNK_00e206c4;
        param_4 = 0x42080000;
        fVar9 = fVar13 * fVar13 * (3.0 - (fVar13 + fVar13)) * -40.0 + 34.0;
      }
    }
    else {
      fVar9 = 34.0;
      fVar8 = param_1 / _UNK_00e2003c + 1.0;
      fVar8 = fVar8 * fVar8 * fVar8 * 9.0;
    }
    lVar2 = *(long *)(param_5 + 0x10);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    fVar13 = _UNK_00e20a74;
    uVar12 = 0;
    fVar14 = *(float *)(param_5 + 0x30);
    fVar11 = *(float *)(param_5 + 0x34) * _UNK_00e20a74;
    lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar16 = *(float *)(lVar4 + 0x18);
    fVar17 = *(float *)(lVar4 + 0x1c);
    fVar15 = *(float *)(lVar4 + 0x20);
    uVar10 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar11,0,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar2 != 0) {
      fVar8 = fVar8 + fVar14;
                    /* try { // try from 024daa5c to 025dab5b has its CatchHandler @ 024daa5c
                       catch() { ... } // from try @ 024daa5c with catch @ 024daa5c
                       catch() { ... } // from try @ 024dabbc with catch @ 024daa5c
                       catch() { ... } // from try @ 024dac14 with catch @ 024daa5c
                       catch() { ... } // from try @ 024dac50 with catch @ 024daa5c
                       catch() { ... } // from try @ 024dac74 with catch @ 024daa5c */
      UnityEngine_Transform__SetPositionAndRotation_43d2064
                (fVar7 + fVar16 * fVar8,param_2 + fVar17 * fVar8,param_3 + fVar15 * fVar8,uVar10,
                 fVar11,uVar12,param_4,lVar2,0);
      uVar6 = 0;
      while (lVar2 = *(long *)(param_5 + 0x18), lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_024dab68;
        uVar5 = *(undefined8 *)(lVar2 + uVar6 * 8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          lVar2 = *(long *)(param_5 + 0x18);
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_024dab68:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar4 = *(long *)(param_5 + 0x20);
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_024dab68;
          lVar2 = *(long *)(lVar2 + uVar6 * 8 + 0x20);
          UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                    (fVar9 * fVar13,*(float *)(lVar4 + uVar6 * 4 + 0x20) * fVar13,0,0);
          if (lVar2 == 0) break;
          UnityEngine_Transform__set_localRotation_43d156c(lVar2,0);
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == 3) {
                    /* try { // try from 024dab5c to 025dab63 has its CatchHandler @ 024dac30 */
          return;
        }
      }
    }
  }
LAB_024dab64:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

