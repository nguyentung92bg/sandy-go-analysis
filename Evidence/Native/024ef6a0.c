/* IL2CPP: Dino.BusSand.View.VehicleBatch$$get_Available
bool Dino_BusSand_View_VehicleBatch__get_Available (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$get_Available
   bool Dino_BusSand_View_VehicleBatch__get_Available (const MethodInfo* method); */

uint Dino_BusSand_View_VehicleBatch__get_Available_23ef6a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar3 = PTR_DAT_04cbdd80;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 024ef6c4 to 025ef6cb has its CatchHandler @ 024ef6e8 */
  if ((bRam0000000004f9cab3 & 1) == 0) {
                    /* try { // try from 024ef6cc to 025ef6cf has its CatchHandler @ 024ef6e4 */
                    /* try { // try from 024ef6d0 to 025ef6d3 has its CatchHandler @ 024ef6e0 */
    FUN_02132f7c(PTR_DAT_04cab208);
                    /* try { // try from 024ef6d4 to 025ef70f has its CatchHandler @ 024ef448 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ef6d0 with catch @ 024ef6e0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ef6cc with catch @ 024ef6e4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ef6c4 with catch @ 024ef6e8
                        */
    FUN_02132f7c(PTR_DAT_04cbdd80);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ef5e8 with catch @ 024ef6ec
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ef5ac with catch @ 024ef6f0
                        */
    bRam0000000004f9cab3 = 1;
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ef548 with catch @ 024ef6f4
                        */
  uVar5 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 024ef710 to 025ef713 has its CatchHandler @ 024ef71c */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* catch() { ... } // from try @ 024ef710 with catch @ 024ef71c */
                    /* try { // try from 024ef720 to 025ef727 has its CatchHandler @ 024ef730 */
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  puVar2 = PTR_DAT_04cab208;
                    /* try { // try from 024ef728 to 025ef733 has its CatchHandler @ 024ef448 */
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar5,0);
      return (uVar4 ^ 0xffffffff) & 1;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024ef720 with catch @ 024ef730
                        */
  }
  return uVar4;
}

