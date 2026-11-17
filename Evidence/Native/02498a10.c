/* IL2CPP: Dino.BusSand.View.Fx$$Ring
void Dino_BusSand_View_Fx__Ring (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Color_o c, float size, float life, UnityEngine_Vector3_o carry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$Ring
   void Dino_BusSand_View_Fx__Ring (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   UnityEngine_Color_o c, float size, float life, UnityEngine_Vector3_o carry, const MethodInfo*
   method); */

void Dino_BusSand_View_Fx__Ring_2398a10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  float in_s7;
  float fVar3;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  
  puVar1 = PTR_DAT_04cbc100;
                    /* try { // try from 02498a18 to 02598a1f has its CatchHandler @ 024991b4 */
                    /* try { // try from 02498a44 to 02598a4b has its CatchHandler @ 02498a8c */
  if ((bRam0000000004f9c8ec & 1) == 0) {
                    /* try { // try from 02498a70 to 02598a77 has its CatchHandler @ 024991b0 */
    FUN_02132f7c(PTR_DAT_04cbc100);
                    /* try { // try from 02498a78 to 02598aab has its CatchHandler @ 02498270 */
    bRam0000000004f9c8ec = 1;
                    /* catch() { ... } // from try @ 02498a44 with catch @ 02498a8c */
  }
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  fVar3 = *(float *)(param_4 + 0x58);
                    /* try { // try from 02498aac to 02598aaf has its CatchHandler @ 0249913c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02498ab0 to 02598b4b has its CatchHandler @ 02498270 */
    thunk_FUN_0218fdac(param_1);
  }
  Dino_BusSand_View_Fx__Emit_23988c0
            (param_1,param_2,param_3,uStack0000000000000008,uStack000000000000000c,in_stack_00000010
             ,fVar3 * in_s7,uVar2);
  return;
}

