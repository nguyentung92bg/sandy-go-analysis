/* IL2CPP: Dino.BusSand.View.Fx$$GroundRing
void Dino_BusSand_View_Fx__GroundRing (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Color_o c, float diameter, float life, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$GroundRing
   void Dino_BusSand_View_Fx__GroundRing (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   UnityEngine_Color_o c, float diameter, float life, const MethodInfo* method); */

void Dino_BusSand_View_Fx__GroundRing_2398c44
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 in_s7;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* try { // try from 02498c74 to 02598c9f has its CatchHandler @ 02499268 */
  if ((bRam0000000004f9c8ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    bRam0000000004f9c8ee = 1;
  }
  puVar1 = PTR_DAT_04cbc100;
  uVar3 = *(undefined8 *)(param_4 + 0x50);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 02498cc0 to 02598ce7 has its CatchHandler @ 0249924c */
    cRam0000000004f9b65d = '\x01';
  }
  puVar2 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02498d08 to 02598d2f has its CatchHandler @ 02499248 */
  Dino_BusSand_View_Fx__Emit_23988c0(param_1,param_2,param_3,uVar4,uVar5,uVar6,in_s7,uVar3);
                    /* try { // try from 02498d38 to 02598d3f has its CatchHandler @ 024991d8 */
  return;
}

