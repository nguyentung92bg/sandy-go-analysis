/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Events
System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Events (Dino_BusSand_Cheat_AutoQa_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Events
   System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Events (Dino_BusSand_Cheat_AutoQa_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__Events_2341e08(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb9648;
  if ((bRam0000000004f9c695 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9648);
    bRam0000000004f9c695 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

