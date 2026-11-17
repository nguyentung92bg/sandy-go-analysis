/* IL2CPP: Dino.BusSand.App.LanguageFonts$$HasOwnFace
bool Dino_BusSand_App_LanguageFonts__HasOwnFace (System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$HasOwnFace
   bool Dino_BusSand_App_LanguageFonts__HasOwnFace (System_String_o* lang, const MethodInfo*
   method); */

uint Dino_BusSand_App_LanguageFonts__HasOwnFace_2151bc0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000004f9b7c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab528);
    FUN_02132f7c(PTR_DAT_04cab530);
    bRam0000000004f9b7c6 = 1;
  }
  puVar1 = PTR_DAT_04cab530;
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)PTR_DAT_04cab530;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
                    /* try { // try from 02251c28 to 02351c4f has its CatchHandler @ 02251c28
                       catch(type#1 @ 00000000) { ... } // from try @ 02251c28 with catch @ 02251c28
                       catch(type#1 @ 00000000) { ... } // from try @ 02251d0c with catch @ 02251c28
                        */
    uVar2 = System_Collections_Generic_Dictionary_object__object___FindEntry_34b4a60
                      (**(long **)(lVar3 + 0xb8),param_1,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)PTR_DAT_04cab528 + 0x20) + 0xc0) + 0x110));
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02251c50 to 02351c5f has its CatchHandler @ 02251d00 */
  FUN_02133224();
}

