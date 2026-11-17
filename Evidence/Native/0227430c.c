/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass15_0$$<NonFatal>b__0
void Dino_BusSand_App_CrashContext___c__DisplayClass15_0___NonFatal_b__0 (Dino_BusSand_App_CrashContext___c__DisplayClass15_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass15_0$$<NonFatal>b__0
   void Dino_BusSand_App_CrashContext___c__DisplayClass15_0___NonFatal_b__0
   (Dino_BusSand_App_CrashContext___c__DisplayClass15_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext___c__DisplayClass15_0___NonFatal_b__0_217430c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9b8c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cace10);
    bRam0000000004f9b8c6 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* catch() { ... } // from try @ 022743a0 with catch @ 0227435c */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_04cace10) {
                    /* try { // try from 02274394 to 0237439f has its CatchHandler @ 02274444 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_0227439c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cace10,2);
LAB_0227439c:
                    /* try { // try from 022743a0 to 02374463 has its CatchHandler @ 0227435c */
                    /* WARNING: Could not recover jumptable at 0x022743b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

