/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Win
System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Win (Dino_BusSand_Cheat_AutoQa_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Win
   System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Win (Dino_BusSand_Cheat_AutoQa_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__Win_2341a98(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb9608;
  if ((bRam0000000004f9c68d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9608);
    bRam0000000004f9c68d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_Cheat_AutoQa__Win_d__35___ctor_2356674(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

