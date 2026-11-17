/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass23_0$$<Log>b__0
void Dino_BusSand_App_CrashContext___c__DisplayClass23_0___Log_b__0 (Dino_BusSand_App_CrashContext___c__DisplayClass23_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass23_0$$<Log>b__0
   void Dino_BusSand_App_CrashContext___c__DisplayClass23_0___Log_b__0
   (Dino_BusSand_App_CrashContext___c__DisplayClass23_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext___c__DisplayClass23_0___Log_b__0_2174464(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
                    /* try { // try from 02274464 to 02374487 has its CatchHandler @ 02274464
                       catch() { ... } // from try @ 02274464 with catch @ 02274464
                       catch() { ... } // from try @ 02274490 with catch @ 02274464 */
  if ((bRam0000000004f9b8c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cace10);
                    /* try { // try from 02274488 to 0237448f has its CatchHandler @ 022744a0 */
    bRam0000000004f9b8c8 = 1;
  }
                    /* try { // try from 02274490 to 023744bb has its CatchHandler @ 02274464 */
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022744e0 with catch @ 0227450c */
    FUN_02133224();
  }
  lVar2 = *plVar5;
                    /* catch() { ... } // from try @ 02274488 with catch @ 022744a0 */
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 022744bc to 023744df has its CatchHandler @ 022744bc
                       catch() { ... } // from try @ 022744bc with catch @ 022744bc
                       catch() { ... } // from try @ 022744e8 with catch @ 022744bc */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_04cace10) {
                    /* try { // try from 022744e8 to 02374527 has its CatchHandler @ 022744bc */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_022744f4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cace10,1);
                    /* try { // try from 022744e0 to 023744e7 has its CatchHandler @ 0227450c */
LAB_022744f4:
                    /* WARNING: Could not recover jumptable at 0x02274508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

