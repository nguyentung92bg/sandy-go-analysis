/* IL2CPP: Dino.BusSand.App.CrashContext$$Memory
void Dino_BusSand_App_CrashContext__Memory (System_String_o* moment, Dino_BusSand_App_DeviceMemory_Snapshot_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Memory
   void Dino_BusSand_App_CrashContext__Memory (System_String_o* moment,
   Dino_BusSand_App_DeviceMemory_Snapshot_o m, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Memory_2172060(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9b8b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04caccd0);
    FUN_02132f7c(PTR_DAT_04caccd8);
                    /* try { // try from 022720c0 to 023720df has its CatchHandler @ 022720c0
                       catch() { ... } // from try @ 022720c0 with catch @ 022720c0
                       catch() { ... } // from try @ 022720e8 with catch @ 022720c0
                       catch() { ... } // from try @ 02272110 with catch @ 022720c0
                       catch() { ... } // from try @ 02272138 with catch @ 022720c0
                       catch() { ... } // from try @ 02272160 with catch @ 022720c0
                       catch() { ... } // from try @ 02272188 with catch @ 022720c0
                       catch() { ... } // from try @ 022721b0 with catch @ 022720c0
                       catch() { ... } // from try @ 022721d8 with catch @ 022720c0
                       catch() { ... } // from try @ 022721f0 with catch @ 022720c0
                       catch() { ... } // from try @ 02272214 with catch @ 022720c0
                       catch() { ... } // from try @ 02272238 with catch @ 022720c0 */
    FUN_02132f7c(PTR_DAT_04cacce0);
    FUN_02132f7c(PTR_DAT_04cacce8);
                    /* try { // try from 022720e0 to 023720e7 has its CatchHandler @ 0227238c */
    FUN_02132f7c(PTR_DAT_04caccf0);
                    /* try { // try from 022720e8 to 02372107 has its CatchHandler @ 022720c0 */
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9b8b6 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 02272108 to 0237210f has its CatchHandler @ 02272388 */
  uVar9 = Dino_BusSand_App_DeviceMemory_Snapshot__get_Known_214fa58(param_2,0);
  puVar8 = PTR_DAT_04caccf0;
  puVar6 = PTR_DAT_04cacce0;
  puVar5 = PTR_DAT_04caccd8;
  puVar4 = PTR_DAT_04caccd0;
  puVar2 = PTR_DAT_04cac450;
  puVar1 = (undefined8 *)PTR_DAT_04cab288;
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 02272110 to 0237212f has its CatchHandler @ 022720c0 */
                    /* try { // try from 02272130 to 02372137 has its CatchHandler @ 02272384 */
                    /* try { // try from 02272138 to 02372157 has its CatchHandler @ 022720c0 */
    uVar10 = System_Int64__ToString_482e7e4(param_2,0);
    lVar11 = *(long *)puVar2;
                    /* try { // try from 02272158 to 0237215f has its CatchHandler @ 02272380 */
    if (*(int *)(lVar11 + 0xe4) == 0) {
                    /* try { // try from 02272160 to 0237217f has its CatchHandler @ 022720c0 */
      thunk_FUN_0218fdac(lVar11);
    }
    puVar7 = PTR_DAT_04cacce8;
    puVar3 = PTR_DAT_04caccc8;
    Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar5,uVar10);
                    /* try { // try from 02272180 to 02372187 has its CatchHandler @ 0227237c */
                    /* try { // try from 02272188 to 023721a7 has its CatchHandler @ 022720c0 */
    uVar10 = System_Int64__ToString_482e7e4(param_2 + 1,0);
    Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar6,uVar10);
    uVar10 = *(undefined8 *)puVar4;
                    /* try { // try from 022721a8 to 023721af has its CatchHandler @ 02272378 */
                    /* try { // try from 022721b0 to 023721cf has its CatchHandler @ 022720c0 */
    if ((*(byte *)(param_2 + 3) & 1) != 0) {
      puVar1 = (undefined8 *)puVar8;
    }
    uVar12 = *puVar1;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_CrashContext__Key_216f9dc(uVar10,uVar12);
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
                    /* try { // try from 022721d0 to 023721d7 has its CatchHandler @ 02272374 */
                    /* try { // try from 022721d8 to 023721eb has its CatchHandler @ 022720c0 */
    uVar10 = Dino_BusSand_App_DeviceMemory_Snapshot__ToString_21502ec(&uStack_80,0);
                    /* try { // try from 022721ec to 023721ef has its CatchHandler @ 02272370 */
                    /* try { // try from 022721f0 to 02372203 has its CatchHandler @ 022720c0 */
    System_String__Concat_46d30e8(*(undefined8 *)puVar7,param_1,*(undefined8 *)puVar3,uVar10,0);
    Dino_BusSand_App_CrashContext__Log_216fbd8();
  }
                    /* try { // try from 02272204 to 02372213 has its CatchHandler @ 0227236c */
                    /* try { // try from 02272214 to 02372227 has its CatchHandler @ 022720c0 */
  return;
}

