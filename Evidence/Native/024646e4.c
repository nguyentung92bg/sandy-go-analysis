/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$LoadConfig
void Dino_BusSand_Cheat_CheatManager__LoadConfig (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$LoadConfig
   void Dino_BusSand_Cheat_CheatManager__LoadConfig (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__LoadConfig_23646e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar7;
  long *plVar8;
  
                    /* catch() { ... } // from try @ 02464650 with catch @ 024646e4 */
                    /* catch() { ... } // from try @ 024645f4 with catch @ 024646e8 */
                    /* catch() { ... } // from try @ 0246464c with catch @ 024646ec */
                    /* catch() { ... } // from try @ 024642d4 with catch @ 024646f0 */
  if ((bRam0000000004f9c75b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
                    /* try { // try from 0246470c to 0256470f has its CatchHandler @ 02464730 */
                    /* try { // try from 02464710 to 02564733 has its CatchHandler @ 024640b4 */
    FUN_02132f7c(PTR_DAT_04cba480);
    bRam0000000004f9c75b = 1;
  }
  uVar2 = Dino_BusSand_Cheat_CheatConfig__Load_235a680(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
                    /* catch() { ... } // from try @ 0246470c with catch @ 02464730 */
  thunk_FUN_02134474(param_1 + 0x100,uVar2);
                    /* try { // try from 02464734 to 0256473b has its CatchHandler @ 024647f8 */
                    /* try { // try from 0246473c to 02564777 has its CatchHandler @ 024640b4 */
  uVar3 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_1 + 0x108),0);
  puVar1 = PTR_DAT_04ca9af8;
                    /* catch() { ... } // from try @ 024644f4 with catch @ 02464740 */
  if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 02464648 with catch @ 02464744 */
                    /* catch() { ... } // from try @ 02464530 with catch @ 02464748 */
                    /* catch() { ... } // from try @ 02464644 with catch @ 0246474c */
    return;
  }
                    /* catch() { ... } // from try @ 024645c0 with catch @ 02464750 */
                    /* catch() { ... } // from try @ 024644b8 with catch @ 02464754 */
  uVar2 = System_String__Concat_46c82e0
                    (*(undefined8 *)PTR_DAT_04cba480,*(undefined8 *)(param_1 + 0x108),0);
                    /* try { // try from 02464778 to 0256477b has its CatchHandler @ 02464794 */
                    /* try { // try from 0246477c to 02564797 has its CatchHandler @ 024640b4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04ca9af8;
  uVar6 = 0;
                    /* catch() { ... } // from try @ 02464778 with catch @ 02464794 */
                    /* try { // try from 02464798 to 0256479f has its CatchHandler @ 024647f8 */
  if ((bRam0000000004fa626c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8,0);
    FUN_02132f7c(PTR_DAT_04ce7050);
    bRam0000000004fa626c = 1;
    uVar6 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar6 = extraout_x1_00;
  }
  if (cRam0000000004f9d848 == '\0') {
    FUN_02132f7c(PTR_DAT_04ca9af8,uVar6);
    cRam0000000004f9d848 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar8;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04ce7050) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_04457b18;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar8,2,uVar2,puVar5[1]);
  return;
}

