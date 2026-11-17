/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass14_3$$<Attach>b__2
void Dino_BusSand_App_CrashContext___c__DisplayClass14_3___Attach_b__2 (Dino_BusSand_App_CrashContext___c__DisplayClass14_3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext.<>c__DisplayClass14_3$$<Attach>b__2
   void Dino_BusSand_App_CrashContext___c__DisplayClass14_3___Attach_b__2
   (Dino_BusSand_App_CrashContext___c__DisplayClass14_3_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext___c__DisplayClass14_3___Attach_b__2_2174258(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9b8c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cace10);
    bRam0000000004f9b8c5 = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x10), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_04cace10) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_022742f0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cace10,2);
LAB_022742f0:
                    /* WARNING: Could not recover jumptable at 0x02274304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

