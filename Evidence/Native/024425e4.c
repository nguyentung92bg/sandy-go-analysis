/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Settle
System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Settle (Dino_BusSand_Cheat_AutoQa_o* __this, System_Func_bool__o* done, float seconds, System_Collections_Generic_List_string__o* seen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Settle
   System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Settle (Dino_BusSand_Cheat_AutoQa_o*
   __this, System_Func_bool__o* done, float seconds, System_Collections_Generic_List_string__o*
   seen, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__Settle_23425e4
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 024425e4 to 025425eb has its CatchHandler @ 024425f4 */
  puVar1 = PTR_DAT_04cb9698;
                    /* try { // try from 024425ec to 025425f7 has its CatchHandler @ 024420d0 */
                    /* catch() { ... } // from try @ 024425e4 with catch @ 024425f4 */
  if ((bRam0000000004f9c69f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9698);
    bRam0000000004f9c69f = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_Cheat_AutoQa__Settle_d__53___ctor_2355174(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_3);
    *(undefined4 *)(lVar2 + 0x38) = param_1;
    *(undefined8 *)(lVar2 + 0x30) = param_4;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_4);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

