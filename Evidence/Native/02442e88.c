/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$WaitFor
System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__WaitFor (Dino_BusSand_Cheat_AutoQa_o* __this, System_Func_bool__o* cond, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$WaitFor
   System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__WaitFor
   (Dino_BusSand_Cheat_AutoQa_o* __this, System_Func_bool__o* cond, float seconds, const MethodInfo*
   method); */

long Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb96c0;
  if ((bRam0000000004f9c6a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb96c0);
    bRam0000000004f9c6a2 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_Cheat_AutoQa__WaitFor_d__58___ctor_235641c(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
    *(undefined4 *)(lVar2 + 0x30) = param_1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

