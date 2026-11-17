/* IL2CPP: Dino.BusSand.View.Fx$$Glow
void Dino_BusSand_View_Fx__Glow (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Color_o c, float size, float life, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$Glow
   void Dino_BusSand_View_Fx__Glow (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   UnityEngine_Color_o c, float size, float life, const MethodInfo* method); */

void Dino_BusSand_View_Fx__Glow_2398b34
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float in_s7;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
                    /* try { // try from 02498b4c to 02598b53 has its CatchHandler @ 02499238 */
  if ((bRam0000000004f9c8ed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
                    /* try { // try from 02498b8c to 02598b93 has its CatchHandler @ 02499234 */
    bRam0000000004f9c8ed = 1;
  }
  puVar1 = PTR_DAT_04cbc100;
                    /* try { // try from 02498ba0 to 02598baf has its CatchHandler @ 02499230 */
  uVar3 = *(undefined8 *)(param_4 + 0x48);
  if (cRam0000000004f9b65d == '\0') {
                    /* try { // try from 02498bb0 to 02598bc3 has its CatchHandler @ 0249922c */
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  fVar7 = *(float *)(param_4 + 0x58);
  puVar2 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                    /* try { // try from 02498bdc to 02598be3 has its CatchHandler @ 02499214 */
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02498bec to 02598bef has its CatchHandler @ 02499210 */
                    /* try { // try from 02498bf0 to 02598bfb has its CatchHandler @ 0249920c */
                    /* try { // try from 02498c0c to 02598c1b has its CatchHandler @ 02499208 */
                    /* try { // try from 02498c1c to 02598c2f has its CatchHandler @ 02499204 */
  Dino_BusSand_View_Fx__Emit_23988c0(param_1,param_2,param_3,uVar4,uVar5,uVar6,fVar7 * in_s7,uVar3);
                    /* try { // try from 02498c40 to 02598c47 has its CatchHandler @ 024991f8 */
  return;
}

