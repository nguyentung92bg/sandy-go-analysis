/* IL2CPP: Dino.BusSand.View.Fx$$Emit
void Dino_BusSand_View_Fx__Emit (UnityEngine_ParticleSystem_o* ps, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o vel, float size, UnityEngine_Color_o c, float life, float rot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$Emit
   void Dino_BusSand_View_Fx__Emit (UnityEngine_ParticleSystem_o* ps, UnityEngine_Vector3_o pos,
   UnityEngine_Vector3_o vel, float size, UnityEngine_Color_o c, float life, float rot, const
   MethodInfo* method); */

void Dino_BusSand_View_Fx__Emit_23988c0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8)

{
  undefined4 uVar1;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined1 auStack_180 [144];
  undefined1 auStack_f0 [144];
  
                    /* try { // try from 02498920 to 0259892b has its CatchHandler @ 02499200 */
  func_0x049b52e0(auStack_f0,0,0x90);
                    /* try { // try from 02498930 to 0259893b has its CatchHandler @ 024991fc */
  UnityEngine_ParticleSystem_EmitParams__set_position_44384dc(param_1,param_2,param_3,auStack_f0,0);
                    /* try { // try from 02498948 to 02598953 has its CatchHandler @ 0249926c */
  UnityEngine_ParticleSystem_EmitParams__set_velocity_44384f8(param_4,param_5,param_6,auStack_f0,0);
  UnityEngine_ParticleSystem_EmitParams__set_startSize_443851c(param_7,auStack_f0,0);
                    /* try { // try from 02498970 to 0259897b has its CatchHandler @ 0249921c */
  uVar1 = FUN_023e4c88(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                       uStack000000000000000c,0);
  UnityEngine_ParticleSystem_EmitParams__set_startColor_4438550(auStack_f0,uVar1,0);
                    /* try { // try from 02498998 to 025989a7 has its CatchHandler @ 02499228 */
  UnityEngine_ParticleSystem_EmitParams__set_startLifetime_443850c(in_stack_00000010,auStack_f0,0);
  UnityEngine_ParticleSystem_EmitParams__set_rotation_4438530(in_stack_00000018,auStack_f0,0);
  UnityEngine_ParticleSystem_EmitParams__set_applyShapeToPosition_44384f0(auStack_f0,0,0);
  if (param_8 != 0) {
    func_0x049b5410(auStack_180,auStack_f0,0x90);
                    /* try { // try from 024989d8 to 025989e3 has its CatchHandler @ 024991a0 */
    UnityEngine_ParticleSystem__Emit_4436638(param_8,auStack_180,1,0);
                    /* try { // try from 024989fc to 02598a07 has its CatchHandler @ 024991b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

