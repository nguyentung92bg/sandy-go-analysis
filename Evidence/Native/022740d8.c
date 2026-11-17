/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass14_1$$<Attach>b__0
void Dino_BusSand_App_CrashContext___c__DisplayClass14_1___Attach_b__0 (Dino_BusSand_App_CrashContext___c__DisplayClass14_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass14_1$$<Attach>b__0
   void Dino_BusSand_App_CrashContext___c__DisplayClass14_1___Attach_b__0
   (Dino_BusSand_App_CrashContext___c__DisplayClass14_1_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext___c__DisplayClass14_1___Attach_b__0_21740d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000004f9b8c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cace10);
    FUN_02132f7c(PTR_DAT_04ca9da8);
    FUN_02132f7c(PTR_DAT_04ca9db0);
    bRam0000000004f9b8c3 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x10), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar7;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 0227413c to 0237414f has its CatchHandler @ 02274164 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 02274150 to 0237417b has its CatchHandler @ 022740c4 */
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04cace10) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02274184;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 0227413c with catch @ 02274164 */
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cace10,0);
LAB_02274184:
                    /* WARNING: Could not recover jumptable at 0x0227419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,uVar1,uVar2,puVar3[1]);
  return;
}

