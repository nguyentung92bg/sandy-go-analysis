/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$.ctor
void Dino_BusSand_Cheat_CheatConfig___ctor (Dino_BusSand_Cheat_CheatConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$.ctor
   void Dino_BusSand_Cheat_CheatConfig___ctor (Dino_BusSand_Cheat_CheatConfig_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_Cheat_CheatConfig___ctor_235af70(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar4 = PTR_DAT_04cba418;
  puVar3 = PTR_DAT_04cba368;
  puVar2 = PTR_DAT_04cba360;
  puVar1 = PTR_DAT_04caadd0;
                    /* try { // try from 0245af94 to 0255afbb has its CatchHandler @ 0245b108 */
  if ((bRam0000000004f9c727 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba368);
                    /* try { // try from 0245afc4 to 0255afcb has its CatchHandler @ 0245b100 */
    FUN_02132f7c(PTR_DAT_04cba360);
                    /* try { // try from 0245afcc to 0255afd7 has its CatchHandler @ 0245b0fc */
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cba418);
                    /* try { // try from 0245afe4 to 0255afef has its CatchHandler @ 0245b0f4 */
    bRam0000000004f9c727 = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
                    /* try { // try from 0245aff0 to 0255affb has its CatchHandler @ 0245b0f0 */
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = 10000;
  *(undefined4 *)(param_1 + 0x20) = 5;
  uVar5 = FUN_02133068(uVar5,5);
                    /* try { // try from 0245b00c to 0255b00f has its CatchHandler @ 0245b0e4 */
                    /* try { // try from 0245b010 to 0255b01b has its CatchHandler @ 0245b0e8 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar5,*(undefined8 *)puVar4,0);
                    /* try { // try from 0245b01c to 0255b027 has its CatchHandler @ 0245b0ec */
  *(undefined8 *)(param_1 + 0x28) = uVar5;
                    /* try { // try from 0245b028 to 0255b0cf has its CatchHandler @ 0245ad3c */
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar5);
  uVar5 = _UNK_00e6a658;
  uVar6 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x38) = 0x3fcccccd;
  *(undefined2 *)(param_1 + 0x3e) = 0x101;
  *(undefined8 *)(param_1 + 0x44) = 0x13fc00000;
  *(undefined4 *)(param_1 + 0x4c) = 0x43700000;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0x40000000;
  uVar5 = thunk_FUN_0216e89c(uVar6);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar5);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1;
  return auVar7;
}

