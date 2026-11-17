/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_SetId
System_String_o* Dino_BusSand_Core_LevelCatalog__get_SetId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_SetId
   System_String_o* Dino_BusSand_Core_LevelCatalog__get_SetId (const MethodInfo* method); */

undefined8 Dino_BusSand_Core_LevelCatalog__get_SetId_240fab0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cb1868;
                    /* try { // try from 0250fac0 to 0260fac7 has its CatchHandler @ 0250fca8 */
  if ((bRam0000000004f9cb37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1868);
                    /* try { // try from 0250fad8 to 0260fae3 has its CatchHandler @ 0250fca0 */
    bRam0000000004f9cb37 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_LevelCatalog__Ensure_240fb0c();
                    /* try { // try from 0250fb00 to 0260fb0b has its CatchHandler @ 0250fc98 */
  return *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
}

