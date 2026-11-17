/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$set_I
void Dino_BusSand_Cheat_CheatManager__set_I (Dino_BusSand_Cheat_CheatManager_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$set_I
   void Dino_BusSand_Cheat_CheatManager__set_I (Dino_BusSand_Cheat_CheatManager_o* value, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__set_I_2364dd0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04cba458;
                    /* catch() { ... } // from try @ 02464dbc with catch @ 02464dd8 */
                    /* try { // try from 02464ddc to 02564de3 has its CatchHandler @ 02464dec */
                    /* try { // try from 02464de4 to 02564def has its CatchHandler @ 02464af4 */
                    /* catch() { ... } // from try @ 02464d88 with catch @ 02464dec
                       catch() { ... } // from try @ 02464ddc with catch @ 02464dec */
  if ((bRam0000000004f9c74d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    bRam0000000004f9c74d = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *puVar3 = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

