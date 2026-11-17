/* IL2CPP: Dino.BusSand.App.Ads$$get_LastInterGate
System_String_o* Dino_BusSand_App_Ads__get_LastInterGate (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$get_LastInterGate
   System_String_o* Dino_BusSand_App_Ads__get_LastInterGate (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Ads__get_LastInterGate_2177a04(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8e9 & 1) == 0) {
                    /* catch() { ... } // from try @ 022779e4 with catch @ 02277a20 */
    FUN_02132f7c(PTR_DAT_04cabaa8);
    bRam0000000004f9b8e9 = 1;
  }
  lVar2 = *(long *)puVar1;
                    /* try { // try from 02277a3c to 02377aaf has its CatchHandler @ 02277a3c
                       catch() { ... } // from try @ 02277a3c with catch @ 02277a3c
                       catch() { ... } // from try @ 02277abc with catch @ 02277a3c */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48);
}

