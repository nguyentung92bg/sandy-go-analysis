/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$set_Current
void Dino_BusSand_Cheat_AutoQa__set_Current (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$set_Current
   void Dino_BusSand_Cheat_AutoQa__set_Current (System_String_o* value, const MethodInfo* method);
    */

void Dino_BusSand_Cheat_AutoQa__set_Current_2340ab8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 02440ac8 to 02540acf has its CatchHandler @ 02440d0c */
  if ((bRam0000000004f9c680 & 1) == 0) {
                    /* try { // try from 02440ae0 to 02540aeb has its CatchHandler @ 02440d34 */
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c680 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 02440b00 to 02540b07 has its CatchHandler @ 02440d20 */
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *puVar3 = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

