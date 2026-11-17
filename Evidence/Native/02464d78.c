/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_I
Dino_BusSand_Cheat_CheatManager_o* Dino_BusSand_Cheat_CheatManager__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_I
   Dino_BusSand_Cheat_CheatManager_o* Dino_BusSand_Cheat_CheatManager__get_I (const MethodInfo*
   method); */

undefined8 Dino_BusSand_Cheat_CheatManager__get_I_2364d78(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cba458;
                    /* catch() { ... } // from try @ 02464d68 with catch @ 02464d84 */
                    /* try { // try from 02464d88 to 02564d8f has its CatchHandler @ 02464dec */
                    /* try { // try from 02464d90 to 02564dbb has its CatchHandler @ 02464af4 */
  if ((bRam0000000004f9c74c & 1) == 0) {
                    /* catch() { ... } // from try @ 02464bfc with catch @ 02464d94 */
                    /* catch() { ... } // from try @ 02464d34 with catch @ 02464d98 */
                    /* catch() { ... } // from try @ 02464c00 with catch @ 02464d9c */
    FUN_02132f7c(PTR_DAT_04cba458);
                    /* catch() { ... } // from try @ 02464bd8 with catch @ 02464da0 */
    bRam0000000004f9c74c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 02464dbc to 02564dbf has its CatchHandler @ 02464dd8 */
                    /* try { // try from 02464dc0 to 02564ddb has its CatchHandler @ 02464af4 */
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
}

