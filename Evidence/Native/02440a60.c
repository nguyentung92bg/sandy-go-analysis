/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_Current
System_String_o* Dino_BusSand_Cheat_AutoQa__get_Current (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_Current
   System_String_o* Dino_BusSand_Cheat_AutoQa__get_Current (const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__get_Current_2340a60(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 02440a64 to 02540a67 has its CatchHandler @ 02440d10 */
  if ((bRam0000000004f9c67f & 1) == 0) {
                    /* try { // try from 02440a80 to 02540a83 has its CatchHandler @ 02440d34 */
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c67f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 02440a9c to 02540abb has its CatchHandler @ 02440d14 */
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
}

