/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Ready
bool Dino_BusSand_Cheat_CheatManager__get_Ready (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Ready
   bool Dino_BusSand_Cheat_CheatManager__get_Ready (const MethodInfo* method); */

bool Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_04caba50;
                    /* try { // try from 0245da54 to 0255da5f has its CatchHandler @ 0245dc24 */
  if ((bRam0000000004f9c763 & 1) == 0) {
                    /* try { // try from 0245da68 to 0255da73 has its CatchHandler @ 0245dc20 */
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0245da74 to 0255da7f has its CatchHandler @ 0245dc2c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0245da88 to 0255da93 has its CatchHandler @ 0245dc44 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c763 = 1;
  }
                    /* try { // try from 0245da94 to 0255da9f has its CatchHandler @ 0245dc28 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0245daa8 to 0255dab3 has its CatchHandler @ 0245dc30 */
  if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 0245dab4 to 0255dabf has its CatchHandler @ 0245dc38 */
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
                    /* try { // try from 0245dac8 to 0255dad3 has its CatchHandler @ 0245dc40 */
                    /* try { // try from 0245dad4 to 0255dadf has its CatchHandler @ 0245dc3c */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
                    /* try { // try from 0245dae8 to 0255daf3 has its CatchHandler @ 0245dc34 */
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0245daf4 to 0255db63 has its CatchHandler @ 0245dc8c */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04cabaf8;
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(**(long **)(lVar3 + 0xb8) + 0x3a) != '\0') {
                    /* try { // try from 0245db6c to 0255db6f has its CatchHandler @ 0245dc7c */
                    /* try { // try from 0245db70 to 0255dc07 has its CatchHandler @ 0245d5b0 */
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      return *(long *)(*(long *)(lVar3 + 0xb8) + 0x10) != 0;
    }
  }
  return false;
}

