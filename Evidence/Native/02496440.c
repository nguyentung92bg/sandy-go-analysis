/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Put
void Dino_BusSand_View_EndSuctionCue__Put (Dino_BusSand_View_EndSuctionCue_o* __this, UnityEngine_Transform_o* t, float rows, float thicknessRows, float liftRows, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Put
   void Dino_BusSand_View_EndSuctionCue__Put (Dino_BusSand_View_EndSuctionCue_o* __this,
   UnityEngine_Transform_o* t, float rows, float thicknessRows, float liftRows, const MethodInfo*
   method); */

void Dino_BusSand_View_EndSuctionCue__Put_2396440
               (float param_1,undefined1 param_2 [16],float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  if ((bRam0000000004f9c8e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8e0 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_4 + 0x10);
  if ((lVar4 != 0) && (param_5 != 0)) {
                    /* try { // try from 024964ac to 025964f3 has its CatchHandler @ 02496a60 */
    fVar5 = *(float *)(lVar4 + 100) * 0.5;
    param_1 = *(float *)(lVar4 + 0x5c) * param_1;
    param_3 = *(float *)(lVar4 + 0x5c) * param_3;
                    /* try { // try from 024964f8 to 025964ff has its CatchHandler @ 02496aa0 */
    UnityEngine_Transform__set_position_43d0f1c
              ((float)*(undefined8 *)(lVar4 + 0x74) + (float)*(undefined8 *)(lVar4 + 0x98) * fVar5 +
               (float)*(undefined8 *)(lVar4 + 0x80) * param_1 +
               (float)*(undefined8 *)(lVar4 + 0x8c) * param_3,
               (float)((ulong)*(undefined8 *)(lVar4 + 0x74) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar4 + 0x98) >> 0x20) * fVar5 +
               (float)((ulong)*(undefined8 *)(lVar4 + 0x80) >> 0x20) * param_1 +
               (float)((ulong)*(undefined8 *)(lVar4 + 0x8c) >> 0x20) * param_3,
               *(float *)(lVar4 + 0x94) * param_3 +
               *(float *)(lVar4 + 0x7c) + *(float *)(lVar4 + 0xa0) * fVar5 +
               *(float *)(lVar4 + 0x88) * param_1,param_5,0);
    UnityEngine_Quaternion__LookRotation_43af2a0
              (-*(float *)(lVar4 + 0x8c),-*(float *)(lVar4 + 0x90),-*(float *)(lVar4 + 0x94),
               *(undefined4 *)(lVar4 + 0x80),*(undefined4 *)(lVar4 + 0x84),
               *(undefined4 *)(lVar4 + 0x88),0);
    UnityEngine_Transform__set_rotation_43d13f8(param_5,0);
    uVar2 = UnityEngine_Transform__get_parent_43d0d70(param_5,0);
                    /* try { // try from 02496550 to 02596557 has its CatchHandler @ 02496a9c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
    }
    else {
                    /* try { // try from 02496578 to 025965bf has its CatchHandler @ 024969a8 */
      lVar4 = UnityEngine_Transform__get_parent_43d0d70(param_5,0);
      if (lVar4 == 0) goto LAB_02496610;
      UnityEngine_Transform__get_lossyScale_43d4cf0(lVar4,0);
    }
                    /* try { // try from 024965f0 to 02596637 has its CatchHandler @ 024969e8 */
    if ((bRam0000000004fa8b3e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3e = 1;
    }
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(param_5 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
    if (pcRam0000000004fa8bf0 == (code *)0x0) {
      pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
    }
    (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
    return;
  }
LAB_02496610:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

