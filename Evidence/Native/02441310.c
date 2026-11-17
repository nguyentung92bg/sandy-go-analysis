/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$RunAll
System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__RunAll (Dino_BusSand_Cheat_AutoQa_o* __this, System_String_o* only, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$RunAll
   System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__RunAll (Dino_BusSand_Cheat_AutoQa_o*
   __this, System_String_o* only, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__RunAll_2341310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb95a8;
  if ((bRam0000000004f9c689 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb95a8);
    bRam0000000004f9c689 = 1;
  }
                    /* try { // try from 02441350 to 0254137b has its CatchHandler @ 024414f8 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_Cheat_AutoQa__RunAll_d__31___ctor_2354330(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 0244137c to 02541387 has its CatchHandler @ 024414e4 */
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
                    /* try { // try from 02441388 to 025414d7 has its CatchHandler @ 02441168 */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

